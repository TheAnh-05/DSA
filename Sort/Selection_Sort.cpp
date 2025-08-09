#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
Selection Sort: Sắp xếp chọn
Dộ Phức Tạp: O(n^2)
tư tưởng: đưa phần tử nhỏ nhất chứ được sắp xếp về đầu dãy
*/
void selection_sort(int a[], int n){
	for (int i = 0; i < n - 1; ++i)
	{
		int pos = i;
		for(int j = i + 1; j < n; ++j){
			if(a[j] < a[pos]){
				pos = j;
			}
		}
		int temp = a[i];
		a[i] = a[pos];
		a[pos] = temp;
	}
}

int main()
{
    int n = 9;
    int a[] = {4, 2, 3, 8, 6, 9, 1, 0, 7};
    selection_sort(a, n);
    for(int x : a){
    	cout << x << " ";
    }
    return 0;
}