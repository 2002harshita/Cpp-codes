/*Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 10^6
-10^7 ≤ A[i] ≤ 10^7  */


long long maxSubarraySum(int arr[], int n){
        
    long long maxSum = arr[0];
    long long currentSum = arr[0];
    
    for (int i = 1; i < n; i++) {
        // Choose either the current element or extend the subarray
        currentSum = max(static_cast<long long>(arr[i]), currentSum + arr[i]);
        
        // Update the maximum sum if the current sum is greater
        maxSum = max(maxSum, currentSum);
    }
    
    return maxSum;
        
}