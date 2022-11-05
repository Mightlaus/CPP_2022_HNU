#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


/* 很难以此把条件全部考虑全，慢慢来
 * 从@分段
 * @向前：找到字母++,找到非字母/数字/下划线结束
 * @~~.：如果出现非字母或数字该段作废
 * .之后：找到一个字母++， 数字/_/.结束
 */

using namespace std;

bool is_word(char c){
    if(c>='a' and c<='z'){
        return true;
    }
    return false;
}

bool is_num(char c){
    if(c>='0' and c<='9'){
        return true;
    }
    return false;
}



int main() {
    string chaos;
    cin>>chaos;

    int all=0;

    int atPos=0;
    while(chaos.find('@', atPos+1)!=-1){
        atPos = chaos.find('@', atPos+1);
        int bfAt=0;
        for (int i=atPos-1; i>=0; --i){
            if(chaos[i]=='.' or chaos[i]=='@'){
                break;
            }
            if(is_word(chaos[i])){
                bfAt++;
            }
        }

        int mid=1;
        auto dotPos = chaos.find('.', atPos);
        for (int i = atPos+1; i < dotPos; ++i) {
            if(is_word(chaos[i])==0 and is_num(chaos[i])==0 or dotPos==-1){
                mid = 0;
                break;
            }
        }

        int aftDot=0;
        if(dotPos==-1){
            continue;
        }

        int i=dotPos+1;
        while(1){
            if(chaos[i]=='.' or is_num(chaos[i]) or chaos[i]=='@' or chaos[i]=='_' or i>chaos.size()-1){
                break;
            }

            if(is_word(chaos[i])){
                aftDot++;
            }
            i++;
        }

        all += bfAt*mid*aftDot;
    }

    cout<<all;

}
