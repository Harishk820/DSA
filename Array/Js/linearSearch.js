
function linearSearch(arr, size, target) {
  for (let i = 0; i < size; i++) {
    if (arr[i] == target) {
      return true;
    }

  }
  return false;
}

let Arr = [2, 3, 4, 5, 6, 7];
// console.log(Arr.length);
let length = Arr.length;
console.log(linearSearch(Arr, length, 44));