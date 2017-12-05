#coding=utf-8
import random
import string

import hashlib


def quickRandom(num):
    return ''.join(random.sample(string.ascii_letters + string.digits, num))

def splice(x):
    return '='.join(x)

#将obj的iteritems的值按照第一个key值即key[0]排序
#取数组verifys里面的public字段
#update把一个字典对象更新到字典中，如把dict1更新到dict中
#verify
def addSign(obj,verify):
    obj['tradeNo']=quickRandom(32)
    obj['key']=verify["public"]
    kobj=sorted(obj.iteritems(),key= lambda pair:pair[0])

    signStr=''.join(map(splice,kobj))

    sign=hashlib.md5()
    sign.update(signStr+verify["secret"])
    obj["sign"]=sign.hexdigest()
   # return obj


obj_assign = {   
    "body":"ddddddddd",
    "latitude":"22",
    "longitude":"33",
    "sku":"fv",
    "url":"df",
    "srcHash":"assign"+quickRandom(15)
}    



verifys = [
    {"id": 1, "status": 1, "project_id": 1, "type": 0, "public": '9f19ec6957869ee16707131e7fb88fc6', "secret": '92e0754e148fa43a22997ba8f508fa0c',},
    {"id": 2, "status": 1, "project_id": 1, "type": 1, "public": '1083eab1c3dc1f25760ae998f57d9317', "secret": 'fcaa99870961bf9b1b1cd9ca5c315104',},
    {"id": 4, "status": 1, "project_id": 2, "type": 0, "public": 'e67e8b09bd29278d2e0c00cac3b8ed45', "secret": 'ae41f8df889974e45c230123a7a6dac1',},
    {"id": 5, "status": 1, "project_id": 2, "type": 1, "public": '1d44394e10334afb8dfc5de5d02f9915', "secret": '63e1bfdf183f04aedccd52fb5bd249b4',},
    {"id": 7, "status": 1, "project_id": 3, "type": 0, "public": 'baf7ed134177d56e342d012fbf6b6661', "secret": 'f561e824a83b8039f29e22073f082b84',},
    {"id": 8, "status": 1, "project_id": 3, "type": 1, "public": 'd27ea8bf44f21f9e4adb50cea34f8a20', "secret": '603b2ad9211ffae2d3ad22de08fd0f2b',},
    {"id": 10, "status": 1, "project_id": 4, "type": 0, "public": 'ba948316c794d1fb5d064c47d1c806ed', "secret": 'eecbd0c2aa41409575532a694a0a6829',},
    {"id": 11, "status": 1, "project_id": 4, "type": 1, "public": 'd9b8190a28ae0c8ebc61b7db3f7ac6fd', "secret": 'ae3bc0edfc3d62ef91f35014a89d4816',}
]
    


verify = verifys[1]


#print addSign(obj_assign,verify)

for key in obj_assign:
    print key,": ", obj_assign[key]

'''
obj.iteritems()
 kobj = [ ('key1', '1'), ('key2', 2)]
 pair = ('key1', '1')
map()
  ['key1=1', 'key2=2']
''.join()
  'key1=1key2=2'
    lambda pair: pair[0]
  
  def xx( pair) :
	return pair[0]
'''
