/* 

 Metin Celik
 03.10.2021
 
 Girilen bes basamakli sayinin rakamlari tersten yazilmis halini ekrana yazdirmak.
 
*/

#include <stdio.h>

int main()
{ 
	int a;
	int c;
	int rakam1;
	int rakam2;
	int rakam3;
	int rakam4;
	int rakam5;
	int tersi;
	
	printf("\n Sayi giriniz:");
	scanf(" %d",&a);
	c=a/10000;
	
	if (c>0 && c<10)
	
	// Girilen sayi bes basamakliysa;
	{
		// Rakamlari teker teker tespit et.
		rakam1=a/10000;
		rakam2=a%10000/1000;
		rakam3=a%1000/100;
		rakam4=a%100/10;
		rakam5=a%10;
	
		// Rakamlari tersten yazdir.
		tersi=rakam5*10000+rakam4*1000+rakam3*100+rakam2*10+rakam1;
	
	    // Girilen sayinin ters halini yazdir.
		printf("\n\n Girilen sayinin tersi: %d\n",tersi);
	}
	
	else
	
	// Girilen sayi bes basamakli degilse;
		printf(" \n\n Girilen sayi bes basamakli degil!!! \n Kod Durduruluyor...\n");
	
}
