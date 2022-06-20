#include <iostream>
using namespace std;

int main() {
	int a[] ={1, 2,  -4, -5, 2, -7, 3, 2, -6, -8, -9, 3, 2,  1};
	int n = sizeof(a)/sizeof(int);
	int low = 0, mid = 0;
	for(int i = 0; i < n; i++){
	    if(a[i] < 0){
	        swap(a[low++],a[mid++]);
	    }else{
	        mid++;
	    }
	}
	
	for(int i = 0 ; i < n; i++){
	    cout<<a[i]<< " ";
	}
	return 0;
}