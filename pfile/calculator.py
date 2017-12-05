#coding=utf-8
from appium import webdriver

desired_caps = {}
desired_caps['platformName'] = 'Android'
desired_caps['platformVersion'] = '4.4.2'
desired_caps['deviceName'] = 'VGVGBEAMEAS4PFNZ'
desired_caps['appPackage'] = 'com.miui.calculator'
desired_caps['appActivity'] = 'com.miui.calculator.cal.NormalCalculatorActivity'

driver = webdriver.Remote('http://localhost:4723/wd/hub', desired_caps)

driver.find_element_by_name("1").click()

driver.find_element_by_name("5").click()

driver.find_element_by_name("9").click()

driver.find_element_by_id("btn_del_1").click()

driver.find_element_by_name("8").click()

driver.find_element_by_name("7").click()

driver.find_element_by_id("btn_plus").click()

driver.find_element_by_name("6").click()
driver.find_element_by_name("2").click()

driver.find_element_by_id("btn_equal").click()

print driver.is_app_installed("995fc890")



driver.get_screenshot_as_file("/images/result.png")


driver.quit()
