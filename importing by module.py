#importing cal.py by module
import cal 
print(cal.add(3,5))
#from math module
from math import sqrt,factorial
print(sqrt(16))
print(factorial(16))
#using *
from math import *
print(sqrt(16))
print(factorial(16))
#locating python moduley
import sys
print(sys.path)
#renaming the python module
import math as m
print(m.sqrt(16))
print(m.factorial(16))
print(m.tan(2))

import random
print(random.randint(0,5))

import time
current_time=time.localtime()
formatted_time=time.strftime("%Y-%m-%H:%M:%S",current_time)
print("formatted time:",formatted_time)

import os
os.mkdir("python programming")
for i in range(0,100):
    os.mkdir(f"python programming/dayP{i+1}")