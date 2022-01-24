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
        if(mountainArr.length()<3) return -1;
        int peak = findPeak(mountainArr);
        //cout<<peak<<" ";
        int left = findleft(mountainArr, 0, peak, target);
        if(left!=-1) return left;
        int right = findright(mountainArr, peak+1, mountainArr.length()-1, target);
        if(right!=-1) return right;
        
        return -1;
    }
    
    int findleft(MountainArray &arr, int l, int h, int target)
    {
        while(l<h)
        {
            int m = l + (h-l)/2;
            int x = arr.get(m);
            if(x==target) return m;
            if(x>target) h =m;
            else  l = m+1;
        }
        if(arr.get(l)==target) return l;
        return -1;
    }
    
    int findright(MountainArray &arr, int l, int h, int target)
    {
        while(l<h)
        {
            int m = l + (h-l)/2;
            int x = arr.get(m);
            if(x==target) return m;
            if(x<target) h =m;
            else  l = m+1;
        }
        if(arr.get(l)==target) return l;
        return -1;
    }
    
    int findPeak(MountainArray &arr)
    {
        int l = 0, n = arr.length()-1;
        int h = n;
        while(l<h)
        {
            int m = l + (h-l)/2;
            int x = arr.get(m);
            int y =INT_MAX;
            if(m-1>=0) y = arr.get(m-1);
            if(m-1>=0 && m+1<=n && x>y && x>arr.get(m+1)) return m;
            if(m-1>=0 && x>y) l =m+1;
            else h = m;
        }
        
        return l;
    }
};