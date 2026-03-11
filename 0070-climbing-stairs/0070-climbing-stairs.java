class Solution {
    public int climbStairs(int n) {
        if(n == 0) return 0;
        if (n == 1)  return 1;
        if (n == 2)  return 2;
       // return climbStairs(n-1) +  climbStairs(n-2) ;
       int a = 1,b=2;
       int ways ;
       for(int i = 3 ; i<=n ;i++){
        ways = a+b;
        a = b;
        b = ways;
       }
       return b;
    }
}