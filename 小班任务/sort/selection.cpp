#include <iostream>

using namespace std;

void selec_sort(int arr[], int size){
    for (int i=0; i<size; ++i){
        int minIdx=i;
        for(int j=i+1; j<size; ++j){
            if(arr[j]<arr[minIdx]){
                minIdx = j;
            }
        }
//        int tmp = 0;
//        tmp = arr[i];
//        arr[i] = arr[minIdx];
//        arr[minIdx] = tmp;
        swap(arr[i], arr[minIdx]);
    }
}


int main()
{
    int vec[7] = {-5,12,1,5,90,98,77};
    selec_sort(vec, 7);

    return 0;
}
