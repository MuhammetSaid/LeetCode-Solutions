/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    var number = [];
    for (let i = 0; i < arr.length; i++ ) {
        if (fn(arr[i], i)) {
            number.push(arr[i]);
        }
    }
    return number;
};