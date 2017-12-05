#coding=utf-8
import math
import string

num = 0
while True:
    if math.sqrt(num + 100)-int(math.sqrt(num + 100)) == 0 and math.sqrt(num + 168)-int(math.sqrt(num + 168)) == 0:
        print(num)
        break
    num += 1
