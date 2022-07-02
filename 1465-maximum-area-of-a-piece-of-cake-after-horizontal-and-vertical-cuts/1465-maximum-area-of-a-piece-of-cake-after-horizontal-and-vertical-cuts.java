class Solution {
    public int maxArea(int h, int w, int[] horizontalCuts, int[] verticalCuts) {
        Arrays.sort(horizontalCuts);
        Arrays.sort(verticalCuts);
        long hr =horizontalCuts[0], vr =verticalCuts[0];
        
        for(int i=1;i<horizontalCuts.length;i++)
            hr = Math.max(hr, horizontalCuts[i] - horizontalCuts[i-1]);
        for(int i=1;i<verticalCuts.length;i++)
            vr = Math.max(vr, verticalCuts[i] - verticalCuts[i-1]);
        
        hr = Math.max(hr, h - horizontalCuts[horizontalCuts.length-1]);
        vr = Math.max(vr, w - verticalCuts[verticalCuts.length-1]);
        int mod = 1000000007;
        return (int)((hr*vr)%mod);
    }
}