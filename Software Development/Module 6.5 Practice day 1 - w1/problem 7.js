var numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];
var newNumber = []
for(let i = 0; i < numbers.length;i++)
    {
        if(!newNumber.includes(numbers[i])){
            newNumber.push(numbers[i])
        }
    }

console.log(newNumber);