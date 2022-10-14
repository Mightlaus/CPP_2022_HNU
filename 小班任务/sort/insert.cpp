#include <iostream>
#include <string>
#include <vector>


using namespace std;

void insert_sort(int arr[], int size){
    for (int i=1; i<size; ++i){
        int key = arr[i];
        int j = i-1;
        while(arr[j]>key && j>=0){
            arr[j+1] = arr[j];
            --j;
        }

        arr[j+1] = key;
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
