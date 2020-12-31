#include <stdio.h>
#include <stdlib.h>

//Nama : Tri Waluyo
// Kelas : 4103
// NIM : A11.2017.10097

int main()
{
    printf("Analisis Logika dan Aritmatika\n");
    printf("========================================\n");
    printf("Menghitung lama keterlambatan mahasiswa\n");
    printf("|\n");

        int jam1;
        int jam2;
        int menit1;
        int menit2;
        int detik1;
        int detik2;
        int t;


    printf("Waktu Masuk\n");
    printf("Masukkan Jam Masuk\t :");
    scanf("%d", &jam1);
    printf("Masukkan Menit Masuk\t :");
    scanf("%d", &menit1);
    printf("Masukkan Detik Masuk\t :");
    scanf("%d", &detik1);
    printf("\n");

    printf("Waktu Kehadiran\n");
    printf("Masukkan Jam Hadir\t :");
    scanf("%d", &jam2);
    printf("Masukkan Menit Hadir\t :");
    scanf("%d", &menit2);
    printf("Masukkan Detik Hadir\t :");
    scanf("%d", &detik2);
    printf("\n");

    t =((jam2*3600)+(menit2*60)+detik2)-((jam1*3600)+(menit1*60)+detik1);
    printf("Keterlambatan\n");
    printf("Lama Keterlambatan\t : %d detik", t);
    return 0;
}
