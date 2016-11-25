#include <stdio.h>
#define __STDC_FORMAT_MACROS 1
#include <inttypes.h>
#include <stdlib.h>

int ayir(int devam) //split fonc. (tr-->ayir eng-->split)
{
    unsigned long long s,i;
    printf("s Number: ");
scanf("%" SCNu64, &s);
for(i = 2; s != 1; i++)
{
if(s % i == 0)
{
s /= i;
printf("i: %" PRIu64"\n",i);
i--;
}
}
printf("Continue? (y or n) : ");
char str1;
scanf("%s" , &str1);
if(str1=='y')
{
    printf("%s - Continuing!\n",&str1);
    return 1;
}
else
{
    exit(0);
    return 0;
}
}
int main()
{
int devam=1;
while (devam>0)
{
 ayir(devam);      
}  
return 0;
}                                                             //main end
