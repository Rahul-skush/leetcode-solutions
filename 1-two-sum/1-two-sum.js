/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    
    var i =0, h = nums.length -1;
    const num = [];
    for(var k in nums)
        num.push([nums[k], k]);
    
    num.sort(function(a, b){return a[0]-b[0];});
    while(i<h)
        {
            var sum = num[i][0] + num[h][0];
            if(sum===target) return [num[i][1], num[h][1]];
            if(sum>target) h--;
            else i++;
        }
    return[i, h];
};