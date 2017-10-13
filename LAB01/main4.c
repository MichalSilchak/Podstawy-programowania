#include<stdio.h>

/*int main(){
	int a, i;
	scanf("%a", &a);
	for(i=0; i<=a; i++)	{
		if(a%i==0){
			printf("%d", i);
		}
	}
return 0;
}
*/
#include<stdio.h>

int main(){
	float a, b, wynik;
	int c=1;
	printf("Wwedit234 chys1lo\n");
	scanf("%f", &a);
	wynik=a;
	while(c!=5){
		printf("1.Dodaj\n 2.Odejmuje\n 3.Mnorz\n 4.Dziel \n 5.Wynik\n");
		scanf("%d", &c);
		printf("Wwedit chyslo\n");
		scanf("%f", &b);
		switch(c){
		
			case 1:
				wynik+=b;
				break;
		
			case 2:
				wynik-=b;
				break;
			case 3:
				wynik*=b;
				break;
			case 4:
				wynik/=b;
				break;		
			case 5:
				printf("%f", wynik);
				break;
			}
		}

	return 0;
	}
