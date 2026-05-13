/*
You are given an integer array nums consisting of n elements, and an integer k.

Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. 
Any answer with a calculation error less than 10-5 will be accepted.

*/

double findMaxAverage(int* nums, int numsSize, int k) {
    // Sliding window
    /*
    => duyệt mảng (nhỏ hơn k để lấy tổng các số liền kề  = k) > 
    > chia k => average
    */
    int max_sum = 0, current_sum = 0;
    for (int i = 0; i < k; i++){
        current_sum += nums[i];
    }
    max_sum = current_sum;

    for(int i = k; i < numsSize; i++){
        current_sum = current_sum - nums[i-k] + nums[i];
        if (current_sum > max_sum) max_sum = current_sum;
    }
    return (double)max_sum/k; 
}
