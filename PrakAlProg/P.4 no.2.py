def hitung_rata_rata(jumlah_angka: int) -> float:
    total = 0.0
    for i in range(1, jumlah_angka + 1):
        angka = float(input(f"Masukkan Angka ke-{i}: "))
        total += angka
    return total / jumlah_angka

def main():
    jumlah = int(input("Ada Berapa Angkanya: "))
    if jumlah <= 0:
        print("Jumlah angka harus lebih besar dari 0.")
        return
    
    hasil = hitung_rata_rata(jumlah)
    print(f"Rata-ratanya: {hasil:.2f}")

if __name__ == "__main__":
    main()