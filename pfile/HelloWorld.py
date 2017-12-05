#coding=utf-8
import sys
import os
import unittest
from time import sleep

class HelloWorld(unittest.TestCase):
    def test_addContact(self):
        desired_caps = {}
        desired_caps['platformName'] = 'Android'
        desired_caps['platformVersion'] = '4.4.2'
        desired_caps['deviceName'] = '995fc890'
        desired_caps['appPackage'] = 'com.android.contacts'
        desired_caps['appActivity'] = 'com.android.contacts.activities.PeopleActivity'
        pass
if __name__=='__main__':
    suite=unittest.TestLoader().loadTestFromTestCase(HelloWorld)
    unittest.TextTestRunner(verbosity=2).run(suite)
