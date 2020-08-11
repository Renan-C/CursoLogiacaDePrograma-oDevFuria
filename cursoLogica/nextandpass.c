#include <stdio.h>
#include <assert.h>
int show_next(int number)
{
    return number + 1;
}
int show_prev(int number)
{
    return number - 1;
}

int main()
{
    assert(11 == show_next(10));
    assert(9 == show_prev(10));
    return 0;
}
