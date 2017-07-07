months = ['January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'September', 'October', 'November', 'December']
month_abbvs = dict( ( (m[:3].lower(), m) for m in months) )

def valid_month(month):
    short_month = month[:3].lower()
    if month:
        return True
    else:
        return False

month = input()

result = valid_month(month)

if result:
    print('Successful')
else:
    print('Bitch')