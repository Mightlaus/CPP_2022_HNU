#include <iostream>

using namespace std;

void selec_sort(int arr[], int size){
	// ����ֵ�������λ�ӿ�ʼ����ʣ�����ݵ���Сֵ������� 
    for (int i=0; i<size; ++i){
        int minIdx=i; // Ĭ����Сֵ�ڵ�ǰ��λ 
        for(int j=i+1; j<size; ++j){ // �ҳ���λ�ұ���Сֵ��idx 
            if(arr[j]<arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]); // ����Сֵ�����λ 
    }
}


int main()
{
    int vec[7] = {-5,12,1,5,90,98,77};
    selec_sort(vec, 7);

    return 0;
}
