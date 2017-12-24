#include <iostream>
using namespace std;

void incredible_sort(int N, int k){
	int*counter = new int[k];
	for (int i = 0; i<k; i++)
		counter[i] = 0;
	for (int i = 0; i<N; i++) {
		int temp = 0;
		cin >> temp;
		counter[temp - 1]++;
	}
	for (int i = k - 1; i >= 0; i--) { 
		for (int j = 0; j < counter[i]; j++) {
			cout << i + 1 << " ";
		}
	}
}

int main(){
	int N, k;
	cin >> N;
	cin >> k;
	incredible_sort(N, k);
	return 0;
}
