#include<stdio.h>
int fibo(int n){
    if(n<=1){
        return 1;
    }
    else
        return fibo(n-1)+fibo(n-2);
}
int main(){
    int num;
    printf("----------Fibonnaci Series----------\n");
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("The fibonnaci series is: ");
    for(int i=0; i<=num; i++){
        printf("%d\t",fibo(i));
    }
    return 0;
}