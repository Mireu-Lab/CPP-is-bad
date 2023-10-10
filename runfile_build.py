from tqdm import tqdm

import subprocess
import os

for file in tqdm(os.listdir("src")):
    subprocess.call(["g++", f"src/{file}", "-o", f"run/{file[:5]}"])
