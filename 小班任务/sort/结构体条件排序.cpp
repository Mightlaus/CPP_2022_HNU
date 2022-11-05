#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct WUJIANG{
    string name;
    int age;
    int tili;
    int wuli;
    int zhili;
};

bool cmp(WUJIANG p1, WUJIANG p2){ // 返回false交换
    if(p2.wuli!=p1.wuli) return p2.wuli<p1.wuli;
    if(p2.zhili!=p1.zhili) return p2.zhili < p1.zhili;
    if(p2.tili!=p1.tili) return p2.tili<p1.tili;
    if(p2.age!=p1.age) return p2.age > p1.age;
}

int main() {

    vector<struct WUJIANG> vec;

    while(1){
        string name;
        int age, tili, zhili, wuli;
        cin >> name;
        if(name=="#"){
            break;
        }
        cin >> age >> tili >> zhili >> wuli;

        WUJIANG wujiang={name, age, tili, wuli, zhili};

        vec.push_back(wujiang);
    }

    sort(vec.begin(), vec.end(), cmp);

    for(auto x:vec){
        printf("%s   %d   %d   %d   %d\n",x.name.c_str(),x.age,x.tili,x.zhili,x.wuli);
    }

}
