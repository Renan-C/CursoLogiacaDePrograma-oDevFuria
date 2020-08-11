#include <stdio.h>
#include <assert.h>


int main()
{
//
//entrada 
//
    int a = 999;
    int b = 555;

//
//processamento
//
    int suport = a;
    a = b;
    b = suport;
//
//saída
//
assert(a == 555);
assert(b == 999); 

  return(0);
}
