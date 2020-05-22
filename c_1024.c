#include <stdio.h>

#include <stdlib.h>

​

int main()

{

char d[100];

int i;

scanf("%s", d);

for(i=0; d[i]!='\0'; i++)

{

printf("\'%c\'\n", d[i]);

}

return 0;

}