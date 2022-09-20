#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename elemType>

elemType* find(elemType *first, elemType *last, elemType &value){
	for(; first != last; ++first){
		if(*first == value)
			return first;
	}
	return 0;
}

int min(int array[2]){
	cout << "sizeof array is:" << sizeof(array) << "\n";
	for(int ix = 0; ix < sizeof(array); ix++){
		cout << array[ix];
	}
}

int main(){
	int array1[4] = {1, 2, 3, 4};
	cout << find(array1, array1+3, array1[0]) << "\n";
	cout << find(array1, array1+3, array1[1]) << "\n";
	cout << find(array1, array1+3, array1[2]) << "\n";
	cout << find(array1, array1+3, array1[2]) << "\n";
} 


