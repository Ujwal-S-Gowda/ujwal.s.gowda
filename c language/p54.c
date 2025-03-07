//electricity bill

#include<stdio.h>
#include<stdlib.h>
int main(){
    char name[10];
    int units;
    const int mincharge=100;
    const double slab1=0.80;
    const double slab2=0.90;
    const double slab3=1.00;
    const double surcharge=0.15;
    double billamt=0.0;
    billamt=billamt+mincharge;
    printf("enter the name of consumer:\n");
    scanf("%s",name);
    printf("enter number of units consumed:\n");
    scanf("%d",&units);
    if(units<=200){
        billamt=billamt+(units*slab1);
    }
    else if(units>200 && units<=300){
        billamt=billamt+(200*slab1)+(units-200)*slab2;
    }
    else{
        billamt=billamt+(200*slab1)+(100*slab2)+(units-300)*slab3;
    }
    if(units>=400){
        billamt=billamt+(billamt*surcharge);
    }
    printf("name of the consumer:%s\n",name);
    printf("number of units consumed:%d\n",units);
    printf("bill amount=%.2lf rupees\n",billamt);
    return 0;
}