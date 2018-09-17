n, t = map(int, input().split())
flag = 0

start = int('1' + '0'* (n-1))
end = start * 10

for x in range(start, end):
	if x%t is 0:
		print(x)
		flag = 1
		break
	
if flag is 0:
	print(-1)