#include <iostream>
#include <cstdio>
#include <ctime>
#include <string.h>
using namespace std;
const int TIME_LIMIT = 1000;

int main()
{
    int n, m;
    cin>>n>>m;
    if (n < 1 || n > 3000 || m < 1 || m > 3000)
    {
        return 0;
    }
    string **s = new string *[m];
    string extra[3001];
    for (int i = 0; i < m; i++)
    {
        s[i] = new string[2];
        cin >> s[i][0];
        cin >> s[i][1];
    }
    clock_t start_time = clock();
    for (int k = 0; k < n; k++)
    {
       scanf("%s",extra[k]);
        for (int i = 0; i < m; i++)
        {
            if (extra[k] == s[i][0] || extra[k] == s[i][1])
            {
                if (s[i][0].length() < s[i][1].length() || s[i][0].length() == s[i][1].length())
                {
                    extra[k] = s[i][0];
                }
                else
                {
                    extra[k] = s[i][1];
                }
            }
        }
        if ((clock() - start_time) * 1000 / CLOCKS_PER_SEC > TIME_LIMIT)
        {
            cout<<(clock() - start_time) * 1000 / CLOCKS_PER_SEC;
            cerr << "  Time limit exceeded!" << endl;
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << extra[i];
        if (i != n - 1)
        {
            cout << " ";
        }
    }
    return 0;
}