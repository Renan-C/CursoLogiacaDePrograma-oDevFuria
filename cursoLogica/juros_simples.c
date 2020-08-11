#include<stdio.h>
#include<assert.h>

float calcular_juros(float capital, float taxa, int n_periodo)
{
 return capital*taxa*n_periodo;
}

int main()
{
    assert(1 == calcular_juros(100,0.01,1));
    return 0;
}