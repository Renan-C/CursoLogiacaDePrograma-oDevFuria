#include <stdio.h>
#include <assert.h>

int dias(int meses)
{
    return(30 * meses);
}
int main()
{
    assert(90 == dias(3));
}