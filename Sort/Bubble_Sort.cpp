#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
Bubble Sort: Sắp xếp Nổi bọt
Dộ Phức Tạp: O(n^2)
tư tưởng: đưa phần tử lón nhất chưa được sắp xếp về cuối dãy
*/
void Bubble_sort(int a[], int n){
	for (int i = 0; i < n - 1; ++i)
	{
		for(int j = 0; j < n - i - 1; ++j){
			if(a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
		}
	}
}

int main()
{
    int n = 10;
    int a[] = {5, 4, 2, 3, 8, 6, 9, 1, 0, 7};
    Bubble_sort(a, n);
    for(int x : a){
    	cout << x << " ";
    }
    return 0;
}