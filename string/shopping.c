#include<stdio.h>

float calcdisc(int billamt){
    float disc;
    if (billamt >= 500)
    {
        disc=billamt*0.10;
        return disc;
    }else{
        return 0;
    }
    
}
int main(){
    int b;
    float dis;
    printf("\nEnter your Bill Amount : ");
    scanf("%d",&b);
    dis = calcdisc(b);
    if (dis==0)
    {
       printf("\nNo discount applicable");
       printf("\nYour total bill is %d",b);
    }else{
        printf("\n10 per discount applicable your total bill amount is %0.3f",b-dis);
    }
    
    return 0;
}