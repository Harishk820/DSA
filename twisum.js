function twosum(nums, target) {
  let map = new Map();

  for (let i = 0; i < nums.length; i++) {
    let num1 = nums[i];
    let num2 = target - num1;

    if (map.has(num2)) {
      return [i, map.get(num2)]
    }
    map.set(i, num1);
  }

}



let nums = [2, 11, 7, 9, 15];

let ans = twosum(nums, 9);
console.log(ans);