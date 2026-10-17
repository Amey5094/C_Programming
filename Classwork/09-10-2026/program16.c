#include "header.h"
#include <assert.h>
// This is test file of addition code
int main()
{
    assert(Addition(10, 11) == 22);
    assert(Addition(-10, 20) == 10);
    assert(Addition(-10, -20) == -30);
    return EXIT_SUCCESS;
}