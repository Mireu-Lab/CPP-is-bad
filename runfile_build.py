from tqdm import tqdm

import subprocess
import os

for file in tqdm(os.listdir("src")):
    try:
        fileName = file.split(".")

        subprocess.call(["g++", f"src/{file}", "-o", f"run/{fileName[0]}_{fileName[1]}.run"])
    
    except:
        print(f"{file} 해당 파일에서 코드 이슈가 발생되었습니다.")