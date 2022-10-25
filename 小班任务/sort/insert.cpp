#include <iostream>
#include <string>
#include <vector>


using namespace std;

void insert_sort(int arr[], int size){
	// 对n-1个数判断插入 
    for (int i=1; i<size; ++i){
        int key = arr[i]; // 当前值arr[i]提出，准备比较 
        
        // 找到第一个 arr[j]<=key的位置j然后把key放入到arr[j+1]
        int j = i-1; // 从 arr[i-1]开始到arr[0]比较，然后插入  
        while(arr[j]>key && j>=0){  // 开始比较，直到找到第一个arr[j]<=key的位置j, 然后中止循环 
            arr[j+1] = arr[j];  // 如果不大于，就右移一位，同时也相当于是将arr[i]提出的空左移
            --j;  // 然后继续比较下一位  
        }

        arr[j+1] = key;  // 把key填入找到的第一个比它小的数的右侧 
    }

}

int main()
{
    int arr[9] = {8, 80, 12, 15, -5, 9, -90, 200, 201};
    insert_sort(arr, 9);

    for(auto x:arr){
        cout << x << " ";
    }


}
