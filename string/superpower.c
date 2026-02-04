#include<stdio.h>

void power(int level){
    if (level == 10)
    {
        printf("\nEmergency Flying MOde ON...");
    }else if (level < 10)
    {
        printf("\nEnergy too low for flight");
    }
    
    
}
int main(){
    int l;
    printf("\nEnter your Energy level : ");
    scanf("%d",&l);
    power(l);
    return 0;
}