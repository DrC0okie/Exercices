#include <iostream>
#include <numeric>
#include <string>

using namespace std;

int main()
{
    string userInput = "";
    const string HELP = "help", EXIT = "exit", UCHAR = "uchar", CHAR = "char",
                 USHORT = "ushort", SHORT = "short", UINT = "uint", INT = "int",
                 ULONG = "ulong", LONG = "long", ULONGLONG = "ulong long",
                 LONGLONG = "long long", FLOAT = "float", DOUBLE = "double",
                 LONGDOUBLE = "long double";

    cout << "Enter the C++ data type for displaying information" << endl;
    cout << "Enter \"help\" to display the types supported" << endl;

    getline(cin, userInput, '\n');

    while (userInput != EXIT)
    {
        while (userInput != EXIT && userInput != UCHAR && userInput != CHAR && userInput != USHORT 
        && userInput != SHORT && userInput != UINT && userInput != INT && userInput != LONG 
        && userInput != ULONG && userInput != LONGLONG && userInput != ULONGLONG && userInput != FLOAT 
        && userInput != DOUBLE && userInput != LONGDOUBLE)
        {
            if (userInput == HELP)
            {
                cout << endl << "Possibles values are:" << endl;
                cout << "uchar, char, ushort, short, uint, int, ulong, long,"
                     << " ulong long, long long, float, double, long double" << endl;
            }
            else
            {
                cout << "Invalid entry. ";
            }
            cout << endl << "Please type \"help\" for more information, a valid entry or \"exit\" to quit" << endl;
            getline(cin, userInput, '\n');
        }

        if (userInput == EXIT)
        {
            return EXIT_SUCCESS;
        }

        cout << "The max value of " << userInput << " is: ";

        if (userInput == UCHAR)
        {
            cout << UCHAR_MAX;
            cout << " (" << numeric_limits<unsigned char>::digits << " bits)" << endl;
        }
        else if (userInput == CHAR)
        {
            cout << CHAR_MAX << endl;
            cout << " (" << numeric_limits<char>::digits << " bits)" << endl;
        }
        else if (userInput == USHORT)
        {
            cout << USHRT_MAX << endl;
            cout << " (" << numeric_limits<unsigned short>::digits << " bits)" << endl;
        }
        else if (userInput == SHORT)
        {
            cout << SHRT_MAX << endl;
            cout << " (" << numeric_limits<short>::digits << " bits)" << endl;
        }
        else if (userInput == UINT)
        {
            cout << UINT_MAX << endl;
            cout << " (" << numeric_limits<unsigned int>::digits << " bits)" << endl;
        }
        else if (userInput == INT)
        {
            cout << INT_MAX << endl;
            cout << " (" << numeric_limits<int>::digits << " bits)" << endl;
        }
        else if (userInput == LONG)
        {
            cout << LONG_MAX << endl;
            cout << " (" << numeric_limits<long>::digits << " bits)" << endl;
        }
        else if (userInput == ULONG)
        {
            cout << ULONG_MAX << endl;
            cout << " (" << numeric_limits<unsigned long>::digits << " bits)" << endl;
        }
        else if (userInput == LONGLONG)
        {
            cout << LLONG_MAX << endl;
            cout << " (" << numeric_limits<long long>::digits << " bits)" << endl;
        }
        else if (userInput == ULONGLONG)
        {
            cout << ULLONG_MAX << endl;
            cout << " (" << numeric_limits<unsigned long long>::digits << " bits)" << endl;
        }
        else if (userInput == FLOAT)
        {
            cout << std::numeric_limits<float>::max() << endl;
            cout << " (" << numeric_limits<float>::digits << " bits)" << endl;
        }
        else if (userInput == DOUBLE)
        {
            cout << std::numeric_limits<double>::max() << endl;
            cout << " (" << numeric_limits<double>::digits << " bits)" << endl;
        }
        else if (userInput == LONGDOUBLE)
        {
            cout << std::numeric_limits<long double>::max() << endl;
            cout << " (" << numeric_limits<long double>::digits << " bits)" << endl;
        }

        cout << endl << "Enter an other data type or \"exit\" to quit" << endl;
        getline(cin, userInput, '\n');
    }

    return EXIT_SUCCESS;
}