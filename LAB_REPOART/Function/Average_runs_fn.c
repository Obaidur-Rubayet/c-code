#include <stdio.h>

void fn_RunsAvg(int a,int b,int c){
    float avg=(a+b+c)/3.0;
    printf("Average: %.2f",avg);
}

int main(){
    int x,y,z;
    printf("Enter three runs:");
    scanf("%d%d%d",&x,&y,&z);
    fn_RunsAvg(x,y,z);
  return 0;  
}
