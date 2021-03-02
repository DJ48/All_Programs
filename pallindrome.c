#include <stdio.h>

int reverse(int num){
	int rem,res=0;
	while(num > 0){
	rem=num%10;
	res= res*10+rem;
	num /= 10;
	}
	return res;
}

int main(){
	int num,r,k;
	printf("Please enter the number :\n");
	scanf("%d",&num);
	k=num;
	r=reverse(num);
	if(k==r)
		printf("Pallindrome\n");
	else
		printf("Not Pallindrome\n");
	return 0;
}