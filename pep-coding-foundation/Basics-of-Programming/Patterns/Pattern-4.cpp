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

    int sp = 0;
    int st = n;
    for(int i = 1;i<=n;i++){

        for(int j = 1;j<=sp;j++){
            cout<<"\t";
        }

        for(int j = 1;j<=st;j++){
            cout<<"*\t";
        }

        cout<<endl;

        sp++;
        st--;
    }

}