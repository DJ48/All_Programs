#include <stdio.h>

int reverse(int num){
	int rem,res;
	while(num > 0){
	rem=num%10;
	res= res+rem*10;
	num /= 10;
	}
	return res;
}

int main(){
	int num;
	printf("Please enter the number that you want to reverse:\n");
	scanf("%d",&num);
	printf("After revesing the number is %d",reverse(num));
	return 0;
}