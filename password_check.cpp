/******************************************************************************
HR committee of Sunrise Basket company decided to enforce the following rules when an employee creates/changes his/her password.

1. Password should be less than 15 and more than 8 characters in length. 2. Password should contain at least one upper case and one lower case

alphabet.

3. Password should contain at least one number.

4. Password should contain at least one special character.

The program must accept a given password string P as input and check for these rules and output password is VALID or INVALID

Input format

Password as string in first line

Output format

<Password> is a valid password or <Password> is a invalid password

Refer Sample output

Sample testcases

Input 1

Ex@1234ab

Input 2

Ex!!

Output 1

Ex@1234ab is a valid password

Output 2

Ex!! is a invalid password

Note:

The program will not be evaluated if "Submit Code is not done atleast once Extra spaces and new line characters in the program output will also result in the testcase

failing

*******************************************************************************/

#include <iostream>
using namespace std;

bool isValid(string password)
{

    if (!((password.length() >= 8) &&
          (password.length() <= 15)))
        return false;

    if (password.find(" ") !=
        std::string::npos)
        return false;

    if (true)
    {
        int count = 0;
        for (int i = 0; i <= 9; i++)
        {
            string str1 = to_string(i);

            if (password.find(str1) !=
                std::string::npos)
                count = 1;
        }
        if (count == 0)
            return false;
    }
    if (!((password.find("@") != std::string::npos) ||
          (password.find("#") != std::string::npos) ||
          (password.find("!") != std::string::npos) ||
          (password.find("~") != std::string::npos) ||
          (password.find("$") != std::string::npos) ||
          (password.find("%") != std::string::npos) ||
          (password.find("^") != std::string::npos) ||
          (password.find("&") != std::string::npos) ||
          (password.find("*") != std::string::npos) ||
          (password.find("(") != std::string::npos) ||
          (password.find(")") != std::string::npos) ||
          (password.find("-") != std::string::npos) ||
          (password.find("+") != std::string::npos) ||
          (password.find("/") != std::string::npos) ||
          (password.find(":") != std::string::npos) ||
          (password.find(".") != std::string::npos) ||
          (password.find(",") != std::string::npos) ||
          (password.find("<") != std::string::npos) ||
          (password.find(">") != std::string::npos) ||
          (password.find("?") != std::string::npos) ||
          (password.find("|") != std::string::npos)))
        return false;

    if (true)
    {
        int count = 0;
        for (int i = 65; i <= 90; i++)
        {
            char c = (char)i;
            string str1(1, c);

            if (password.find(str1) !=
                std::string::npos)
                count = 1;
        }
        if (count == 0)
            return false;
    }

    if (true)
    {
        int count = 0;
        for (int i = 90; i <= 122; i++)
        {
            char c = (char)i;
            string str1(1, c);

            if (password.find(str1) !=
                std::string::npos)
                count = 1;
        }
        if (count == 0)
            return false;
    }
    return true;
}

int main()
{
    string password1;
    cin >> password1;

    if (isValid(password1))
        cout << password1 << " is a valid password" << endl;
    else
        cout << password1 << " is a invalid password" << endl;
}
