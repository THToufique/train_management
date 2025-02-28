#ifndef DISP_UTILS_H
#define DISP_UTILS_H
#include <iostream>
using namespace std;

// ANSI color codes
const string RESET = "\033[0m";
const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string CYAN = "\033[36m";
const string BOLD = "\033[1m";

void loading_banner() {
    system("cls");
    cout << CYAN << R"(
         .      _______________          
        _][__||  |  |  |  |  | ||__________
       (_________|__|__|__|__|_||_________)
        / 0-0-0         O O O       
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    )" << RESET << endl;
    
    cout << BOLD << YELLOW << "         Welcome to the Express Train Booking System!" << endl << endl;
    cout << "   🚆 Plan your journey with ease and book your tickets hassle-free. 🚆" << endl;
    cout << "   🛤️  Login to manage your trips or create an account to get started. 🛤️" << endl;
    cout << "   🎟️  Fast, secure, and convenient—travel smarter with us! 🎟️" << endl;
    cout << "   📍 Your next adventure starts here—All aboard! 📍" << RESET << endl << endl;
}

void header_banner() {
    system("cls");
    cout << CYAN << R"(
   ___________________________________________________________
  |                                                          |
  |  🚆   WELCOME TO THE EXPRESS TRAIN BOOKING SERVICE  🚆   |
  |__________________________________________________________|
          O==O       O==O       O==O       O==O       O==O
    )" << RESET << endl;

    cout << BOLD << YELLOW << "   Your journey starts here! Book your tickets with ease." << RESET << endl;
    cout << BOLD << "   Safe, reliable, and convenient travel at your fingertips. " << endl;
    cout << "   Login to continue or sign up to create an account. " << endl << endl;
}


void admin_menu() {
    system("cls");
    cout << CYAN << R"(
   ___________________________________________________________
  |                                                          |
  |      🚆  TRAIN BOOKING SYSTEM - ADMIN PANEL  🚆        |
  |__________________________________________________________|
          O==O       O==O       O==O       O==O       O==O
    )" << RESET << endl;

    cout << BOLD << GREEN << "\n   📌 Admin Main Menu 📌\n" << RESET;
    cout << "   -----------------------------------------------\n";
    cout << "   1️⃣  Add Train          |   2️⃣  Display Trains\n";
    cout << "   3️⃣  Search Trains      |   4️⃣  Display Bookings\n";
    cout << "   5️⃣  Delete Train       |   6️⃣  Update\n";
    cout << "   0️⃣  Logout\n";
    cout << "   -----------------------------------------------\n";
    
    cout << BOLD << CYAN << "   Select an option: " << RESET;
}


void user_menu() {
    system("cls");
    cout << CYAN << R"(
   ___________________________________________________________
  |                                                          |
  |      🚆  TRAIN BOOKING SYSTEM - USER PANEL  🚆           |
  |__________________________________________________________|
          O==O       O==O       O==O       O==O       O==O
    )" << RESET << endl;

    cout << BOLD << GREEN << "\n   🎟️ User Main Menu 🎟️\n" << RESET;
    cout << "   -----------------------------------------------\n";
    cout << "   1️⃣  Display Trains      |   2️⃣  Search Trains\n";
    cout << "   3️⃣  Book Ticket        |   4️⃣  Print Ticket\n";
    cout << "   5️⃣  Change Password    |   6️⃣  Cancel Ticket\n";
    cout << "   0️⃣  Logout\n";
    cout << "   -----------------------------------------------\n";
    
    cout << BOLD << CYAN << "   Select an option: " << RESET;
}


void login_dashboard() {
    system("cls");
    cout << CYAN << R"(
   ___________________________________________________________
  |                                                          |
  |       🚆  WELCOME TO THE TRAIN BOOKING SYSTEM  🚆       |
  |__________________________________________________________|
          O==O       O==O       O==O       O==O       O==O
    )" << RESET << endl;

    cout << BOLD << GREEN << "\n   🔑 Login as: \n" << RESET;
    cout << "   ----------------------------------\n";
    cout << "   1️⃣  Admin\n";
    cout << "   2️⃣  User\n";
    cout << "   0️⃣  Exit\n";
    cout << "   ----------------------------------\n";
    
    cout << BOLD << CYAN << "   Select an option: " << RESET;
}

void cred_options() {
    system("cls");
    cout << CYAN << R"(
   ___________________________________________________________
  |                                                          |
  |       🚆  TRAIN BOOKING SYSTEM - USER LOGIN  🚆          |
  |__________________________________________________________|
          O==O       O==O       O==O       O==O       O==O
    )" << RESET << endl;

    cout << BOLD << GREEN << "\n   🔐 Account Options: \n" << RESET;
    cout << "   ----------------------------------\n";
    cout << "   1️⃣  Create New Account\n";
    cout << "   2️⃣  Login to Existing Account\n";
    cout << "   0️⃣  Exit\n";
    cout << "   ----------------------------------\n";
    
    cout << BOLD << CYAN << "   Select an option: " << RESET;
}


void seat_numbers() {
    system("cls");
    cout << CYAN << R"(
  ╔════════════════════════════════════════════════════╗
  ║               🚆 TRAIN SEAT AVAILABILITY 🚆        ║
  ╚════════════════════════════════════════════════════╝
)" << RESET << endl;

    cout << BOLD << YELLOW << "   SL         SU          LB          MB          UB" << RESET << endl;
    cout << "   -----------------------------------------------" << endl;
    cout << "   01         02          03          04          05" << endl;
    cout << "   06         07          08          09          10" << endl;
    cout << "   11         12          13          14          15" << endl;
    cout << "   16         17          18          19          20" << endl;
    cout << "   21         22          23          24          25" << endl;
    cout << "   26         27          28          29          30" << endl;
    cout << "   31         32          33          34          35" << endl;
    cout << "   36         37          38          39          40" << endl;
    cout << "   41         42          43          44          45" << endl;
    cout << "   46         47          48          49          50" << endl;
    cout << "   51         52          53          54          55" << RESET << endl;

    cout << CYAN << "   -----------------------------------------------" << endl;
    cout << BOLD << GREEN << "   🎟️ Choose your seat number: " << RESET;
}


void payment_method(int amount) {
    system("cls");
    cout << CYAN << R"(
  ╔════════════════════════════════════════════════════════╗
  ║                  💳 PAYMENT PAGE 💳                    ║
  ╚════════════════════════════════════════════════════════╝
)" << RESET << endl;

    cout << BOLD << YELLOW << "   Total Amount: Rs. " << amount << RESET << endl << endl;
    cout << "   Choose the mode of payment:" << endl << endl;

    cout << GREEN << "   1. Cash" << RESET << endl;
    cout << GREEN << "   2. Card" << RESET << endl;
    cout << GREEN << "   3. Bkash" << RESET << endl << endl;

    cout << CYAN << "-------------------------------------------------------------------------" << endl;
    cout << BOLD << "   Select an option: " << RESET;
}


void password_handler() {
    system("cls");
    cout << CYAN << R"(
  ╔════════════════════════════════════════════════════╗
  ║                  🔐 CHANGE PASSWORD 🔐              ║
  ╚════════════════════════════════════════════════════╝
)" << RESET << endl;

    cout << BOLD << YELLOW << "   Please enter your old password:" << RESET << endl << endl;
    cout << "   ---------------------------------------------" << endl;
    cout << "   ";
}


void update_train() {
    system("cls");
    cout << CYAN << R"(
  ╔════════════════════════════════════════════════════╗
  ║                  🚆 UPDATE TRAIN 🚆                ║
  ╚════════════════════════════════════════════════════╝
)" << RESET << endl;

    cout << BOLD << YELLOW << "   What would you like to update?" << RESET << endl << endl;

    cout << GREEN << "   1. Train Number       2. Train Name" << RESET << endl << endl;
    cout << GREEN << "   3. Train Route        4. Number of Seats" << RESET << endl << endl;
    cout << GREEN << "   5. Train Time         6. Fare" << RESET << endl << endl;
    cout << GREEN << "   0. Return to Main Menu" << RESET << endl << endl;
    cout << CYAN << "-------------------------------------------------------------------------" << endl;
    cout << BOLD << "   Select an option: " << RESET;
}

#endif