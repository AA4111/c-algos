#include<stdio.h>
int main()

{   
    int table_no=10;
    int count,sum;
    printf("which no of table you want \n");
    scanf( "%d" ,&count); 
    printf("table of %d\n ",count); 

     do
     {
        table_no--;
        int counted = count * table_no;
        printf("%d\n",counted);
         sum += counted;

     }while(table_no > 1);

     printf("sum of  number is:%d\n",sum);

    return 0;
}










