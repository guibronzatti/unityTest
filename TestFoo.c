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
  int tab[] = {35,10,23,80,67,1};
  TEST_ASSERT_EQUAL(80, sortVector(tab,7)); 
  //retorna primeiro item
  //ja que organiza de forma descrecente o i[0] vai ser 80
  //organiza tab[] = {80,67,35,23,10,1}
}

void test_foo2(void)
{
  int tab[] = {35,10,23,80,67,1};
  TEST_ASSERT_EQUAL(35,sortVector(tab,7));
}

