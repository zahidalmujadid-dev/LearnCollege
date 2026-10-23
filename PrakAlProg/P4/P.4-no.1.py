def faktorial(n: int) -> int:
    hasil = 1
    for i in range(1, n + 1):
        hasil *= i
    return hasil

def main():
    n = int(input("Masukkan Angka yang akan di Faktorialkan: "))
    if n < 0:
        print("Faktorial tidak terdefinisi untuk bilangan negatif.")
        return

    hasil = faktorial(n)
    print(f"Hasil: {hasil}")

if __name__ == "__main__":
    main()