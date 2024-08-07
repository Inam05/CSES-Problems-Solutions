/*
Time limit: 1.00 s
Memory limit: 512 MB
You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.

Input:
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).

Output:
Print the missing number.

Constraints
2 <= n <=2.10^5
*/

// code

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    long long total_sum = (static_cast<long long>(n) * (n + 1)) / 2;
    cout << "Expected sum of numbers from 1 to " << n << " is: " << total_sum << endl;

    long long given_sum = 0;
    cout << "Enter the " << (n - 1) << " numbers (each between 1 and " << n << "): ";

    for (int i = 0; i < n - 1; ++i)
    {
        int num;
        cin >> num;
        given_sum += num;
    }

    cout << "Sum of the provided " << (n - 1) << " numbers is: " << given_sum << endl;

    int missing_number = total_sum - given_sum;
    cout << "The missing number is: " << missing_number << endl;

    return 0;
}
