#include<stdio.h>
struct all
{
char ch;
};
void main()
{
int i,j,k;
char temp;
struct all s[5]={'h','e','l','l','o'};
//0r
struct all s[5];
printf("enter the structure data\n");
for(i=0;i<5;i++)
scanf("%c ",&s[i].ch);
for(j=0;j<5;j++)
{
for(k=j+1;k<5;k++)
{
if(s[j].ch>s[k].ch)
{
temp=s[j].ch;
s[j].ch=s[k].ch;
s[k].ch=temp;
}
}
}
printf("after rearranging\n");
for(i=0;i<5;i++)
printf("%c\t",s[i].ch);
printf("\n");
}
