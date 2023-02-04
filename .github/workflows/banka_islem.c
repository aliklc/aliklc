#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main(int argc, char *argv[]) {


  srand(time(NULL));
	int bakiye,tutar,islem;
	bakiye=rand()%1000;
	
	
	
	printf("Bakiyeniz= %d\n",bakiye);
	printf("   ***Islemler***\n");
	printf("1. Para Cekme\n");
	printf("2. Para Yatirma\n");
	printf("3. Bakiye Sorgulama\n");
	printf("4. Kart Iade\n");
	
	printf("Lutfen Bir Islem Seciniz:");
	scanf("%d",&islem);
	
	switch(islem){
		
		case 1:
			printf("Cekmek Istediginiz Tutari Girin= ");
			scanf("%d",&tutar);
			if(tutar>bakiye)
			{
				printf("Yetersiz Bakiye");
			}
			else
			{
				bakiye -= tutar;
				printf("Yeni Bakiye= %d",bakiye);
			}
			break;
		case 2:
			printf("Yatirmak Istediginiz Tutari Girin");
			scanf("%d",&tutar);
			bakiye += tutar;
			printf("Yeni Bakiye= %d",bakiye);
			break;
		case 3:
			printf("Bakiyeniz= %d",bakiye);
			break;
		case 4:
			printf("Kartinizi Aliniz");
			break;		
	}
  
  	return 0;
}
