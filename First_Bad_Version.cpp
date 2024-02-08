// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=0, end = n;
        int mid = start + (end-start)/2;
        int ans=0;
        while(start <= end)
        {
            if(isBadVersion(mid)){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
            mid = start+(end-start)/2;
        }
        return ans;
    }
};
