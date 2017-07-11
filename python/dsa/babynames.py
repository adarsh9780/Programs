import re
import sys
import subprocess

filename = sys.argv[1]
file_to_write = sys.argv[2]

def grep(filename, file_to_write):
    
    file_to_open = open(filename, 'r')
    text_to_store = file_to_open.read()
    
    names = re.findall(r'<td>[\w]+', text_to_store)
      
    
    for name in names:
        text = open(file_to_write, 'a')
        text.write(name)
        text.write('\n')          
    text.close()
    
#def filter(filename):
#    
#    file_to_open = open(filename)
#    text_to_filter = file_to_open.read()
#    
#    filtered_text = re.findall(r'<td>', text_to_filter)
#    
#    for text in filtered_text:
#        text = open(filename, 'a')

grep(filename, file_to_write)
