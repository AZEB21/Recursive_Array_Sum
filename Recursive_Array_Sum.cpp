#include <iostream>
using namespace std;
int total(int arr[], int size) {
    // Base case: if size is 0, return 0
    if (size == 0) {
        return 0;
    }
    return arr[size - 1] + total(arr, size - 1);

}
int main() {
    int arr[] = {1, 2, 3, 4, 5};  
    int size = sizeof(arr) / sizeof(arr[0]);  

    int result = total(arr, size);  // Call the recursive function
    cout << "The sum of the array elements is: " << result << endl;

    return 0;
}
