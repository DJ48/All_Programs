#include <stdio.h>
int main(){
	int a,b=0;
	printf("Enter a number:\n");
	scanf("%d",&a);
	for(int i=2;i<a/2+1;i++){
		if(a%i==0)
			b=1;
	}
	if(b==0)
		printf("%d is prime number.",a);
	else
		printf("%d is not a prime number.",a);
	return 0;
}