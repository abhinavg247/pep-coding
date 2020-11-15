#include <bits/stdc++.h>
using namespace std;
using std::vector;

/*
Index :
1. 

References/videos/tuts :
1. 

Special Points : 
1. gcd * lcm = n1 * n2
*/

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    // for gcd

    int div = (n1<n2)? n1:n2;
    int D = (n1 == div)?n2:n1;

    while(div!=0){
        int temp = div;
        div = D%div;
        D = temp;
    }

    // finally D will store gcd
    int gcd = D;

    // We know, gcd * lcm = n1 * n2
    int lcm = (n1*n2)/gcd;

    cout<<gcd<<endl;
    cout<<lcm<<endl;

}