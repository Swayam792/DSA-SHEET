#include<bits/stdc++.h>
using namespace std;
#define N 4

void rotate(int arr[N][N]){
    
    // Transpose the given matrix
    for(int i = 0 ; i < N; i++){
        for(int j = i; j < N; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    
    // reverse each row
    for(int i = 0 ;i < N; i++){
       int left = 0, right = N-1;
       while(left < right){
          swap(arr[i][left],arr[i][right]);
          left++,right--;
       }
    }
}

void print(int arr[N][N]){
     for(int i = 0; i < N; i ++){
        for(int j = 0; j < N; j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
}
int main()
{
    int arr[N][N] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
    rotate(arr);
    print(arr);
    return 0;
}

// Time Complexity - O(N*N) Auxiliary space - O(1)