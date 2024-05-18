/**
 * Three Sum Brute Force Solution
 * Given an array of integers, find all unique triplets in the array which gives the sum of zero.
 * This implementation does not sort the array and checks every possible triplet.
 *
 * Time: n^3
 */
// function threeSumBruteForce(nums) {
//   let results: number[][] = [];
//   for (let i = 0; i < nums.length - 2; i++) {
//     for (let j = i + 1; j < nums.length - 1; j++) {
//       for (let k = j + 1; k < nums.length; k++) {
//         if (nums[i] + nums[j] + nums[k] === 0) {
//           const triple = [nums[i], nums[j], nums[k]].sort((a, b) => a - b);
//           if (
//             !results.some(
//               (result) => JSON.stringify(result) === JSON.stringify(triple)
//             )
//           ) {
//             results.push(triple);
//           }
//         }
//       }
//     }
//   }
//   return results;
// }

const input = [-1, 0, 1, 2, -1, -4];
// console.log("result", threeSumBruteForce(input));

function threeSum(nums: number[]): number[][] {
  const results: number[][] = [];
  nums.sort((a, b) => a - b); // [-4, -1, -1, 0, 1, 2];
  for (let i = 0; i < nums.length - 2; i++) {
    if (i > 0 && nums[i] === nums[i - 1]) continue;
    let left = i + 1;
    let right = nums.length - 1;
    while (left < right) {
      const sum = nums[i] + nums[left] + nums[right];
      if (sum === 0) {
        results.push([nums[i], nums[left], nums[right]]);
        // skip the same elements
        while (left < right && nums[left] === nums[left + 1]) left++;
        while (left < right && nums[right] === nums[right - 1]) right--;
        left++;
        right--;
      } else if (sum < 0) {
        // we need large left
        left++;
      } else {
        // sum > 0
        // we need small right
        right--;
      }
    }
  }
  return results;
}

console.log(threeSum(input)); // Outputs: [[-1, -1, 2], [-1, 0, 1]]
