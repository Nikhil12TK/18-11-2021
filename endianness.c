#include<stdio.h>
union c
{
int num;
char ch;
};
void main()
{
union c obj;
obj.num=1;
if(obj.ch)
printf("little endian\n");
else
printf("big endian\n"/);
}
