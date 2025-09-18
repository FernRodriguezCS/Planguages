let nums = [25,10,5,100];
console.log(`nums before sort method: ${nums}`);

nums.sort(function(a,b){
		return a-b;
		});

console.log(`nums after sort method: ${nums}`);