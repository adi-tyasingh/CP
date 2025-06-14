#include <bits/stdc++.h>
using namespace std;
bool checkLucky(int x)
{
    if (x == 0)
    {
        return false;
    }
    else
    {
        while (x > 0)
        {
            int rem = x % 10;
            x = x / 10;
            if (rem != 7 && rem != 4)
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    int count = 0;
    string n;
    cin >> n;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '7' || n[i] == '4')
        {
            count++;
        }
    }
    if (checkLucky(count))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}