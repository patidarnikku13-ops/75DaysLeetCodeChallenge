int compare(const void *a, const void *b) {
return (*(int*)a - *(int*)b);}

bool containsDuplicate(int* nums, int numsSize)  {
    qsort(nums,numsSize,sizeof(int),compare);//sort the array

    for( int i =1 ;i < numsSize ; i++){//check adjacents elements
        if(nums[i] == nums[i-1]){
            return true; // duplicate fount
          }
    }
    return false;//no duplicates
}