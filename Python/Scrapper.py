from bs4 import BeautifulSoup
import requests

url="https://www.spokenenglish.guru/active-and-passive-voice-rules-tricks-charts-exercises-examples-pdf/"
html_content = requests.get(url).text

# change and add compare values to be extracted
cmp="Active:"
cmp1="Passive:"
soup = BeautifulSoup(html_content, 'html.parser')
f = open("passive.txt", "w")
f2 = open("active.txt", "w")
##print(soup.prettify())
for data in soup.find_all("p"): 
    #print(data.get_text())
    if cmp in data.get_text():
        f2.write(data.get_text().partition("Passive:")[0].partition("Active:")[2])
        f2.write("\n")
    if cmp1 in data.get_text():
        f.write(data.get_text().partition("Passive:")[2])
        f.write("\n")
f.close()
f2.close()

