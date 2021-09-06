#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "func.h"
#include "unity.h"
#include<ctype.h>

void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_hotels(void)
{
  TEST_ASSERT_EQUAL(0,hotels(6));
  //TEST_ASSERT_EQUAL(0, div(10, 0));
}

void test_validate(void)
{
      TEST_ASSERT_EQUAL(0,validate(1));

}

void test_food_order(void)
{
      TEST_ASSERT_EQUAL(0,food_order(1));

}

int main()
{UNITY_BEGIN();
    
RUN_TEST(test_hotels);
 RUN_TEST(test_validate);
 RUN_TEST(test_food_order);

 

 // RUN_TEST(test_delete);
  //RUN_TEST(test_enterinfo);
 
  /* Close the Unity Test Framework */
  return UNITY_END(); 

}
