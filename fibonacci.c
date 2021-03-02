#include <stdio.h>

int main(){
    int n,a=0,b=1,s=0;
    printf("Enter the number of terms:- ");
    scanf("%d",&n);
    if(n==0)
        printf("\nPlease Enter a value greater than 0.\n");
    else if(n==1)
        printf("0\n");
    else if(n==2)
        printf("1\n");
    else{
        printf("0\t1\t");
        for(int i=0;i<n-2;i++){
            s=a+b;
            printf("%d\t",s);
            a=b;
            b=s;
        }
    }
    return 0;
}
