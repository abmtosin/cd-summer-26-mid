
#include <iostream>
using namespace std;

char str[] = "cout << 60 + sum << \"Hello\" << endl;";
char *p;

int main()
{
    p = str;

    while (*p != '\0')
    {
        if (*p == ' ')
        {
            p++;
        }
        else if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
        {
            cout << "Identifier: ";
            while ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
            {
                cout << *p;
                p++;
            }
            cout << endl;
        }
        else if (*p >= '0' && *p <= '9')
        {
            cout << "Constant: ";
            while (*p >= '0' && *p <= '9')
            {
                cout << *p;
                p++;
            }
            cout << endl;
        }
        else if (*p == '<' && *(p + 1) == '<')
        {
            cout << "Operator: <<" << endl;
            p += 2;
        }
        else if (*p == '+')
        {
            cout << "Operator: +" << endl;
            p++;
        }
        else if (*p == '"')
        {
            cout << "String: ";
            p++;
            while (*p != '"')
            {
                cout << *p;
                p++;
            }
            p++;
            cout << endl;
        }
        else if (*p == ';')
        {
            cout << "Separator: ;" << endl;
            p++;
        }
        else
        {
            p++;
        }
    }

    return 0;
}
