/*****************************************
*
* File Name: bin2dec.c

*
* CSIS 320 Architecture
* Minnesota State University Moorhead
*
* Developer: Mahesh Wosti
* Date:1/19/2020
* Compile: gcc bin2dec.c -o bin2dec.out
/****************************************/

#include <stdio.h>
#include <math.h>
int toDeci(char[],int,int);
void newBase(int,int);
void main ()
{
  char bin[80];
  int i = 0, dec = 0;
  int base;
  printf("Enter any  number (0-9): ");
  scanf("%s", bin);
  printf("Enter the base of number you entered: ");
  scanf("%d", &base);
  while (bin[i] != 0) {
    i = i + 1;
  }
  printf(" number of digits in input number is %d\n",i);
 int n= toDeci(bin,(i-1),base); // passing array of char to convert any number to decimal


}

int toDeci(char m[],int count,int b){
    int d = 0, sum=0;
    int n=count;
    for(int i=0;i<=n;i++){
        d=m[i]-'0';// converts char to num
    
        int p=pow(b,count);
        sum = sum + (d*p);
        count--;
}
    printf(" the decimal of number you entered is %d\n",sum); //displays result
    return sum;
}
