/*
i what made me submit many wrong answers

* I used one TestCase and run the code based on it  [121]
* I used ES6 feature in javascript and create new array without mutation
* I should know when use  [===] equal operator for arrays it comparies references .. so what i made is if one of the two arrays elements not equal return (false) ... other after finishing the for loop return (true)

=============
What i am get from this Problem 
*  when use javascript for problem solving don't use ES6 features
*  read all test cases and test your code based on it

*/

// ------------------- Brute force algorithm---------

/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (x) {
  //     constraint for negative numbers
  if (x < 0) return false;
  //divide number one by one and store it in array
  const tempX = (x + "").split("")
  //Reverse the array  compare between the two arrays [if the are the same it's output is true] 
  const reversed = tempX.slice().reverse()
  // return reversed === tempX
  for (let i = 0; i < tempX.length; i++) {
    if (tempX[i] !== reversed[i]) { return false; }
  }
  return true;

};


