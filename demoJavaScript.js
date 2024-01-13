// function sum(num) {
//   if (num == 1) return 1;
//   let ans = num + sum(num - 1);
//   return ans;
// }

// console.log(sum(5));



function maxProfitFinder(prices, index) {

  let minPrice = Math.max(...prices);
  let maxProfit = Math.min(...prices);

  // base case
  if (index == prices.length)
    return;

  // one case
  if (prices[index] < minPrice) {
    minPrice = prices[index];
    let todaysProfit = prices[index] - minPrice;
    if (todaysProfit > maxProfit) {
      maxProfit = todaysProfit;
    }
  }


  //console.log(maxProfit);
  // RE
  maxProfitFinder(prices, index + 1);
  return maxProfit;
}


const prices = [7, 1, 5, 3, 6, 4];
console.log(maxProfitFinder(prices, 0));  