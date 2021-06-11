// function isPrime(num) {
//   if (num === 2) {
//     return true;
//   } else if (num > 1) {
//     for (var i = 2; i < num; i++) {
//       if (num % i !== 0) {
//         return true;
//       } else if (num === i * i) {
//         return false;
//       } else {
//         return false;
//       }
//     }
//   } else {
//     return false;
//   }
// }

const getCommonXpath = (xpath1, xpath2) => {
  let xpath1Box = xpath1.split("/");
  let xpath2Box = xpath2.split("/");
  let new_Box = [];
  for (index in xpath1Box) {
    if (xpath2Box[index] === xpath1Box[index]) {
      new_Box = [...new_Box, xpath1Box[index]];
    }
    // console.log(xpath1Box[index]);
  }
  console.log(xpath1);
  console.log(xpath2);
  return new_Box.join("/");

  //   console.log(xpath1.split("/"));
};

console.log(
  getCommonXpath(
    "/html/body/center/table/tbody/tr[3]/td/table/tbody/tr[1]/td[3]/a",
    "/html/body/center/table/tbody/tr[3]/td/table/tbody/tr[4]/td[3]/a"
  )
);

// "/html/body/center/table/tbody/tr[3]/td/table/tbody/tr/td[3]/a"
