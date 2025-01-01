#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        int dotsInARow = 0, numOfActions = 0;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] == '.')
            {
                dotsInARow++;
            }
            if (vec[i] == '#' || i == vec.size() - 1)
            {
                if (dotsInARow <= 2)
                {
                    numOfActions += dotsInARow;
                    dotsInARow = 0;
                }
            }

            if (dotsInARow >= 3)
            {
                numOfActions = 2;
                break;
            }
        }
        cout << numOfActions << endl;
    }
    return 0;
}