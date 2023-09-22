function sortZeroOne(arr) {
  arr.sort((a, b) => {
    return (a - b);
  })
  console.log(arr);
}



const arr = [1, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0];
sortZeroOne(arr);