#include <stdio.h>
#include <math.h>
#define MAXROWS 30
#define MAXCOLS 30

void readinput(int a[][MAXCOLS],int m,int n)
{
    int row,col;
    for (row=0;row<m;++row)
    
        printf(" Masukan data untuk baris ke. %2d \n",row+1);
        for (col=0;col<n;++col)
            scanf("%d",&a[row][col]);
    
    printf("TABLE 1 \n");
    for (row=0;row<m;++row)
    
        printf("\n");
        for (col=0;col<n;++col)
            printf(" %d ",a[row][col]); //4 menambah spasi %c
}   


void largest(int a[][MAXCOLS],int m,int n)
{
    int i,j,largest;
    largest = a[0][0];
    for (i=0;i<m;++i)
    {
        for (j=0;j<n;++j)
            if (a[i][j]>largest)
                largest=a[i][j];
    }
    printf("\n\nElemen terbesar matrik adalah %d",largest);
}

int main() //9 standart int
{
    int nrows,ncols;
    int a[MAXROWS][MAXCOLS];
    do{ //10 checking max row dan col
        printf("Berapa banyaknya baris matrix? ");
        scanf("%d",&nrows);
        printf("Berapa banyaknya kolom the matrix? ");
        scanf("%d",&ncols);
        if (nrows > MAXROWS || ncols > MAXCOLS){
            printf("ERROR: Jumlah Baris dan Kolom melebihi batas!!!\n\n");
        }
    }while(nrows > MAXROWS || ncols > MAXCOLS);
    printf("Table");
    readinput(a,nrows,ncols);
    largest(a,nrows,ncols);

    return 0; //standart int
}

// #include <stdio.h>
// #include <math.h>
// #define MAXROWS 30
// #define MAXCOLS 30

// void readinput(int a[][MAXCOLS],int m,int n)
// {
//     int row,col;
//     for (row=0;row<m;++row)
    
//         printf(" Masukan data untuk baris ke. %2d \n",row+1);
//         for (col=0;col<n;++col)
//         { //1 kurang {}
//             scanf("%d",&a[row][col]);
//         } //2 kurang {}
    
//     printf("TABLE 1 \n");
//     for (row=0;row<m;++row)
    
//         printf("\n");
//         for (col=0;col<n;++col)
//         { //3 kurang {}
//             printf(" %d ",a[row][col]); //4 menambah spasi %c
//         } //5 kurang {}
// }   


// void largest(int a[][MAXCOLS],int m,int n)
// {
//     int i,j,largest;
//     largest = a[0][0];
//     for (i=0;i<m;++i)
//     {
//         for (j=0;j<n;++j)
//         { //6 kurang {}
//             if (a[i][j]>largest)
//             { //7 kurang {}
//                 largest=a[i][j];
//             } //8 kurang {}
//         }
//     }
//     printf("\n\nElemen terbesar matrik adalah %d",largest);
// }

// int main() //9 standart int
// {
//     int nrows,ncols;
//     int a[MAXROWS][MAXCOLS];
//     do{ //10 checking max row dan col
//         printf("Berapa banyaknya baris matrix? ");
//         scanf("%d",&nrows);
//         printf("Berapa banyaknya kolom the matrix? ");
//         scanf("%d",&ncols);
//         if (nrows > MAXROWS || ncols > MAXCOLS){
//             printf("ERROR: Jumlah Baris dan Kolom melebihi batas!!!\n\n");
//         }
//     }while(nrows > MAXROWS || ncols > MAXCOLS);
//     printf("Table");
//     readinput(a,nrows,ncols);
//     largest(a,nrows,ncols);

//     return 0; //standart int
// }

// #include <stdio.h>
// #include <math.h> // Tetap dipertahankan jika nanti dibutuhkan fungsi matematika
// #define MAXROWS 30
// #define MAXCOLS 30

// void readinput(int a[][MAXCOLS], int m, int n) {
//     int row, col;
//     for (row = 0; row < m; ++row) {
//         // Penggunaan %2d di bawah ini sudah tepat untuk merapikan tampilan angka baris
//         printf(" Masukan data untuk baris ke. %2d \n", row + 1); 
//         for (col = 0; col < n; ++col) {
//             scanf("%d", &a[row][col]);
//         }
//     }
//     printf("TABLE 1 \n");
//     for (row = 0; row < m; ++row) {
//         printf("\n");
//         for (col = 0; col < n; ++col) {
//             printf(" %d ", a[row][col]); // Operasi cetak tanpa mengubah nilai variabel asli
//         }
//     }
// }

// void largest(int a[][MAXCOLS], int m, int n) {
//     int i, j, largest;
//     largest = a[0][0];
//     for (i = 0; i < m; ++i) {
//         for (j = 0; j < n; ++j) {
//             if (a[i][j] > largest) {
//                 largest = a[i][j];
//             }
//         }
//     }
//     printf("\n Elemen terbesar matrik adalah %d\n", largest);
// }

// int main() { // Diperbaiki dari void menjadi int
//     int nrows, ncols;
//     int a[MAXROWS][MAXCOLS];

//     printf("Berapa banyaknya baris matrix? ");
//     scanf("%d", &nrows);
//     printf("Berapa banyaknya kolom the matrix? ");
//     scanf("%d", &ncols);

//     // Validasi tambahan untuk mencegah kerentanan Buffer Overflow (Array Out of Bounds)
//     if (nrows > MAXROWS || ncols > MAXCOLS) {
//         printf("Error: Jumlah baris atau kolom melebihi batas maksimal (%d)!\n", MAXROWS);
//         return 1; // Keluar dari program dengan kode error 1
//     }

//     printf("Table");
//     readinput(a, nrows, ncols);
//     largest(a, nrows, ncols);

//     return 0; // Diperbaiki: tanda sukses eksekusi program standar modern
// }
