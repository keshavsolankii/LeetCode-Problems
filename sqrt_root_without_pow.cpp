class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1)
            return x;
        
        int s=0, e=x;
        int mid = s+(e-s)/2;

        while(s <= e)
        {
            if((long)mid*(long)mid > x)
                e=mid-1;
            else if(mid*mid == x)
                return mid;
            else
                s = mid+1;

            mid = s+(e-s)/2;
        }
        return mid-1;
    }
};
