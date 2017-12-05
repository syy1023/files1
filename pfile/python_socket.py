#coding=utf-8
import socket

s=socket.socket()
host=socket.gethostname()
port=4849
s.bind((host,port))

s.listen(8)

print "start"

while True:
    c,addr=s.accept()
    print 'connect to the address:',addr
    c.send("welcome to visit")
    c.close()
