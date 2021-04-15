#include "unity.h"
#include "getrandword.h"
#include "printhangman.h"
/* Modify these two lines according to the project */
#define PROJECT_NAME    "Hangman"

/* Prototypes for all the test functions */
void test_hangman(void);
void test_printhangman(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_hangman);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_hangman(void) {
  TEST_ASSERT_EQUAL("axiom", main(5, "axiom"));
  
}
void test_printhangman(void) {

  TEST_ASSERT_EQUAL(NULL, printhangman(10));
  
}