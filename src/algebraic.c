#include "algebraic.h"


int fun(int a)
{
    int result = a;
	return result;
}
 
int trying(int num)
{ 
    void (*fun_ptr)(int) = fun;  // & removed
 
    fun_ptr(&num);  // * removed
 
    return 0;
}
