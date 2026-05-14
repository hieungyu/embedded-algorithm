/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int max_candies = candies[0];
    
    for (int i = 0; i < candiesSize; i++){
        if(candies[i] > max_candies) max_candies = candies[i];
    }

    *returnSize = candiesSize;
    
    // allocate to the result array
    bool *result = malloc(sizeof(bool)*candiesSize);
    
    /*create arr_result = candiesSize*/
    for (int i = 0; i < candiesSize; i++){
        result[i] = (candies[i] + extraCandies >= max_candies);
    }
    
    return result;
}
