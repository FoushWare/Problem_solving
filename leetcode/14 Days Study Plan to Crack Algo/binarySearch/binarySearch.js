/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function (nums, target) {
	// nums is sorted 
	nums.sort((a, b) => a - b);

	// Quick solution from Javascript target is in nums
	// return nums.indexOf(target);

	//     we will use binary search 
	// make two pointers, left and right
	let left = 0, right = nums.length - 1
	while (left <= right) {
		mid = Math.floor((left + right) / 2)
		if (nums[mid] === target) return mid;
		if (nums[mid] > target) right = mid - 1;
		else
			left = mid + 1

	}
	return -1

};
console.log(search([1, 2, 3, 4, 5, 6, 7, 8, 9, 10], 10))