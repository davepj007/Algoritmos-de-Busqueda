//
// Created by davepj007 on 28/08/18.
//

#include <iostream>
#include <string>
#include "binarySearch.h"

using namespace std;

int binarySearchAux(int a[], int size, int value) {
    int* head = &a[0];
    int* tail = &a[size-1];


    for(int i = 0; i < size; i++){
        if(value == a[i]) return i;
    }
    return -1;
}

void binarySearch(){
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int arr[size];
    int value;
    for(int i = 0; i < size; i++){
        cout << "Enter a value: " << endl;
        cin >> value;
        arr[i] = value;
    }

    cout << "Enter the value to search: " << endl;
    cin >> value;

    int res = binarySearchAux(arr, size, value);

    if(res != -1){
        cout << "The serched value is in the " << res << " position." << endl;
    }else {
        cout << "The searched value wasn't found" << endl;
    }
}