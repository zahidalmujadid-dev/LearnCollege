jenis = ["Motor", "Mobil", "Bus"]
jumlahMotor = 0
jumlahMobil = 0
jumlahBus = 0
jumlahPendapatan = 0
terlama = 0

while True:
    while True:
        print("=== KAMPUS PARKIR PINTAR ===")
        print("1. Motor\n2. Mobil\n3. Bus")
        pilihan = int(input("Jenis Kendaraan: "))
        if 1 <= pilihan <= 3:
            break

    while True:
        while True:
            jamMasuk = int(input("Jam Masuk  : "))
            jamKeluar = int(input("Jam Keluar : "))
            if 0 <= jamMasuk <= 23 and 0 <= jamKeluar <= 23:
                break

        while True:
            lanjut = input("Keluar hari berikutnya (y/n): ")
            if lanjut != 'y' and lanjut != 'n':
                print("kurang teliti")
            else:
                break

        if not (lanjut == 'n' and jamKeluar < jamMasuk):
            break

    if lanjut == 'y':
        lamaParkir = (24 - jamMasuk) + jamKeluar
    else:
        lamaParkir = jamKeluar - jamMasuk

    if lamaParkir == 0:
        lamaParkir = 1

    if lamaParkir > terlama:
        terlama = lamaParkir

    if pilihan == 1:
        biayaParkir = 2000
        biayaCont = 1000
        biayaMaks = 10000
        jumlahMotor += 1
    elif pilihan == 2:
        biayaParkir = 4000
        biayaCont = 2000
        biayaMaks = 20000
        jumlahMobil += 1
    elif pilihan == 3:
        biayaParkir = 8000
        biayaCont = 4000
        biayaMaks = 40000
        jumlahBus += 1

    if lanjut == 'y':
        biayaMaks *= 2

    print(f"Jenis Kendaraan    :{jenis[pilihan - 1]}")
    print(f"Lama Parkir        :{lamaParkir}jam")

    for i in range(2, lamaParkir + 1):
        biayaParkir += biayaCont

    if biayaParkir > biayaMaks:
        biayaParkir = biayaMaks

    print(f"Biaya Parkir       :Rp.{biayaParkir}\n")
    jumlahPendapatan += biayaParkir

    while True:
        lanjut = input("Ada kendaraan lain (y/n): ")
        if lanjut == 'y' or lanjut == 'n':
            break

    print()

    if lanjut != 'y':
        break

print("=== REKAP SHIFT ===")
print(f"Motor              : {jumlahMotor}")
print(f"Mobil              : {jumlahMobil}")
print(f"Bus                : {jumlahBus}")
print(f"Total Pendapatan   : Rp.{jumlahPendapatan}")
print(f"Parkir Terlama     : {terlama}jam")
