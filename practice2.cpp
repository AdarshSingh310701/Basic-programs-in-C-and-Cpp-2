
#include <bits/stdc++.h>
using namespace std;


int kthSmallest(int arr[], int N, int K)
{
	
	sort(arr, arr + N);

	
	return arr[K - 1];
}


int main()
{  int N, K, arr[50];
	cin>>N;
	for(int i=0;i<N;i++)
	{ cin>>arr[i];
	}
	cin>>K;
	cout << "K'th smallest element is "
		<< kthSmallest(arr, N, K);
	return 0;
}


