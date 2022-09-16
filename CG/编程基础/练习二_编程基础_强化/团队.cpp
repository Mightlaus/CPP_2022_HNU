#include <iostream>

using namespace std;

int main()
{
    unsigned int n, cnt=0;
    cin>>n;
    
    short a, b, c;
    while(n--)
    {
        cin>>a>>b>>c;     
        if(a&&b || a&&c || b&&c)
        {
            cnt++;
        }
    }
    
    cout<<cnt<<endl;
    return 0;
}

