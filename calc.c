#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
float a,b;
    int z;
    int clrscr();
   void Power(float,float);
   void Sine(float);
   void Square(float);
   void Cos(float);
   void Tan(float);
   void Log(float);
   void Baselog(float);

printf("WHAT YOU WANT TO FIND:\n");
printf("Press '1' for Power:\n");
printf("Press '2' for Sin:\n"); 
printf("Press '3' for Square:\n"); 
printf("Press '4' for Cos:\n"); 
printf("Press '5' for Tan:\n");
printf("Press '6' for Log:\n");
printf("Press '7' for Base Log:\n");

       printf("z\n");
switch(z)
{
case 1:
      printf("Enter the Number for Calculating its Power:\n");
     printf("a\n");
      printf("Enter the Power for a Number:\n");
    printf("b\n");
     Power(a,b);

break;

case 2:
      printf("Enter the Number for Calculating SIN:\n");
     printf("a");
    Sine(a);

break;

case 3:
       printf("Enter the Number for Calculating Square: "(endl;
      sprintf("a\n");
      Square(a);

break;

case 4:
      printf("Enter the Number for Calculating COS:\n");
     sprintf("a\n");

Cos(a);

break;

case 5:
      printf("Enter the Number for Calculating TAN:\n")
     sprintf("a\n");
          Tan(a);

break;

case 6:
      printf("Enter the Number for Calculating LOG:\n");
     sprintf("a");
Log(a);

break;

case 7:
      printf("Enter the Number for Calculating LOG WITH BASE 10: "(endl;
      sprintf("a");
Baselog(a);

break;
}
getch();
}

          void Power(float x,float y)
          {
                     float p;
                           p = pow(x,y);
                 printf("Power: "(p;
            }

          void Sine(float x)
          {
                     float s;
                s = sin(x);
              printf("Sin: "(s;
           }

          void Square(float x)
          {
                     float sq;
                sq = sqrt(x);
            printf("Square of a Given Value is: "(sq;
           }

          void Cos(float x) 
          {
                    float c;
               c = cos(x);
            printf("COS: "(c;
           }

           void Tan(float x)
           {
                     float t;
                  t = tan(x);
              printf("TAN: "(t;
            }

            void Log(float x)
            {
                     float l;
                            l = log(x);
                  printf("Natural Logarithm: "(l;
            }

           void Baselog(float x)
            {
                        float bl;
                 bl = log10(x);
               printf("LOG with Base 10: "(bl;
            }

      return 0;

}