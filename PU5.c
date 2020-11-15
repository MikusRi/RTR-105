#include <stdio.h>
#include <math.h>

int main(){

char d;
int a,b,c;
long long k,l,m;
c=1;
m=1;
printf("Ievadiet decimālu skaitli katram datu tipam:\n");
printf("int:\n");
scanf("%d" , &a);
printf("long long:\n");
scanf("%lld" , &k);
printf("char:\n");
scanf("%s" , &d);

if(a!=fabs(a) || a>12)
{
printf("int faktoriālu ievadītajam skaitlim pareizi aprēķināt nav iespējams\n");
}
else
{
for(b=1;b<=a;b=b+1)
{
c=c*b;
}
printf("int faktoriāls:: %d\n",c);
}

if(k!=fabs(k) || k>20)
{
printf("long long faktoriālu ievadītajam skaitlim pareizi aprēķināt nav iespējams\n");
}
else
{
for(l=1;l<=k;l=l+1)
{
m=m*l;
}
printf("long long faktoriāls: %lld\n",m);
}

if(1)
{
printf("char faktoriālu ievadītajam skaitlim pareizi aprēķināt nav iespējams\n");
}
 
return 0;
}
