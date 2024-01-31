#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n; 
    int arr[];
    int i, j; 
    int sum; 
    for(int k=1; k<n ; k++) {
        cin >> arr[k]; 
    }
    cin >> i >> j; 
    for(; i<j; j++) {
        sum += arr[i];
    } 
    cout << sum << "\n";
    return 0; 
}