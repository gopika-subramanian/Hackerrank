from selenium import webdriver
from webdriver_manager.chrome import ChromeDriverManager
from time import sleep
import time
import pickle
driver=webdriver.Chrome(ChromeDriverManager().install())
driver.get('https://www.flipkart.com/')

#LOGINBEGIN
logininp=driver.find_element_by_xpath('/html/body/div[2]/div/div/div/div/div[2]/div/form/div[1]/input')
logininp.send_keys('durgasubramanian94@gmail.com')

passinp=driver.find_element_by_xpath('/html/body/div[2]/div/div/div/div/div[2]/div/form/div[2]/input')
passinp.send_keys('svdsgk6')

driver.find_element_by_xpath('/html/body/div[2]/div/div/div/div/div[2]/div/form/div[4]/button').click()
#LOGINEND

cookies = pickle.load(open("/home/m0n574/.wdm/drivers/chromedriver/linux64/99.0.4844.51/cookies.pkl", "rb"))
for cookie in cookies:
    driver.add_cookie(cookie)

search=driver.find_element_by_xpath('/html/body/div/div/div[1]/div[1]/div[2]/div[2]/form/div/div/input')
search.send_keys('Hat')
#search.find_element_by_xpath('/html/body/div/div/div[1]/div[1]/div[2]/div[2]/form/div/button/svg').click()


time.sleep(6000)
