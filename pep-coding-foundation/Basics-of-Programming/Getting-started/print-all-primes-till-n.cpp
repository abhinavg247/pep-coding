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

bool isPrime(int n)
{
    int count = 0;
    for (int div = 2; div * div <= n; div++)
    {
        if (n % div == 0)
        {
            count++;
            break;
        }
    }

    if (count == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int l, h;
    cin >> l >> h;
    for (int i = l; i <= h; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
}