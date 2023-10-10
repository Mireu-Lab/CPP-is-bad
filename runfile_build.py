from tqdm import tqdm

import subprocess
import os

for file in tqdm(os.listdir("src")):
    try:
        subprocess.call(["g++", f"src/{file}", "-o", f"run/{file[:-4]}"])
    
    except:
        print(f"{file} 해당 파일에서 코드 이슈가 발생되었습니다.")