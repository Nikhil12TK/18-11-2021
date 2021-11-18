#include <stdio.h>
void main() 
{
FILE *fp;
fp  = fopen ("my.txt", "w");
int i;
        char str[] = "file handling";
       /* for (i = 0; str[i] != '\n'; i++) 
        {
         fputc(str[i], fp);
        }*/
        //(or)
         fwrite(str , 1 , sizeof(str) , fp );
fclose (fp);
}
