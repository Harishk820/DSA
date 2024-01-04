function sum(num) {
  if (num == 1) return 1;
  let ans = num + sum(num - 1);
  return ans;
}

console.log(sum(5));
