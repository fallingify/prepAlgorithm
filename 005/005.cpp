#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL); 

    int n, m; 
    cin >> n >> m; 
    vector<long> sumArr(n, 0); 
    vector<long> numArr(m, 0); 
    int cnt = 0;
    cin >> sumArr[0]; 

    for(int i=1; i<n; i++) {
        int tmp; 
        cin >> tmp;
        sumArr[i] = sumArr[i-1] + tmp; 
    }

    for(int i=0; i<n; i++) {
        int remainder = sumArr[i] % m; 

        if(remainder == 0){
             ++cnt; 
        }
        numArr[remainder]++;
    }    

    for(int i=0; i<m; i++) {
        if(numArr[i] > 1) {
            cnt = cnt + (numArr[i] * (numArr[i]-1)) / 2;
        }
    }
    cout << cnt << "\n";
    return 0;  
}