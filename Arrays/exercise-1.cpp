#include <iostream>;
using namespace std;

int main() {
    int size = 5;
    int arr[size];
    
    // Inserting elements into the array
    cout << "Enter " << size << " elements: " << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Displaying the elements of the array
    cout << "Array elements are: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
