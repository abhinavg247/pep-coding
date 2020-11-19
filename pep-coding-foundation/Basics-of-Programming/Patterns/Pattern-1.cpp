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
    cin>>n;

    for(int i = 1;i<=n;i++){
        for(int j = 0;j<i;j++){
            cout<<"*\t";
        }
        cout<<endl;
    }
}