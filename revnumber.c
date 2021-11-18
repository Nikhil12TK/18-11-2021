#include <stdio.h>
int revFunction(int);
int sum=0,rem;
void main(){
   int num,rev;
   printf("enter number:\n");
   scanf("%d",&num);
   rev=revFunction(num);
   printf("the number after reverse :%d",rev);
}
int revFunction(int num){
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      revFunction(num/10);
   }
   else
      return sum;
}
