#include <iostream>
using namespace std;

int main()
{
    cout << static_cast<char>(32);
    string str;
    cout << "Enter a String: ";
    cin >> str;

    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i] - 'a']++;
    }

    int max_freq = 0;
    char freq_char;
    for (int i = 0; i < 26; i++)
    {
        if (max_freq < freq[i])
        {
            max_freq = freq[i];
            freq_char = static_cast<char>(i + 97);
        }
    }

    cout << "Most Frequent Character is: " << freq_char << " appearing " << max_freq << " Times" << endl;

    return 0;
}