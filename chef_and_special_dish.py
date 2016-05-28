'''
https://www.codechef.com/MARCH16/problems/CHEFSPL
One day, Chef prepared D brand new dishes. He named the i-th dish by a string Si. After the cooking, he decided to categorize each of these D dishes as special or not.
A dish Si is called special if it's name (i.e. the string Si) can be represented in the form of a double string by removing at most one (possibly zero) character from it's name from any position.
A string is called a double string if it can be represented as a concatenation of two identical, non-empty strings.
e.g. "abab" is a double string as it can be represented as "ab" + "ab" where + operation denotes concatenation.
Similarly, "aa", "abcabc" are double strings whereas "a", "abba", "abc" are not.

'''
t=int(input())
print(t,type(t))
for i in range(t):
	s=input()
	l=len(s)
	m=int(l/2)
	if(l%2==0):
		if(s[:m]==s[m:]):
			print("YES")
		else:
			print("NO")
	else:
		for x in range(l):
			new=s[:x]+s[x+1:]
			if(new[:m]==new[m:]):
				print("YES")
				break
			else:
				print("NO")
