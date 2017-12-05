#coding=utf-8
from appium import webdriver

desired_caps = {}
desired_caps['platformName'] = 'Android'
desired_caps['platformVersion'] = '4.4.2'
desired_caps['deviceName'] = 'VGVGBEAMEAS4PFNZ'
desired_caps['appPackage'] = 'com.sina.weibo'
desired_caps['appActivity'] = 'com.sina.weibo.MainTabActivity'

driver = webdriver.Remote('http://localhost:4723/wd/hub', desired_caps)

driver.find_element_by_id("plus_icon").click()

driver.find_element_by_xpath("//*[@text='相册']/..").click()

driver.find_element_by_id("photo_album_grideview_item_select").click()

driver.find_element_by_xpath("//*[@text='下一步(1)']/..").click()

driver.find_element_by_xpath("//*[@text='下一步(1)']/..").click()

driver.find_element_by_id("edit_view").click()

driver.find_element_by_id("tv_location']/..").click()

driver.find_element_by_xpath("//*[@text='鼎太风华七期']").click()

driver.find_element_by_xpath("//*[@text='发送']/..").click()


