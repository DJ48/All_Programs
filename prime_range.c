#include <stdio.h>
int prime(int a){
	int b=0;
	for(int i=2;i<a/2+1;i++){
		if(a%i==0)
			b=1;
	}
	return b;
}
int main(){
	int a,b;
	printf("Enter a number:\n");
	scanf("%d",&a);
	printf("Enter a second number:\n");
	scanf("%d",&b);
	printf("Printing prime numbers in between %d and %d\n",a,b);
	for(int i=a;i<=b;i++){
		if(prime(i))
			printf("%d",i);
	}
	return 0;
}