s = input()
length = len(s)

data = s.split('+')
data.sort()

for i in range(len(data)):
	print("%s" %data[i], end='')

	if i < len(data)-1:
		print(end='+')