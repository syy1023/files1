#coding=utf-8 
import threading,time

def loop():
    print "thread %s is running****"%threading.current_thread().name
    n=0
    while n<10:
        n=n+1
        print 'thread %s >>>%s'%(threading.current_thread().name,n)
        time.sleep(1)
    print "thread %s end"% threading.current_thread().name


if __name__=="__main__":
    print 'thread %s is running*******'%threading.current_thread().name
    t=threading.Thread(target=loop,name='LoopThread')
    t.start()
    t.join()
    print 'thread %s end'%threading.current_thread().name




def process_thread(name):
    local_school=threading.local()
    local_school.student=name
    print 'hello %s (int %s) \n'%(local_school.student,threading.current_thread().name)
    

t1=threading.Thread(target=process_thread,args=('anryan1',),name='ThreadA')
t2=threading.Thread(target=process_thread,args=('anryan2',),name='ThreadB')
t1.start()
t2.start()
t1.join()
t2.join()

        
