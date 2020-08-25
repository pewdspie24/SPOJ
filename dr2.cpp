#include <bits/stdc++.h> 
using namespace std;  
long long countSubarrays(int arr[], 
                   long long n, long long k) 
{ 
    long long start = 0, end = 0, 
        count = 0, sum = arr[0]; 
  
    while (start < n && end < n) {  
        if (sum < k) { 
            end++; 
  
            if (end >= start) 
                count += end - start; 
            if (end < n) 
                sum += arr[end]; 
        } 
        else { 
            sum -= arr[start]; 
            start++; 
        } 
    } 
  
    return count; 
} 
int main() 
{ 
    int array[100000]; 
    long long k,n;
	cin>>n>>k;
	for(int i = 0; i < n; i++)
	cin>>array[i]; 
    int size = n;
    cout << countSubarrays(array, size, k); 
} 
