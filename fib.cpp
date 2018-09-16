#include <iostream>
#include <stdio.h>
using namespace std;


//fibonacci para enteros
int fibonacci(int n){
int i=0;
int j=1;
int t=0;

for(int k=2;k<n;k++){
    t=i+j;
    i=j;
    j=t;

}

return t;

}
//fibonacci para enteros sin signo
unsigned int fibonacciunint(int n){
unsigned int i=0;
unsigned int j=1;
unsigned int t=0;

for(int k=2;k<n;k++){
    t=i+j;
    i=j;
    j=t;

}

return t;

}
//fibonacci para long
long fibonaccilong(int n){
long i=0;
long j=1;
long t=0;

for(int k=2;k<n;k++){
    t=i+j;
    i=j;
    j=t;

}

return t;

}
//fibonacci para long sin signo
unsigned long fibonacciunlong(int n){
unsigned long i=0;
unsigned long j=1;
long t=0;

for(int k=2;k<n;k++){
    t=i+j;
    i=j;
    j=t;

}

return t;

}
//fibonacci para short
short  fibonaccishort(int n){
short i=0;
short j=1;
short t=0;

for(int k=2;k<n;k++){
    t=i+j;
    i=j;
    j=t;

}

return t;

}
//fibonacci para short sin signo
unsigned short  fibonacciunshort(int n){
short i=0;
short j=1;
short t=0;

for(int k=2;k<n;k++){
    t=i+j;
    i=j;
    j=t;

}

return t;

}
//fibonacci para char
char fibonaccichar(int n){
char i=0;
char j=1;
char t=0;

for(int k=2;k<n;k++){
    t=i+j;
    i=j;
    j=t;

}

return t;

}



void revint(int c, int n){
if(c<0){
    printf("el valor del finonacci para un entero  de %d llego al overflow \n",n-1);
}else{
    printf("el valor fibonacci para %d  entero es : %d \n",n-1,c);

}

}

void revintunint( int c, int n){
if(c<0){
    printf("el valor del finonacci de  un entero sin signo%d llego al overflow \n",n-1);
}else{
    printf("el valor fibonacci para  un entero sin signo%d es : %d \n",n-1,c);

}

}

void revlong(long c, int n){
if(c<0){
    printf("el valor del finonacci para un long  de %d llego al overflow \n",n-1);
}else{
    printf("el valor fibonacci para %d  long es : %d \n",n-1,c);

}

}

void revunlong( long c, int n){
if(c<0){
    printf("el valor del finonacci para un long  de %d llego al overflow \n",n-1);
}else{
    printf("el valor fibonacci para %d  long es : %d \n",n-1,c);

}

}

void revshort(short c, int n){
if(c<0){
    printf("el valor del finonacci para un short  de %d llego al overflow \n",n-1);
}else{
    printf("el valor fibonacci para %d  short es : %d \n",n-1,c);

}

}

void revunshort( short c, int n){
if(c<0){
    printf("el valor del finonacci para un unshort de %d llego al overflow \n",n-1);
}else{
    printf("el valor fibonacci para %d  unshort es : %d \n",n-1,c);

}

}

void revchar(char c, int n){
if(c<0){
    printf("el valor del finonacci para un char  de %d llego al overflow \n",n-1);
}else{
    printf("el valor fibonacci para %d  char es : %d \n",n-1,c);

}

}



int main() {
//estos son los valores con los que se llegan al overflow en
//enteros
int elementofibonacci=48;
//enteros sin signo
int elementofibonacci2=48;
//long
int elementofibonacci3=48;
//long sin signo
int elementofibonacci4=50;
// short
int elementofibonacci5=25;
// short sin signo
int elementofibonacci6=25;
// char
int elementofibonacci7=13;

int	a=fibonacci(elementofibonacci);
unsigned int b=fibonacciunint(elementofibonacci2);
long c=fibonaccilong(elementofibonacci3);
unsigned long d=fibonacciunlong(elementofibonacci4);
short	e=fibonaccishort(elementofibonacci5);
unsigned short f=fibonacciunshort(elementofibonacci6);
char g=fibonaccichar(elementofibonacci7);




	revint(a, elementofibonacci);
	revintunint(b, elementofibonacci2);
	revlong(c,elementofibonacci3);
	revunlong(d,elementofibonacci4);
	revshort(e,elementofibonacci5);
	revunshort(f,elementofibonacci6);
	revchar(g,elementofibonacci7);


	return 0;
}
