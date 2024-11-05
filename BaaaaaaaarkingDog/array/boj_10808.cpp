#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> alpha(26);
    string str;

    cin >> str;
    for (char e : str)
        alpha[e - 'a']++;
    for (int e : alpha)
        cout << e << ' ';
}