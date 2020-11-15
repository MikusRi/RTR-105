#include <stdio.h>
#include <math.h>

int main(){

char d,e,f;
int a,b,c;
long long k,l,m;
c=b=1;
m=l=1;
printf("Ievadīt decimālu skaitli katram datu tipam:\n");
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
while(b<=a)
{
c=c*b;
b=b+1;
}
printf("int faktoriāls: %d\n",c);
}

if(k!=fabs(k) || k>20)
{
printf("long long faktoriālu ievadītajam skaitlim pareizi aprēķināt nav iespējams\n");
}
else
{
while(l<=k)
{
m=m*l;
l=l+1;
}
printf("long long faktoriāls: %lld\n",m);
}

if(1){
printf("char faktoriālu ievadītajam skaitlim pareizi aprēķināt nav iespējams\n");
}
 
return 0;
}
