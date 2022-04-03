#include "unity.h"
#define PROJECT_NAME "student_management_system"
/* Protypes for all the test functions */
/**
 * @brief testing function bus reservation system
 * 
 */
extern void test_student();
/* Required by the unity test framework */
void setUp(void)
{
}
/* Required by the unity test framework */
void tearDown(void)
{
}
/* Start of the application test */
int main(void){
    /* Initiate the unity test framework */
    UnityBegin(NULL);
    /* Run test functions */
    RUN_TEST(test_student);
    /* Close the Unity Test Framework */
    return (UnityEnd());
}