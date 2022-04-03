/**
 * @file student_operations.h
 * @author Vinod Sudarsan.M (18euee159@skcet.ac.in)
 * @brief Header file for student management system
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef STUDENT_OPERATIONS_H
#define STUDENT_OPERATIONS_H

/**
 * @brief SHOWS WELCOME MESSAGE
 * @return SHOWS WELCOME MESSAGE 
 */
void printMessageCenter(const char* message);

/**
 * @brief SHOWS HEAD MESSAGE
 * @return SHOWS HEAD MESSAGE ON TOP OF PAGE
 */
Void headMessage(const char *message);

/**
 * @brief SHOWS LOADING ON FRONT PAGE
 * @return SHOWS LOADING ON FRONT PAGE TO USER
 */
void welcomeMessage();

/**
 * @brief CHECKS THE USER NAME 
 * @return CHECKS WHETHER THE USER NAME IS VALID OR NOT
 */
int isNameValid(const char *name);

/**
 * @brief CHECKS LEAP YEAR
 * @return CHECKS WHETHER THE YEAR ENTERED BY USER IS LEAP YEAR
 */
int IsLeapYear(int year);

/**
 * @brief CHECKS DATE
 * @return CHECKS WHETHER THE DATE ENETERED BY USER IS VALID
 */
int isValidDate(Date *validDate);

/**
 * @brief ADD STUDENT DETAILS IN DATABASE
 * @return COLLECTS STUDENTS DETAILS AND STORES IN DATABASE
 */
void addStudentInDataBase();

/**
 * @brief  SEARCHES  THE STUDENTS  DETAILS
 * @return SEARCHES THE STUDENT DETAILS AS USER ENTERS USER ID
 */
void searchStudent();

/**
 * @brief SHOW STUDENT DETAILS
 * @return SHOWS STUDENT DETAILS AS REQUESTED BY USER
 */
 void viewStudent();

 /**
  * @brief IT DELETES THE INFORMATION 
  * @return IT DELETES THE INFORMATION OF A STUDENT AS REQUESTED BT THE USER
  */
 void deleteStudent();
 
 /**
  * @brief UPDATES THE CREDENTIAL 
  * @return IT UPDATES THE NEW LOGIN CREDENTIALS
  */
 void updateCredential(void);

/**
  * @brief LOGIN WITH NEW CREDENTIAL 
  * @return LOGIN WITH NEW CREDENTIAL AS UPDATED BY USER
  */
 void login();

/**
 * @brief PROVIDES A BRIEF DESCRIPTION ON AVAILABLE OPERATIONS 
 * @result GUIDES INTO THE USER SPECIFIED OPERATION 
 */
 void menu();
 /**
  * @brief CHECKS THE FILE 
  * @return CHECKS WHETHER THE FILE EXIST 
  */
 int isFileExists(const char *path);

 

#endif /* #define STUDENT_MANAGEMENT_SYSTEM_H */