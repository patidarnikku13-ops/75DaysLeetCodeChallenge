/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    static int  reslt[2];
    for(int i = 0;i < numsSize; i++){
    for(int j = i + 1; j < numsSize; j++){
    if(nums[i] + nums[j] == target){
     reslt[0] = i;

     reslt[1] = j;
     *returnSize = 2;
     return reslt;

      }        
     }
    }
     returnSize  = 0;
     return 0;
}