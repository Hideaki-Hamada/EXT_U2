def rev (str):
	rstring = ''
	string = len(str)
	while string > 0:
		rstring += str[string - 1]
		string = string -1
	return rstring
print(rev('12345abcd'))

