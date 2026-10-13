# Program Konversi Jam/Waktu menjadi DetikL

print("Selamat Datang di System Konversi Detik")
print("Silahkan isi sesuai petunjuk")
h = float(input("HH: "))
h = h * 3600
m = float(input("MM: "))
m = m * 60
s = float(input("SS: "))
K = int(h + m + s)
print("Monggo:", K)