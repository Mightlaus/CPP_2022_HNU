#include <iostream>

using namespace std;

void selec_sort(int arr[], int size){
	// 坑找值，从最低位坑开始，找剩下数据的最小值放入坑内 
    for (int i=0; i<size; ++i){
        int minIdx=i; // 默认最小值在当前坑位 
        for(int j=i+1; j<size; ++j){ // 找出坑位右边最小值的idx 
            if(arr[j]<arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]); // 将最小值填入坑位 
    }
}


int main()
{
    int vec[7] = {-5,12,1,5,90,98,77};
    selec_sort(vec, 7);

    return 0;
}
