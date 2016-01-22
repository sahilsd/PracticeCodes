int findMin(vector<int>& nums )
{
    if(nums.size() < 1) return 0;
    if(nums[0] < nums[nums.size() - 1]) return nums[0];

    int l=0, r=nums.size()-1;
     int m = l + (r-l)/2;

    while(l<r) {
        if(nums[m] > nums[r]) {
            l = m+1;
        }
        else 
            r = m-1;

        m = l + (r-l)/2;
    }
    return nums[m];
 }

