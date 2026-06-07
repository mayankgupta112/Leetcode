
    int singleNumber(int* nums, int numsSize) {
    for(int i = 0; i < numsSize; i++){
        int found = 0;
        for(int j = 0; j < numsSize; j++){
            if(i != j && nums[i] == nums[j]){
                found = 1;
                break;
            }
        }
        if(!found) return nums[i];
    }
    return -1;
}
