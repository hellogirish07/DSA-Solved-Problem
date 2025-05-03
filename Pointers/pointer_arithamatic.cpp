#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Array of integers
    int *ptr = arr; // Pointer pointing to the first element

    cout << "Original pointer address: " << ptr << " | Value: " << *ptr << endl;

    // 1️⃣ Pointer Increment (Moves to next element)
    ptr++;
    cout << "After ptr++: " << ptr << " | Value: " << *ptr << endl;

    // 2️⃣ Pointer Decrement (Moves back to previous element)
    ptr--;
    cout << "After ptr--: " << ptr << " | Value: " << *ptr << endl;

    // 3️⃣ Pointer Addition (Moving forward by 2 elements)
    ptr = ptr + 2;
    cout << "After ptr + 2: " << ptr << " | Value: " << *ptr << endl;

    // 4️⃣ Pointer Subtraction (Moving backward by 1 element)
    ptr = ptr - 1;
    cout << "After ptr - 1: " << ptr << " | Value: " << *ptr << endl;

    // 5️⃣ Difference between two pointers
    int *ptr2 = &arr[4]; // Pointer to last element
    int difference = ptr2 - arr;
    cout << "Difference between ptr2 and arr: " << difference << " elements" << endl;

    return 0;
}
