var numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];
let bigNum = 0

for(let i = 0;i < numbers.length;i++){
    if(numbers[i] > bigNum){
        bigNum=numbers[i]
    }
}
console.log(bigNum);