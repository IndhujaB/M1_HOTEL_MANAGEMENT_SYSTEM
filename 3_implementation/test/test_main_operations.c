#include "unity.h"
#include "hotel_management_system.h"

#define PROJECT_NAME "HOTEL_MANAGEMENT_SYSTEM"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for Hotel_Management_System
 * 
 */

/**
 * @brief  testing function for entering the name of the quest
 * 
 */
void test_enter_name();

/**
 * @brief testing function for finding then guest name
 * 
 */
void test_find_name();

/**
 * @brief testing function for checking the guest checkout list
 * 
 */
void test_checkout_quest();

/**
 * @brief testing function for finding the avalability of the rooms
 * 
 */
void test_find_room();

/**
 * @brief testing function for displaying the booked rooms
 * 
 */
void test_view_bookings();

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
    RUN_TEST(enter_name);
    RUN_TEST(find_name);
    RUN_TEST(checkout_guest);
    RUN_TEST(find_room);
    RUN_TEST(view_bookings)

    /* Close the Unity Test Framework */
    return UNITY_END;
}




