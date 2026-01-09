#include <stdio.h>

float avg(int a,int b){
    return (a+b)/2.0;
}

int main(){
    float r;
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    r=avg(x,y);
    printf("Average: %.2f",r);
    return 0;
}
