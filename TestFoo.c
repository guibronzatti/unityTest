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
  TEST_ASSERT_EQUAL(tab[0], sortVector(tab,7)); 
  //retorna primeiro item
  //ja que organiza de forma descrecente o tab[0] vai ser 80
  //organiza tab[] = {80,67,35,23,10,1}
}

void test_foo2(void)
{
  int tab[] = {35, 10, 23, 80, 90, 67, 1};
  TEST_ASSERT_EQUAL(tab[0], sortVector(tab,8)); 
}

void test_foo3(void)
{
  int tab[] = {35, 10, 23, 80, 67, 1, 20, 30, 40, 50, 100};
  TEST_ASSERT_EQUAL(tab[0], sortVector(tab,12)); 
}


