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

int getValueIndecimal(int n, int b)
{
    int ans = 0;
    int multiplier = 1;
    while (n > 0)
    {
        int dig = n % 10;
        n /= 10;
        ans += dig * multiplier;
        multiplier *= b;
    }

    return ans;
}

int main()
{
    int n, b, d;
    cin >> n >> b;
    d = getValueIndecimal(n, b);
    cout << d << endl;
}
