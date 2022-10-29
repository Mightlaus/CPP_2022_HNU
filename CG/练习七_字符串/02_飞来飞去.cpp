#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int T;
    cin>>T;

    for (int i = 0; i < T; ++i) {
        int s2t=0, t2s=0;
        int day;
        string str;
        cin >> day >> str;

        char *p = &str[0];
        char today= str[0];
        while(p<=&str[str.size()-1]){
            while(*p==today && p<=&str[str.size()-1]){
                p++;
            }
            today = *p;

            if(*p=='T'){
                s2t++;
            } else if(*p=='S'){
                t2s++;
            }
        }

        if(s2t>t2s){
            cout << "YES";
        }else {
            cout << "NO";
        }

    }
}
