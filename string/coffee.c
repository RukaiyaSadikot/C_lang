#include<stdio.h>

void makeCoffee(int sugar){
    printf("\nCoffee is ready with %d spoon of sugar", sugar);
}
int main(){
    int s;
    printf("\nEnter no. of spoons of sugar you require : ");
    scanf("%d",&s);
    makeCoffee(s);
    return 0;
}