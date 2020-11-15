#include <stdio.h>

int main()
{
   int a;
   int b;
   int c;
   int d[4];
   int q;
    printf("Ievadīt trīs decimālus skaitļus:\n");
    printf("Pirmais skaitlis:\n");
    scanf("%d", &a);
    printf("Otrais skaitlis:\n");
    scanf("%d", &b);
    printf("Trešais skaitlis:\n");
    scanf("%d", &c);

    printf("Izvēlēties skaitļu secību:\n");
    printf("Augošai nospiest 1, dilstošai 2:\n");

   scanf("%d", &q);

    if (a <= b && a <= c)
    {
        if (b <= c)
        {
            d[1] = a;
            d[2] = b;
            d[3] = c;
        }
        else
        {
            d[1] = a;
            d[2] = c;
            d[3] = b;
        }
    }
    else if (b <= a && b <= c)
    {

        if (a <= c)
        {
            d[1] = b;
            d[2] = a;
            d[3] = c;
        }
        else
        {
            d[1] = b;
            d[2] = c;
            d[3] = a;
        }
    }
    else if (c <= a && c <= b)
    {

        if (a <= b)
        {
            d[1] = c;
            d[2] = a;
            d[3] = b;
        }
        else
        {
            d[1] = c;
            d[2] = b;
            d[3] = a;
        }
    }

    if (q == 1)
    {
        printf("Augoša skaitļu secība: %d %d %d\n", d[1], d[2], d[3]);
    }
    else
    {
        printf("Dilstoša skaitļu secība: %d %d %d\n", d[3], d[2], d[1]);
    }
  return (0);
}
