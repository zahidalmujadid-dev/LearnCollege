nilaiTemperatur=float(input("Masukkan Temperaturnya: "))
print("Cuaca", end=" ")
if(nilaiTemperatur>30):
    print('Panas')
elif(nilaiTemperatur>=20):
    print('Hangat')
else:
    print('Dingin')
'''
try:
    nilai_temperatur = float(input("Masukkan nilai Temperatur: "))
    if nilai_temperatur > 30:
        print('Cuaca Panas')
    elif nilai_temperatur >= 20:
        print('Cuaca Hangat')
    else:
        print('Cuaca Dingin')
except ValueError:
    print("Input tidak valid, harap masukkan angka.")
'''