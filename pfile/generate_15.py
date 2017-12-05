#coding=utf-8

import string
import random

def quickRandom(num):
    return ''.join(random.sample(string.ascii_letters + string.digits, num))


print quickRandom(15)
