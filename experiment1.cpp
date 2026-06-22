
#include <iostream>
using namespace std;

int main()
{
    char input[100];
    bool isNumeric = true;

    cout << "Enter a value: ";
    cin >> input;

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] < '0' || input[i] > '9')
        {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric)
        cout << "Numeric Constant";
    else
        cout << "Not Numeric Constant";

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    char input[100];
    cout<<"Enter :";
    cin>> input;

     if(input[0] == '/' && input[1] == '/')
        cout << "It is a Single Line Comment";
    else if(input[0] == '/' && input[1] == '*')
        cout << "It is a Multi Line Comment";
    else
        cout << "It is Not a Comment";

    return 0;

}
#include <iostream>
using namespace std;

int main()
{
    char input[100];
    cin >> input;

    bool valid = true;

    if (!((input[0] >= 'A' && input[0] <= 'Z') ||
          (input[0] >= 'a' && input[0] <= 'z') ||
          input[0] == '_'))
    {
        valid = false;
    }

    for (int i = 1; input[i] != '\0' && valid; i++)
    {
        if (!((input[i] >= 'A' && input[i] <= 'Z') ||
              (input[i] >= 'a' && input[i] <= 'z') ||
              (input[i] >= '0' && input[i] <= '9') ||
              input[i] == '_'))
        {
            valid = false;
        }
    }

    if (valid)
        cout << "Identifier";
    else
        cout << "Not Identifier";

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    char input[100];
    cin >> input;

    bool valid = true;

    if (!((input[0] >= 'A' && input[0] <= 'Z') ||
          (input[0] >= 'a' && input[0] <= 'z') ||
          input[0] == '_'))
    {
        valid = false;
    }

    for (int i = 1; input[i] != '\0' && valid; i++)
    {
        if (!((input[i] >= 'A' && input[i] <= 'Z') ||
              (input[i] >= 'a' && input[i] <= 'z') ||
              (input[i] >= '0' && input[i] <= '9') ||
              input[i] == '_'))
        {
            valid = false;
        }
    }

    if (valid)
        cout << "Identifier";
    else
        cout << "Not Identifier";

    return 0;
}
