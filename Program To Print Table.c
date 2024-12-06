#include<stdio.h>
int main(){
    int number,i;
    printf("Enter number you want to print table of=>\n");
    scanf("%d",&number);
    printf("The table of number %d=>\n",number);
    for(i=1;i<=10;i++){
    printf("%dx%d=%d\n",number,i,number*i);
    }
    return 0;
}