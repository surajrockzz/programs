// chef and mover in codechef easy 

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, mov;
        cin >> n >> mov;
        long int arr[n], i;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long int sum = 0;
        for (i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        if (sum % n != 0 || mov > n || mov == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            long int count = 0, last = 0;
            int f = 0, b = n - 1;
            long int d = sum / n, i = 0;
            for (i = 0; i < n - mov; i++)
            {
                if (arr[i] != d)
                {
                    count = count + abs(d - arr[i]);
                    arr[i + mov] = arr[i + mov] - (d - arr[i]);
                    arr[i] = arr[i] + (d - arr[i]);
                }
                if (arr[i] == d)
                    last++;
            }
            for (i = n - mov; i < n; i++)
            {
                if (arr[i] == d)
                    last++;
            }
            if (last == n)
                cout << count << endl;
            else
                cout << "-1" << endl;
        }
    }
}
