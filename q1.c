#include <stdio.h>

void staticdemo(){
    static int a=4;
    a += 4;
    printf("%d\n",a);
}

int main(){
    for(int i=0;i<4;i++){
        staticdemo();
    }
    return 0;
}