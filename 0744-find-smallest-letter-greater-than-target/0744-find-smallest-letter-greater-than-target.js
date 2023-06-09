/**
 * @param {character[]} letters
 * @param {character} target
 * @return {character}
 */
var nextGreatestLetter = function(letters, target) {
    var i = 0, j = letters.length;
    while(i<j)
        {
            var m = (i+j)/2;
            m = parseInt(m);
            if(letters[m]<=target)
                i = m+1;
            else j = m;
           // console.log(i + ' '+ j + '\n');
        }
    //console.log('\n');
    if(i==letters.length) return letters[0];
    return letters[i];
};