#include<stdio.h>

int girilensayiyakadartopla(int x)
{
	if(x==1)
	{
		return 1;
	}
	return x + girilensayiyakadartopla(x-1);
}


int main()
{
	int sayi;
	printf("bir sayi giriniz : ");
	scanf("%d",&sayi);
	int sonuc = girilensayiyakadartopla(sayi);
	printf("sonuc : %d\n",sonuc);
	return 0;


}

	
	
