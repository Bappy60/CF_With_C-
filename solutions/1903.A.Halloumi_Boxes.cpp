#include <bits/stdc++.h>
using namespace std;

bool isSorted(const std::vector<int> &vec)
{
    for (size_t i = 0; i < vec.size() - 1; ++i)
    {
        if (vec[i] > vec[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++){
            cin >> vec[i];
        }
        if (isSorted(vec) || k > 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}