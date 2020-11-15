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

int main()
{
    int n;
    cin >> n;

    while (n > 0)
    {
        cout << n % 10 << endl;
        n = n / 10;
    }
}