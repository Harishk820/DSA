function pairSum(arr) {
  for (let i = 0; i < arr.length; i++) {
    for (let j = i; j < arr.length; j++) {
      console.log(arr[i] + arr[j]);
    }
  }
}

const arr = [10, 20, 30];

pairSum(arr);