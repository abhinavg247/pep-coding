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
    int a,b,c;
    cin>>a>>b>>c;

    int max = a;
    if(b > max){
        max = b;
    }
    if(c>max){
        max = c;
    }

    bool flag;
    if(a == max){
        flag = (b*b + c*c == a*a);
    }
    else if(b == max){
        flag = (a*a + c*c == b*b);
    }
    else{
        flag = (b*b + a*a == c*c);
    }

    (flag) ? cout<<"true" : cout<<"false";
}