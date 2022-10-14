#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pyes cout << "YES\n"
#define pno cout << "NO\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n % 2 == 0 && n != 2)
        pyes;
    else
        pno;
    return 0;
}