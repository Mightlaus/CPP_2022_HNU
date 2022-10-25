#include <iostream>
#include <string>
#include <vector>


using namespace std;

void insert_sort(int arr[], int size){
	// ��n-1�����жϲ��� 
    for (int i=1; i<size; ++i){
        int key = arr[i]; // ��ǰֵarr[i]�����׼���Ƚ� 
        
        // �ҵ���һ�� arr[j]<=key��λ��jȻ���key���뵽arr[j+1]
        int j = i-1; // �� arr[i-1]��ʼ��arr[0]�Ƚϣ�Ȼ�����  
        while(arr[j]>key && j>=0){  // ��ʼ�Ƚϣ�ֱ���ҵ���һ��arr[j]<=key��λ��j, Ȼ����ֹѭ�� 
            arr[j+1] = arr[j];  // ��������ڣ�������һλ��ͬʱҲ�൱���ǽ�arr[i]����Ŀ�����
            --j;  // Ȼ������Ƚ���һλ  
        }

        arr[j+1] = key;  // ��key�����ҵ��ĵ�һ������С�������Ҳ� 
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
