def hitung_luas_segitiga():
    a = int(input("masukan alasnya: "))
    t = float(input("sekarang masukan tinggi: "))
    L = (a * t) / 2
    print("ini hasilnya:", L)

def konversi_jam_ke_detik():
    print("Selamat Datang di System Konversi Detik")
    print("Silahkan isi sesuai petunjuk")

    h = float(input("HH: "))
    h = h * 3600

    m = float(input("MM: "))
    m = m * 60

    s = float(input("SS: "))

    K = int(h + m + s)
    print("Monggo:", K)

def main():
    while True:
        print("\n=== MENU ===")
        print("1. Hitung Luas Segitiga")
        print("2. Konversi Jam/Waktu ke Detik")
        print("3. Keluar")
        pilihan = input("Pilih menu (1/2/3): ")

        if pilihan == "1":
            hitung_luas_segitiga()
        elif pilihan == "2":
            konversi_jam_ke_detik()
        elif pilihan == "3":
            print("Keluar dari program.")
            break
        else:
            print("Pilihan tidak valid, coba lagi.")


main()