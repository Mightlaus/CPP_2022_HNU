#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

vector<int> get_random_vect(int size) {
    vector<int> vec;
    for (int i=0; i<size; ++i) {
        vec.push_back(rand());
    }

    return vec;
}

void quick_sort(int vec[], int head, int tail){
    if(head>=tail){
        return;
    }

    int i=head, j=tail;
    int pivot = vec[i];

    while(i<j){
        while(i<j and pivot<=vec[j]){
            j--;    // 右边大于pivot的全部放到左边
        }
        vec[i] = vec[j];

        while(i<j and vec[i]<=pivot){
            i++;    // 左边小于pivot的全部放到右边
        }
        vec[i] = vec[j];
    }

    vec[i] = pivot;

    quick_sort(vec, head, i-1);
    quick_sort(vec, j+1, tail);

}

void quick_sort(vector<int> &vec, int head, int tail){
    if(head>=tail){
        return;
    }

    int i=head, j=tail;
    int pivot = vec[i];

    while(i<j){
        while(i<j and pivot<=vec[j]){
            j--;    // 右边大于pivot的全部放到左边
        }
        vec[i] = vec[j];

        while(i<j and vec[i]<=pivot){
            i++;    // 左边小于pivot的全部放到右边
        }
        vec[i] = vec[j];
    }

    vec[i] = pivot;

    quick_sort(vec, head, i-1);
    quick_sort(vec, j+1, tail);

}


int main() {
    int unsort[20];
    for(auto &s:unsort){
        s = rand();
    }

    auto unsortVec = get_random_vect(20);

    quick_sort(unsort, 0, 20-1);
    quick_sort(unsortVec, 0, 20-1);

    return 0;

}