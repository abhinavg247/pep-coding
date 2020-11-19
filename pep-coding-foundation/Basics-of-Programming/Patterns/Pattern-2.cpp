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

    for(int i = n;i>=1;i--){
        for(int j = 1;j<=i;j++){
            cout<<"*\t";
        }
        cout<<endl;
    }
}