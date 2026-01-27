#include <stdio.h>
#include <conio.h>

int main(){
    int a,b;
    printf("Enter the two angles: ");
    scanf("%d,%d",&a,&b);

    printf("The third angle is: %d",(180-(a+b)));
    return 0;
    getch();
}