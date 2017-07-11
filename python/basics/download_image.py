import random
import urllib.request
import sys

def download_web_image():
    url = sys.argv[1]
# next 2 line prepare name to be given
    name = random.randrange(1, 1000)
    full_name = str(name) + ".jpg"
#1st argument takes url, 2nd takes name we want to give before saving.
    urllib.request.urlretrieve(url, full_name)

if __name__ == '__main__':
    download_web_image()
