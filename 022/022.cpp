#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N; 
  cin >> N;
  int coconut_basket[10001] = {0};
  int number = 0;


  for(int i=1; i<=N; i++) {
    cin >> number;
    coconut_basket[number]++;
  }

  for(int i=0; i<=10000; i++) {
    if(coconut_basket[i] != 0){  
        for(int j=0; j<coconut_basket[i]; j++) {
          cout << i << "\n";
        }
    }
  }
}