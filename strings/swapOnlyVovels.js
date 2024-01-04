
function isvowel(ch) {
  const chr = ch.toLowercase;
  return (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u');

}

function swap(ch1, ch2) {
  // [ch1, ch2] = [ch2, ch1];

  let temp = ch1;
  ch1 = ch2;
  ch2 = temp;

}


function swapOnlyVowels(str) {
  let l = 0, h = str.length - 1;

  while (l < h) {

    swap(str[l], str[h]);
    l++;
    h--;

    // if (isvowel(str[l]) && isvowel(str[h])) {
    //   swap(str[l], str[h]);
    // }
    // else if (isvowel(str[l]) == 0) {
    //   l++;
    // }
    // else {
    //   h--;
    // }
  }
  console.log(str);
}


const s = "hello";

swapOnlyVowels(s);