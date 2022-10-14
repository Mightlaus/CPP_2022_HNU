#include <iostream>
#include <string>

using namespace std;

void bubble_sort(int arr[], int size){
    for(int i=0; i<size-1; ++i){
        for(int j=0; j<size - i - 1; ++j){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[9] = {8, 80, 12, 15, -5, 9, -90, 200, 201};
    bubble_sort(arr, 9);

    for(auto x:arr){
        cout << x << " ";
    }
}
