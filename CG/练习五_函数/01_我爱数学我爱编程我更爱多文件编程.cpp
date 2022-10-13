#include <vector>
#include <string>

bool prime(int num)
{
    if(num==1){
        return false;
    }

    for(int i=2; i<num; ++i)
    {
        if(!(num%i))
        {
            return false;
        }
    }

    return true;
}

bool plalindrome(int num)
{
    using namespace std;
    string str = to_string(num);
    for(int idx=0; idx<str.size(); ++idx){
        if(str[idx]!=str[str.size()-idx-1]){
            return false;
        }
    }
    return true;

}
