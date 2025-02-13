#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>

using namespace std;

string username, tmp_password;

class Auth
{
private:
    string username, password, admin;
    ifstream file_input;
    ofstream file_output;

public:
    bool signup(char type)
    {
        file_output.open("data.txt", ios::app);
        file_input.open("data.txt");
    label:
        cout << "Enter username: ";
        cin >> username;
        string temp = username;
        while (file_input >> admin)
        {
            if (admin == username)
            {
                cout << "Username already exists. Try again." << endl;
                goto label;
            }
        }
        cout << "Enter password: ";
        cin >> password;
        if (type == '1')
        {
            file_output << "Type: " << "admin" << endl;
        }
        else if (type == '2')
        {
            file_output << "Type: " << "user" << endl;
        }
        file_output << "Username: " << username << endl;
        file_output << "Password: " << password << endl;
        file_output.close();
        file_input.close();
        return true;
    }

    bool login(char type)
    {
        file_input.open("data.txt");
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        tmp_password = password;
        string x;
        string user_line = "Username: " + username;
        string pass_line = "Password: " + password;
        string type_line;
        if (type == '1')
        {
            type_line = "Type: admin";
        }
        else if (type == '2')
        {
            type_line = "Type: user";
        }
        while (getline(file_input, x))
        {
            if (x == type_line)
            {
                getline(file_input, x);
                if (x == user_line)
                {
                    getline(file_input, x);
                    if (x == pass_line)
                    {
                        file_input.close();
                        return true;
                    }
                }
            }
        }
        file_input.close();
    }
};

bool change_password()
{
    // Change password
}
