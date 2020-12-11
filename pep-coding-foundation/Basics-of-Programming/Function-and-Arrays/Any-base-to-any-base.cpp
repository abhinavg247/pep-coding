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

int anyBaseToDecimal(int n, int b)
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

int DecimalToAnyBase(int n, int b)
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

int AnyBaseToAnyBase(int n, int sb, int db)
{
    int dec = anyBaseToDecimal(n, sb);
    int ans = DecimalToAnyBase(dec, db);
    return ans;
}

int main()
{
    int n, sourceBase, destBase;
    cin >> n >> sourceBase >> destBase;
    int ans = AnyBaseToAnyBase(n, sourceBase, destBase);
    cout << ans << endl;
}
