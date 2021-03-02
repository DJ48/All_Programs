#include <stdio.h>
void f();
int main(){
    f();
    f();
    f();
    return 0;
}

void f(){
    static int a=10;//this line is executed only once
    a=a+1;
    printf("%d",a);
}