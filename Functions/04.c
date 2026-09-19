#include <stdio.h>
void prime(int n){
    if (n/1 && n/n){
        printf("The number is prime\n");
    }
    else{
        printf("The number is non prime\n");
    }
}
int main(){
    int a;
    printf("Enter your number: \n");
    scanf("%d", &a);
    prime(a);
    return 0;
}