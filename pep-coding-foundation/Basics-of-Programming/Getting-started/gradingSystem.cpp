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
    int marks;
    cin >> marks;
    if (marks > 90)
    {
        cout << "Excellent" << endl;
    }
    else if (marks <= 90 && marks > 80)
    {
        cout << "Good" << endl;
    }
    else if (marks <= 80 && marks > 70)
    {
        cout << "Fair" << endl;
    }
    else if (marks <= 70 && marks > 60)
    {
        cout << "Meets expectations" << endl;
    }
    else
    {
        cout << "Below par" << endl;
    }
}