// pointer

#include<iostream>
using namespace std;

// pass by reference using pointer

void changeA(int* ptr){
	*ptr = 20;
}

// pass by reference alias
void changeB(int& ptr){
	ptr = 60;
}


int main(){
	int a = 10;

	changeA(&a);

	cout << a << endl;

	changeB(a);

	cout << a << endl;


	int* ptr;
	int* ptr2 = ptr + 2;

	cout << ptr2 - ptr << endl;


	int arr[] = {1 , 2, 3, 4};

	int* ptrArr = arr;

	cout << *(ptrArr + 1) << endl;
	cout << *(ptrArr + 3) << endl;
	ptrArr++;
	cout << *ptrArr << endl;
 
	return 0;
}