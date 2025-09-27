#include <iostream>
using namespace std;

int main() {
    int n, var, count = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    if(n<=1){
        cout<<"invalid size .";
    }
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the number to find its frequency: ";
    cin >> var;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == var) {
            ++count;
        }
    }
    cout << "The number " << var << " appears " << count << " times in the list.\n";
    return 0;
}
