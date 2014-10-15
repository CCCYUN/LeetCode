class Solution {
public:
    int sqrt(int x) {
      if(x==1) return 1;
      long long i = 0;
      long long j = x / 2 ;
      while (i <= j)
      {
          long long mid = (i + j) / 2;
          long long sq = mid * mid;
          if (sq == x) return mid;
          else if (sq < x) i = mid + 1;
         else j = mid - 1;
     }
     return j;
        
        
    }
};