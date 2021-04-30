mycode = 'print("hello world")'
code = """
def multiply(x,y):
	return x*y
print('Multiply of 2 and 3 is: ', multiply(2,3))
"""

exec(mycode)
exec(code)
