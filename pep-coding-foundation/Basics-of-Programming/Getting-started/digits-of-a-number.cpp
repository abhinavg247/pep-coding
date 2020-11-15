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

    // count digits
    int temp = n;
    int nod = 0;
    while (temp > 0)
    {
        temp = temp / 10;
        nod++;
    }

    int div = (int)pow(10, nod - 1);

    while (div != 0)
    {
        cout << "dig : " << (n / div) << endl;
        n = n % div;
        div /= 10;
    }
}