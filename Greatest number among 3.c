#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter Three Numbers You Want : \n");
    scanf("%d %d %d",&a,&b,&c);
    // If a is the largest number
    if(a>=b && a>=c){
        printf("%d is the largest number\n", a);
    }
    // If b is the largest number
    if(b>=c && b>=a){
        printf("%d is the largest number\n", b);
    }
    // If c is the largest number
    if(c>=a && c>=b){
        printf("%d is the largest number\n", c);
    }
    return 0;
}