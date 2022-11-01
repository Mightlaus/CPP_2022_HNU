#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int weight(int plc, int v, int w){
    return w*abs(v-plc);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        auto v = str.find('^');

        int left=0;
        for (int j = 0; j < v; ++j) {
            if(str[j]!='=')
                left += weight(j, v, str[j]-'0');
        }

        int right=0;
        for (int j = v+1; j < str.size(); ++j) {
            if(str[j]!='=')
                right += weight(j, v, str[j]-'0');
        }

        if(left>right){
            cout << "left"<<endl;
        } else if(right>left){
            cout << "right"<<endl;
        }else{
            cout<<"balance"<<endl;
        }
    }
}
