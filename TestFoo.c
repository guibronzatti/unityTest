#include "foo.h"
#include "unity.h"


void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo1(void)
{
  int tab[] = {35, 10, 23, 80, 67, 1};
  TEST_ASSERT_EQUAL_INT(1, sort(tab,6)); 
}

void test_foo2(void)
{
  int tab[] = {35, 10, 23, 80, 90, 67};
  TEST_ASSERT_EQUAL_INT(10, sort(tab,6)); 
}

void test_foo3(void)
{
  int tab[] = {35, 10, 23, 80, 67, 9, 20, 30, 40, 50, 100};
  TEST_ASSERT_EQUAL_INT(9, sort(tab,11)); 
}


