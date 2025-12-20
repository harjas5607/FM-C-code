//Write a program that accepts n products' details and calculates and displays the total value of the inventory (i.e., quantity * price).
//Find the product with the highest quantity and the product with the highest Price and display their details.
//Create a structure to represent a product in an inventory. The structure should include:
//Product ID (integer)
//Product Name (string)
//Quantity (integer)
//Price (float)
#include<stdio.h>
struct Product{
    int id;
    char name[50];
    int qty;
    float price;
};
int main(){
    int n,i,maxQtyIndex=0,maxPriceIndex=0;
    float totalVal=0;
    struct Product p[100];
    printf("Enter number of products (1-100):\n");
    if(scanf("%d",&n)!=1){
        printf("Invalid input! Must enter integer.\n");
        return 0;
    }
    if(n<=0||n>100){
        printf("Invalid size!\n");
        return 0;
    }
    for(i=0;i<n;i++){
        printf("Product %d:\n",i+1);
        printf("Enter Product ID:\n");
        if(scanf("%d",&p[i].id)!=1){
            printf("Invalid ID input.\n");
            return 0;
        }
        printf("Enter Product Name:\n");
        if(scanf("%s",p[i].name)!=1){
            printf("Invalid name input.\n");
            return 0;
        }
        printf("Enter Quantity:\n");
        if(scanf("%d",&p[i].qty)!=1||p[i].qty<0){
            printf("Invalid quantity input.\n");
            return 0;
        }
        printf("Enter Price:\n");
        if(scanf("%f",&p[i].price)!=1||p[i].price<0){
            printf("Invalid price input.\n");
            return 0;
        }
        totalVal+=p[i].qty*p[i].price;
        if(p[i].qty>p[maxQtyIndex].qty){
            maxQtyIndex=i;
        }
        if(p[i].price>p[maxPriceIndex].price){
            maxPriceIndex=i;
        }
    }
    printf("Total inventory value=%.2f\n",totalVal);
    printf("Product with highest quantity:\n");
    printf("ID:%d, Name:%s, Qty:%d, Price:%.2f\n",p[maxQtyIndex].id,p[maxQtyIndex].name,p[maxQtyIndex].qty,p[maxQtyIndex].price);
    printf("Product with highest price:\n");
    printf("ID:%d, Name:%s, Qty:%d, Price:%.2f\n",p[maxPriceIndex].id,p[maxPriceIndex].name,p[maxPriceIndex].qty,p[maxPriceIndex].price);
    return 0;
}
