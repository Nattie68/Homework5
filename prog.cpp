#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    string star = "";
    cin >> num;
    for (int i = 1; i <= num; ++i)
    {
        star = star + "*";
        cout << star;
        cout << endl;
    }
    string s = "*";
    for (int i = num - 1; i >= 0; --i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << s;
        }
        cout << endl;
    }
    return 0;
}