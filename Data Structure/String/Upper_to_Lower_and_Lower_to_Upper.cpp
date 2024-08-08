#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String: ";
    getline(cin, str);

    // Converting String to Upper case

    /*
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
            }
        }
    */

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << "String is: " << str << endl;

    // Converting String to Lower case

    /*
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32;
            }
        }
    */
   
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << "String is: " << str;

    return 0;
}