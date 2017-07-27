import sqlite3 as sql

#connect to database
connection = sql.connect("ADARSH.db")

#make a cursor which will move in the database
cursor = connection.cursor()

#execute the different command
def execute(cursor, command):
    return cursor.execute(command)

#print the result
def print_result(result):
    for var in result:
        print(var)

#command = """ select lname from emplyee where fname='Geetika' and lname = 'Maurya' """

#order by command
#command = """select * from emplyee order by lname asc """

#Insert command
#pattern insert into table_name 
#(colm1, colm2, .....) values(colm1_value, colm2_value...........);
#command = """ insert into emplyee(fname, lname, gender) values('mahendra singh', 'dhoni', 'M')"""
#execute(cursor, command)

#command = """select * from emplyee order by lname asc """

#select NULL values
#command = """ select * from emplyee where dob is null """

#update
# we will update the value NULL into 0

# command = """select * from emplyee where 1=0"""
# result = execute(cursor, command)
# col_list = [d[0] for d in result]

# def update_null(cursor, col_list):
#     for each_col in col_list:
#         #print(each_col)
#         command = "update emplyee set {col_name}='0' where {col_name} is null".format(
#                     col_name=each_col)
#         execute(cursor, command)
#         connection.commit()
#         connection.close()

# update_null(cursor, col_list)

# #connect to database
# connection = sql.connect("ADARSH.db")

# #make a cursor which will move in the database
# cursor = connection.cursor()
# command = """select * from emplyee """
# result = execute(cursor, command)
# print_result(result)

# delete command
# command = "delete from emplyee where dob is null "

# result = cursor.execute(command)

def show_table(cursor, result=None):
    if not result:
        command = "select * from emplyee"
        result = execute(cursor, command)
    print_result(result)

# command = "select * from emplyee limit 3"
# result = cursor.execute(command)

# count()

# command = "select count(fname) from emplyee where dob is null"
# result = execute(cursor, command)

# like
command = "select * from emplyee where fname like='G%' "
result = cursor.execute(command)

show_table(cursor, result)