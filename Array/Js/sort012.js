let arr = [1, 2, 2, 2, 0, 1, 0, 0, 1];




function sort012(arr) {
  arr.sort((a, b) => {
    return a - b;
  })
  console.log(arr);

}
sort012(arr);