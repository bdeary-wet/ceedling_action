#include "unity.h"

#include "first_module.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_first_module_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement first_module");
}

void test_Pass_test(void)
{
	TEST_ASSERT_TRUE(1);
}


void test_print_parms_no_params(void)
{
	TEST_ASSERT_NOT_EQUAL(0, print_parms(0, NULL));
}

void test_print_parms(void)
{
	char *strs[3]={
		"this",
		"is a",
		"test"
	};
	TEST_ASSERT_EQUAL(0, print_parms(3, strs));
}


