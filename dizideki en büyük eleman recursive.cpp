#include <stdio.h>
#define n 7

int dizidekienBuyuk(int dizi[], int enbuyuk, int x){
	if(dizi[x] >= enbuyuk){
		enbuyuk = dizi[x];
		return dizidekienBuyuk(dizi, enbuyuk, x - 1);
	}
	else
		return enbuyuk;
}

int main(){
	int dizi[n] = {1,2,3,4,5,6,7};
	int enbuyuk = dizi[0];

	printf("%d", dizidekienBuyuk(dizi, enbuyuk, n));
	return 0;
}
