console.log(Math.max());
console.log(Math.min());

function findMinimumElement(arr, size) {
  let minElem = Math.min();
  for (let i = 0; i < size; i++) {
    if (arr[i] < minElem) {
      minElem = arr[i];
    }
  }
  console.log("smallest element: " + minElem);


}


let arr = [22, 33, 67, 89, 41]
findMinimumElement(arr, arr.length);