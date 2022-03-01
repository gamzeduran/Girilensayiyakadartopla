#include<stdio.h>

int topla(int x)
{
	if(x==0)
	
		return 0;
	
	else
	
		return x%10 + topla(x/10);
	
}


int main()
{
	int sayi ;
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
	printf("basamaklarin toplami : %d",topla(sayi));
	return 0;
	
}

