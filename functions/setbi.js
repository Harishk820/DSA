function setBit(num) {
  let count = 0;
  while (num > 0) {
    let bit = (num & 1)
    if (bit == 1) {
      count++;
    }
    num = num >> 1;    //shifting bit right shift in order to count setbit 
  }
  return count;
}

console.log(setBit(7));