from selenium import webdriver
from webdriver_manager.chrome import ChromeDriverManager
from selenium.webdriver.common.by import By

user="ENTERMAIL"
passw="ENTERPASSWORD"
driver = webdriver.Chrome(ChromeDriverManager().install())
#driver=webdriver.Chrome("/home/user/Test/Webdriver/chromedriver")
driver.get("https://www.facebook.com/")
usert=driver.find_element(by=By.NAME, value="email")
#passt=driver.find_element_by_id("password")
passt=driver.find_element(by=By.NAME, value="pass")
usert.send_keys(user)

passt.send_keys(passw)
login=driver.find_element(by=By.NAME, value="login")
login.submit()
