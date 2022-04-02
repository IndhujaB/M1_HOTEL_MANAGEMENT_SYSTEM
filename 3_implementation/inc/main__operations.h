/**
 * @file main__operations.h
 * @author Indhuja (indhuja.18ece@Ssonatech.ac.in)
 * @brief Headerfile for Hotel Management System
 * @version 0.1
 * @date 2022-04-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _MAIN_OPERATION_H_
#define _MAIN_OPERATION_H_

/**
 * @brief entering the name of the quest
 * @return detls of the guest required
 * ai
 */
void enter_name();

/**
 * @brief Finding the guest
 * @return giving the guest name and room number
 * 
 */
void find_name();

/**
 * @brief checking the guest checkout list
 * @return details of checkedout guest
 * 
 */
void checkout_guest();

/**
 * @brief finding the avalability of the rooms
 * @return entering the guest names
 * 
 */
void find_room();

/**
 * @brief displaying the booked rooms
 * @return guests details
 * 
 */
void view_bookings();

#endif /* #define _MAIN_OPERATION_H_ */