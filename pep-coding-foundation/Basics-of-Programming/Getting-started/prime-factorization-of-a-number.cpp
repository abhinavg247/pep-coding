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

    for(int i = 2;i*i<= n;i++){
        while(n%i == 0){
            n = n/i;
            cout<<i<<" ";
        }
    }

    if(n!=1){
        cout<<n<<endl;     
        cout<<"exec"<<endl;   
    }
}