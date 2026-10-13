hasil=0
print('1 + 2 + ... + n')
n=int(input("Masukkan nilai n: "))
while(n>=1):
	hasil+=n
	n-=1
print(f'1 + ... + n = {hasil}')