/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    static int  rslt[2];
    for(int i = 0;i < numsSize; i++){
    for(int j = i + 1; j < numsSize; j++){
    if(nums[i] + nums[j] == target){
     rslt[0] = i;

     rslt[1] = j;
     *returnSize = 2;
     return rslt;

      }        
     }
    }
     returnSize  = 0;
     return 0;
}