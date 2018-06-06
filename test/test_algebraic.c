#include "unity.h"
#include "algebraic.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_algebraic_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement algebraic");
}

void test_function_pointer(void)
{
	int num = 10;
	int result = trying(num);
	
	TEST_ASSERT_EQUAL_INT(result, num);
}

void test_fun_function(void)
{
	int num =10;
	int result = fun(num);
	TEST_ASSERT_EQUAL_INT(result, num);
	
}