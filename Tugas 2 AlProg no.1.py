age=int(input('Masukkan Umur Anda: '))
if(age<=5):
    print('Balita')
elif(age>5)and(age<=12):
    print('Anak-anak')
elif(age>12)and(age<=17):
    print('Remaja')
elif(age>17)and(age<=60):
    print('Dewasa')
else:
    print('Sesepuh')