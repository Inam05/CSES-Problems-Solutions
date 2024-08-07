/*
Time limit: 1.00 s
Memory limit: 512 MB
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length
substring containing only one type of character.

Input
The only input line contains a string of n characters.

Output
Print one integer: the length of the longest repetition.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int max_length = 0;
    int current_length = 1;
    char current_char = s[0];

    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] == current_char)
        {
            ++current_length;
        }
        else
        {
            if (current_length > max_length)
            {
                max_length = current_length;
            }
            current_char = s[i];
            current_length = 1;
        }
    }

    // Final check for the last sequence
    if (current_length > max_length)
    {
        max_length = current_length;
    }

    cout << max_length << endl;
    return 0;
}
