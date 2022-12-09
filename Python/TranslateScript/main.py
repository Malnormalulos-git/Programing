import time
from selenium import webdriver
import chromedriver_autoinstaller
import re  # regular expressions
import os  # for working with directories

from selenium.webdriver.common.by import By

# from selenium.webdriver.common.keys import Keys

# browser
chromedriver_autoinstaller.install()
driver = webdriver.Chrome()
translation_url = 'https://www.google.com/search?q=eng+to+ukr&oq=eng+to+ukr'
driver.get(translation_url)

# translation dictionary
translation_dictionary = {}

original_directory_path = 'D:\\Programming\\Python\\TranslateScript\\Orginal'


def get_translation(text):
    text_area = driver.find_element(By.XPATH, "//*[@id='tw-source-text-ta']")
    text_area.clear()
    text_area.send_keys(text)
    if len(text) > 10:
        time.sleep(0.7)
    else:
        time.sleep(0.5)
    return driver.find_element(By.XPATH, "//*[@id='tw-target-text']").text


def work_with_original_file(file_name, re_form):
    with open(file_name, 'r', encoding='utf-16') as file:
        data = file.read()
    file.close()
    original = re.findall(re_form, data)
    for i in original:
        if i not in translation_dictionary:
            translation_dictionary[i] = get_translation(i)


def go_to_original_directory_path(base_path, re_form):
    for entry in os.listdir(base_path):
        if os.path.isfile(os.path.join(base_path, entry)):
            work_with_original_file(base_path + '\\' + entry, re_form)


def make_dictionary(path, re_form):
    go_to_original_directory_path(path, re_form)
    # print(translation_dictionary)
    file = open('Dictionary.txt', 'w', encoding='utf-16')
    for i in translation_dictionary:
        file.write("=>" + i + "<=  \t:>" + translation_dictionary[i] + "<:\n")
    file.close()


def use_dictionary(path, re_form):
    with open('Dictionary.txt', 'r', encoding='utf-16') as file:
        data = file.read()
    file.close()
    original = re.findall("=>(.*)<=", data)
    translated = re.findall(":>(.*)<:", data)
    j = 0
    for i in original:
        if i not in translation_dictionary:
            translation_dictionary[i] = translated[j]
            j = j + 1
    # print(translation_dictionary)
    with open('Orginal\\3dBase.ewstr', 'r', encoding='utf-16') as file:
        data = file.read()
    file.close()
    original = re.findall(re_form, data)
    for i in original:
        # print(i)
        data = data.replace(i, translation_dictionary[i])
    with open('Orginal\\3dBase.ewstr', 'w', encoding='utf-16') as file:
        file.write(data)
    file.close()


def main():
    # make_dictionary(original_directory_path, "=>(.*)<")
    use_dictionary(original_directory_path, "=>(.*)<")


if __name__ == '__main__':
    main()