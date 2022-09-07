#include<stdio.h>
main() {
	float ara,final, ortalama;

	
	printf("ara notu giriniz:");
	scanf("%f",&ara);
	printf("final notu giriniz:");
	scanf("%f",&final);
	ortalama=ara*(0.3)+final*(0.7);
	printf("ortalamaniz:%f",ortalama);
	
}
