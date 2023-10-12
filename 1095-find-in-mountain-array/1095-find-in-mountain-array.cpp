/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        
        int peak = findPeak(target, mountainArr);
        if(peak==-1) return -1;
        int left =findLeft(target, mountainArr, 0, peak);
        if(left!=-1) return left;
        int right =findRight(target, mountainArr, peak, mountainArr.length()-1);
        if(right!=-1) return right;
        
        return -1;
    }
    
    int findLeft(int target,  MountainArray &mountainArr, int l, int r)
    {
        while(l<r)
        {
            int m = (l+r)/2;
            int x = mountainArr.get(m);
            if(x==target) return m;
            if(x>target) r = m;
            else l = m+1;
        }
        if(mountainArr.get(l)==target) return l;
        return -1;
    }
    
    int findRight(int target,  MountainArray &mountainArr, int l, int r)
    {
        while(l<r)
        {
            int m = (l+r)/2;
            int x = mountainArr.get(m);
            if(x==target) return m;
            if(x<target) r = m;
            else l = m+1;
        }
        if(mountainArr.get(l)==target) return l;
        return -1;
    }
    
    int findPeak(int target, MountainArray &mountainArr)
    {
        int l = 0, h = mountainArr.length()-1;
        
        while(l<h)
        {
            int m = (l+h)/2;
            int x = mountainArr.get(m);
            int y = INT_MIN, z = INT_MAX;
            if(m-1>=0) y = mountainArr.get(m-1);
            if(m+1<=h) z = mountainArr.get(m+1);
            if(x>y && x>z) return m;
            if(x>y) l = m+1;
            else h = m;
        }
        
        return -1;
    }
};