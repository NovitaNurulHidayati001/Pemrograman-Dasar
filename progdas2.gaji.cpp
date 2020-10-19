/* Program Untuk Menghitung Gaji Karyawan */
/* Nama : Novita Nurul Hidayati */
/* NIM : 20051397001 */

#include<stdio.h>
#include<conio.h>
#define jam_kerja 48
#define lembur_perjam 4000
main()
{
	char nama[19], gol;
	float jam_lembur=10, gaji=520000,tot_jamkerja=48;
	printf("PROGRAM MENGHITUNG UPAH MINGGUAN KARYAWAN \n");
	printf("===============20051397001=============== \n\n");
	printf("Nama : Novita Nurul Hidayati \n");
	printf("Golongan : D \n");
	printf("Total Jam Kerja : 58 \n");
	printf("========================================= \n\n");
	jam_lembur=tot_jamkerja-jam_kerja;
	if(tot_jamkerja>jam_kerja)
	if(gol=='A'||gol=='a')
	{gaji=(5000*jam_kerja)+(4000*jam_lembur);}
	else
	if(gol=='B'||gol=='b')
	{gaji=(7000*jam_kerja)+(4000*jam_lembur);}
	else
	if(gol=='C'||gol=='c')
	{gaji=(8000*jam_kerja)+(4000*jam_lembur);}
	else
	if(gol=='D'||gol=='d')
	{gaji=(10000*jam_kerja)+(4000*jam_lembur);}
	if(tot_jamkerja<jam_kerja)
	if(gol=='A'||gol=='a')
	gaji=(5000*tot_jamkerja);
	else
	if(gol=='B'||gol=='b')
	gaji=(7000*tot_jamkerja);
	else
	if(gol=='C'||gol=='c')
	gaji=(8000*tot_jamkerja);
	else
	if(gol=='D'||gol=='d')
	gaji=(10000*tot_jamkerja);
	printf("NAMA KARYAWAN : NOVITA NURUL HIDAYATI \n",nama);
	printf("GAJI KARYAWAN : %.2f \n",gaji);
	getch();
}
