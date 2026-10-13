age=int(input('Masukkan Umur Anda: '))
if(age<=5):
    age=str('Balita')
elif(age>5)and(age<=12):
    age=str('Anak-anak')
elif(age>12)and(age<=17):
    age=str('Remaja')
elif(age>17)and(age<=60):
    age=str('Dewasa')
else:
    age=str('Sesepuh')
print('Anda termasuk', age)