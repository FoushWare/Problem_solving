/****************************************************************
 *          CODERBYTE BRACKET MATCHER CHALLENGE		        *
 *                                                              *
 * Problem Statement                                            *
 * Have the function BracketMatcher(str) take the str parameter	*
 * being passed and return 1 if the brackets are correctly	*
 * matched and each one is accounted for. Otherwise return 0.	*
 * For example: if str is "(hello (world))", then the output	*
 * should be 1, but if str is "((hello (world))" the the output	*
 * should be 0 because the brackets do not correctly match up.	*
 * Only "(" and ")" will be used as brackets. If str contains	*
 * no brackets return 1.    					*
 *                                                              *
 * Examples                                                     *
 * Input 1: "(coder)(byte))"                                    *
 * Output 1: 0                                                  *
 *                                                              *
 * Input 2: "(c(oder)) b(yte)"                                  *
 * Output 2: 1                                                  *
 *                                                              *
 ***************************************************************/

function SearchingChallenge(str) {
  // Define a regular expression to match only "(" and ")"
  var regex = /[()]/g;

  // Extract all brackets from the input string
  var brackets = str.match(regex);
  console.log("brackets are :", brackets);

  // If there are no brackets, return 1
  if (!brackets) return 1;

  // Create a stack to keep track of open brackets
  var stack = [];

  // Iterate through each bracket
  for (var i = 0; i < brackets.length; i++) {
    var bracket = brackets[i];

    // If it's an open bracket, push it onto the stack
    if (bracket === "(") {
      stack.push(bracket);
    }
    // If it's a closing bracket
    else {
      // If the stack is empty or the last element in the stack is not an open bracket, return 0
      if (stack.length === 0 || stack.pop() !== "(") {
        return 0;
      }
    }
  }

  // If the stack is empty, return 1, otherwise, return 0
  return stack.length === 0 ? 1 : 0;
}

// Testing the function with examples
console.log(SearchingChallenge("(coder)(byte))")); // Output: 0
console.log(SearchingChallenge("(c(oder)) b(yte)")); // Output: 1
