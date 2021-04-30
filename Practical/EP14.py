import string, sys
def pgr(str1, alphabet=string.ascii_lowercase):
	alphaset = set(alphabet)
	return alphaset <= set(str1.lower())

print(pgr('The quick brown fox jumps over the lazy dog'))
