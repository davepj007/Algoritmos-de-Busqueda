//
// Created by davepj007 on 28/08/18.
//

#include <iostream>
#include <string>
#include "binarySearch.h"

using namespace std;

binarySearch::binarySearch() {
    binarySearch::search();
}

int binarySearch::binarySearchAux(int arr[], int left, int right, int value) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == value)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > value)
            return binarySearchAux(arr, left, mid - 1, value);

        // Else the element can only be present
        // in right subarray
        return binarySearchAux(arr, mid + 1, right, value);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

void binarySearch::search() {
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int arr[size];
    int value;
    for (int i = 0; i < size; i++) {
        cout << "Enter a value: " << endl;
        cin >> value;
        if (i != 0 && value < arr[i]) {
            cout << "The entered values must be sorted ascending: " << endl;
            i -= 1;
        } else {
            arr[i] = value;
        }
    }

    cout << "Enter the value to search: " << endl;
    cin >> value;

    int res = binarySearchAux(arr, 0, sizeof(arr) / sizeof(arr[0]), value);

    if (res != -1) {
        cout << "The serched value is in the " << res << " position." << endl;
    } else {
        cout << "The searched value wasn't found" << endl;
    }
}