import os
import re

dir = os.getcwd()
print(dir)
files = os.listdir()
for file in files:
    new_name = file.replace("-", "_")
    os.rename(f"{dir}\{file}", f"{dir}\{new_name}")