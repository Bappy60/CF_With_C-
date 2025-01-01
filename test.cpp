#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

string plusOrMinus(int a, int b, int c){
    if(a + b == c) return "+";
    else if(a - b == c) return "-";
}

int main()
{
    int testCases;
    cin >> testCases;
    while(testCases--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << plusOrMinus(a, b, c) << endl;
    }
}
