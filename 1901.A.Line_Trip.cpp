#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int numOfGasStations, destination;
        cin >> numOfGasStations >> destination;
        vector<int> vec(numOfGasStations + 2);
        vec[0] = 0;
        vec[numOfGasStations + 1] = destination;
        int maxDif = 0, j = 1;
        for (int i = 1; i <= numOfGasStations; i++)
        {
            cin >> vec[i];
        }
        for (int i = 0; i < vec.size() - 1; i++)
        {
            int dif = (vec[j] - vec[i]);
            if (j == vec.size() - 1)
            {
                dif = 2 * dif;
            }
            j++;
            maxDif = max(maxDif, dif);
        }

        cout << maxDif << endl;
    }
    return 0;
}