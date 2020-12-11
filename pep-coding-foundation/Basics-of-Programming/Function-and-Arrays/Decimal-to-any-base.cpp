#include <bits/stdc++.h>
using namespace std;
using std::vector;

/*
Index :
1. 

References/videos/tuts :
1. 

Special Points : 
1. 
*/

int getValueInBase(int n, int b)
{
    int count = 1, ans = 0;
    while (n > 0)
    {
        int rem = n % b;
        n /= b;
        ans += (count * rem);
        count *= 10;
    }

    return ans;
}

int main()
{
    int n, b, dn;
    cin >> n >> b;
    dn = getValueInBase(n, b);
    cout << dn << endl;
}
