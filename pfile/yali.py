
#coding=utf-8
import urllib
import threading
from time import ctime,sleep
def t1(func):
    for i in range(10):
        
        f=urllib.urlopen("https://www.baidu.com")
        s=f.read()
        print "round:%s, tread number:%s, returnValue:%s,time:%s" % (i, func, s, ctime())
        sleep(1)
if __name__ == '__main__':
    threads=[]
    for i in range(5):
        name = "t%s" % (i)
        name = threading.Thread(target=t1,args=(i,))
        threads.append(name)
    for t in threads:
        t.setDaemon(True)
        t.start()
    t.join()
