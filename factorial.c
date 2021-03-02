#include <stdio.h>

int fact(int num){
	int res=1;
	for(int i=0cat cat; i<=num;i++){
		res *= i;
	}
	return res;
}
int main(){
	int a;
	printf("Enter a number:\n");
	scanf("%d",&a);
	printf("Factorial of %d is %d\n",a,fact(a));
	return 0;
}