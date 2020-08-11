#include <stdio.h>
#include <assert.h>

int dobro(int aux)
 {
    return (2*aux);   
 }

int main()
{
    assert(12 == dobro(6)); 

   return(0); 
}

