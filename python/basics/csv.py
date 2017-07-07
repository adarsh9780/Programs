from urllib import request
import sys

url = sys.argv[1]

def download_csv():
    response = request.urlopen(url)
    name = random.randrange(1, 1000)
    full_name = str(name) + ".csv"
    csv = request.urlretrieve(url, full_name)

download_csv()

