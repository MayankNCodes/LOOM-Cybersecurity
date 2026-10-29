#include<stdio.h>

int main(){
    int password = 8392;
    int a;
    while(1){
        scanf("%d", &a);
        if(a == password){
            printf("Access Granted: %d\n", a);
            break;
        }
        else{
            printf("Access Denied: %d\n", a);
        }
     
    }

    return 0;
}
