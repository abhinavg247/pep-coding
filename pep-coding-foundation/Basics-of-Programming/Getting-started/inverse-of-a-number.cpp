#include <bits/stdc++.h>
using namespace std;
// using std::vector;

/*
Index :
1. 

References/videos/tuts :
1. 

Special Points : 
1. 
*/

int power(int x , int y){
    int ans = 1;
    while(y>0){
        ans*=x;
        y--;
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;

    int inv = 0;
    int op = 1;
    while(n>0){
        int od = n%10;
        int ip = od;
        int id = op;

        // make changes in inverse
        inv = inv + ( id * power(10,ip-1) );
        cout<<"inv : "<<inv<<endl;

        n = n/10;
        op++;
    }

    cout<<inv<<endl;
}