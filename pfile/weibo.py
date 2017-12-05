#coding=utf-8
from appium import webdriver
import time

desired_caps = {}
desired_caps['platformName'] = 'Android'
desired_caps['platformVersion'] = '4.4.2'
desired_caps['deviceName'] = '995fc890'
desired_caps['appPackage'] = 'com.sina.weibo'
desired_caps['appActivity'] = 'com.sina.weibo.SplashActivity'

driver = webdriver.Remote('http://localhost:4723/wd/hub', desired_caps)

time.sleep(5)
driver.find_element_by_id("plus_icon").click()
