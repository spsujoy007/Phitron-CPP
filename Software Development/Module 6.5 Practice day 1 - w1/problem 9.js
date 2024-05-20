function calculate(incomes, livingcost){
    let savings = 0
    for(let i = 0; i < incomes.length; i++){
        if(incomes[i] >= 3000){
            savings += incomes[i] - incomes[i] * (20/100)
        }
        else{
            savings += incomes[i]
        }
    }
    return savings - livingcost
}
let result = calculate([1000, 2000, 2500], 5000)


if(result >= 0){
    console.log("Total saving: ", result);
}else if (result < 0){
    console.log("Earn more");
}
else{
    console.log("Invalid input!!!");
}