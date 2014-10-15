class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        int start = 0;
        int end = n-1;
        int mid;
        
        while(start + 1 < end)
        {
            mid = start + (end - start) / 2;
            if ( A[mid] == target )
            {
                return mid;
            }
            else if( A[mid] < target )
            {
                start = mid;
            }
            else
            {
                end = mid;
            }
        }
        
        if ( A[start] == target )
        {
            return start;
        }
        
        if ( A[end] == target )
        {
            return end;
        }
       
        
        if ( A[start] > target )
        {
            return start;
        }
        else if( A[end] < target)
        {
            return end + 1;
        }
        else
        {
            return end;
        }
        
    }
};