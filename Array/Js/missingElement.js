
let arr = [1, 2, 3, 5, 6, 7, 8, 9];



function missingElement(arr) {
  let sum = 0;
  // let sum2 = 0;
  const n = arr.length + 1;
  for (let i = 0; i < arr.length; i++) {
    sum += arr[i];
  }
  console.log("sum: " + sum);

  let totalSum = (n * (n + 1)) / 2;
  console.log("totalSum: " + totalSum);
  console.log("missing Element:" + (totalSum - sum));
}

missingElement(arr)