//
// Created by davepj007 on 28/08/18.
//
#include <iostream>
#include <string>
#include "sequentialSearch.h"

using namespace std;

sequentialSearch::sequentialSearch() {
    search();
}

int sequentialSearch::sequentialSearchAux(int a[], int size, int value) {
    for(int i = 0; i < size; i++){
        if(value == a[i]) return i;
    }
    return -1;
}

void sequentialSearch::search(){
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

    int res = sequentialSearchAux(arr, size, value);

    if(res != -1){
        cout << "The searched value is in the " << res << " position." << endl;
    }else {
        cout << "The searched value wasn't found" << endl;
    }
}

