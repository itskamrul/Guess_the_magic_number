#include <stdio.h>

int main(){
    int x,y;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter value of y: ");
    scanf("%d", &y);
    x<y?printf("Y is larger"):printf("X is larger");
}