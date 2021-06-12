#include<stdio.h>
 int main()
  { int n ;
  printf("enter mark");
  scanf("%d",&n);
  printf("%s", n>84?"Grade A":(n>69?"Grade B":(n>54?"Grade C":(n>39?"Grade D":"Grade F" ))));
  return 0;
   }

