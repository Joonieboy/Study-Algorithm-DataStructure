#include <iostream>
#include <vector>
using namespace std;

int T;
int N;

int main(){
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		
		if (N == 0) {
			cout << 1 << ' ' << 0 << endl;	
		} else if (N == 1) {
			cout << 0 << ' ' << 1 << endl;
		} else {
			vector<int> fib;
			for (int j = 0; j <= N; j++) {
				if (j == 0 || j == 1) {
					fib.push_back(j);
				} else {
					int su = fib[j-1] + fib[j-2];
					fib.push_back(su);
				}
			}
			cout << fib[N-1] << ' ' << fib[N] << endl; 
		}
		
	}	
	return 0;
}