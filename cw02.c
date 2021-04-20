#include<stdio.h>

int main() 
{
int i,j,a,b,k=1,l=0;
char koniec;

do{

printf("Podaj a=\n");
scanf("%d",&a);
printf("Podaj b=\n");
scanf("%d",&b);
printf("\n");


for(j=1; j<=a; j++)
{

  if(j%2==1)
     { 
       for (i=1; i<=b; i++)
       {
         if(i%2==1)
         { 
          printf("%d\t", k);
         }
        else
         {
          printf("%d\t", l);
         }
       }
     }

  else

     {
        for (i=1; i<=b; i++)
       {
         if(i%2==1)
         {
          printf("%d\t", l);
         }
         else
         {
          printf("%d\t", k);
         }
       }   
     }

printf("\n");
}
printf("Czy chcesz zakonczyc? n/t\n");
scanf(" %c", &koniec);
printf("\n");
}
while(koniec=='n');

return 0;
}

/*
for(j=1; j<=a; j++)
{

     for (i=1; i<=b; i++)
     {
      printf("%d\t",i*j);
     }

printf("\n");
}


return 0;
}

*/
