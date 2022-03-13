/**
 * @param {number} n
 * @return {number[]}
 */
var countBits = function (n) {

	const ans = [];


	function dec2bin(i) {
		// return binary rep of the [i] number
		return (i >>> 0).toString(2);

	}

	function numbOfOnes(binaryNum) {
		return binaryNum.split('').filter(x => x === '1').length;
	}


	// create a loop   (0<=i<=n)
	for (var i = 0; i < n + 1; i++) {
		// for each  i -> get the represntation in binary 
		const currentNum = dec2bin(i);
		// for each representation count number of ones	
		const currentNumOnes = numbOfOnes(currentNum);
		ans[i] = currentNumOnes;
	}

	// make array of number of ones and return it 
	return ans;
};

const ans = countBits(2);

console.log({ ans });


