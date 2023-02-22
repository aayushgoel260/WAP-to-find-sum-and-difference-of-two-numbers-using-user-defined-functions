#include<stdio.h>
void sum(){
    int a,b;
    printf("Enter the two numbers : ");
    scanf("%d%d",&a,&b);
    printf("\nSum of %d and %d is %d ",a,b,a+b);
}
void difference(){
    int c,d;
    printf("\nEnter the two numbers : ");
    scanf("%d%d",&c,&d);
    printf("\nDifference of %d and %d is %d ",c,d,c-d);
}
void sum();
void difference();
int main(){
    sum();
    difference();
    return 0;
}