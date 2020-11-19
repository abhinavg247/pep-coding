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

    int os = n/2, is = -1;
    for(int i = 1;i<=n;i++){

        for(int j = 1;j<=os;j++){
            cout<<"\t";
        }

        cout<<"*\t";
        
        for(int j = 1;j<=is;j++){
            cout<<"\t";
        }

        if(i > 1 && i < n){
            cout<<"*\t";
        }


        cout<<endl;

        if(i<=n/2){
            os--;
            is+=2;
        }
        else{
            os++;
            is-=2;
        }
    }
}