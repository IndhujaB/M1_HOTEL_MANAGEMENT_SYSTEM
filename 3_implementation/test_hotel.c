#include "unity.h"
#include "unity_internal.h"
#include<stdlib.h>
#define PROJECT_NAME "hotel_management_system"
/* Prototypes for the test functions */
/**
 * @brief testing function for hotel management system
 * 
 */
extern void test_hotel();
/* Required by unity test framework */
void setUp(void)
{

}
/*Required by the test framework*/
void tearDown(void)
{

}
/* Start of the application */
int main(void)
{
    UNITY_BEGIN();
    /* Run test functions */
    RUN_TEST(test_enter_name);
    RUN_TEST(test_find_name);
    RUN_TEST(test_checkout_guest);
    RUN_TEST(test_find_room);
    RUN_TEST(test_view_bookings);
    /* Close unity test framework */
    return UNITY_END();
}

