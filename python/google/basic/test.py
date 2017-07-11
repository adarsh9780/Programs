def verbing(s):

  if len(s) >= 3:
    if s[-3:] == 'ing':
      a = s.__add__('ly')

    else:
      a = s + 'ing'

  return a

print (verbing('swiming'))
