#include<bits/stdc++.h>
using namespace std;

// Ham tinh téng ca mot mang
int sum(vector<int> &arr, int left, int right)
{
    int total = 0;
    for (int i = left; i <= right; i++)
    {
        total += arr[i];
    }
    return total;
}

    // Ham chia dé tri tinh tong cic phan tir trong mang
    int divideAndConquer(vector<int> & arr, int left, int right){
        if (left == right){
            return arr[left];
        }else{
            int mid = (left + right) / 2;
            int leftsum = divideAndConquer(arr, left, mid);
            int rightSum = divideAndConquer(arr, mid + 1, right);
            int crossingsum = sum(arr, left, right);
            return max(max(leftsum, rightSum), crossingsum);
        }
    }

int main(){
    vector<int> arr = {1, -2,3,9, 10,1 ,2};
    int result = divideAndConquer(arr,0, arr.size() - 1);
    cout <<"Tong lon nhat cua day so la : " << result << endl;
    return 0;
}
