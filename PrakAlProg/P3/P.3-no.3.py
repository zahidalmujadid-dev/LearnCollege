acuan=int(input('Masukkan Bilangan ke-1: '))
for i in range (2, 11):
	pembanding=int(input(f'Masukkan Bilangan ke-{i}: '))
	if pembanding<acuan:
		acuan=pembanding
print(f'Bilangan Terkecilnya: {acuan}')