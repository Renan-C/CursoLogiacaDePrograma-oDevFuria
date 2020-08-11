#include <stdio.h>
#include <assert.h>

float reajust(float salario, int porcent)
{
    return(salario + salario / 100 * porcent);
}

int main()
{
    assert(1150 == reajust(1000,15));
    return(0);
}