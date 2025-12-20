//Create a program to calculate electricity bills based on usage slabs (e.g.if total units are 350 then 0–100 units: ₹5/unit, 101–300 units: ₹8/unit, ₹10/unit
//for units above 300, then total bill is of 350 units is 2600).
#include<stdio.h>
int main(){
    float units,bill=0;
    printf("Enter total units consumed:");
    if(scanf("%f",&units)!=1){
        printf("Invalid input! Units must be an integer.\n");
        return 0;
    }
    if(units<0){
        printf("Invalid input! Units cannot be negative.\n");
        return 0;
    }
    if(units<=100){
        bill=units*5;
    }
    else if(units<=300){
        bill=(100*5)+((units-100)*8);
    }
    else{
        bill=(100*5)+(200*8)+((units-300)*10);
    }
    printf("Total Electricity Bill=%.2f rupees\n",bill);
    return 0;
}
