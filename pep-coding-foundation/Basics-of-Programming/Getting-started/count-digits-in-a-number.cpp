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
    long long int n;
    cin >> n;
    int dig = 0;
    while (n > 0)
    {
        n = n / 10;
        dig++;
    }

    cout << dig << endl;
}