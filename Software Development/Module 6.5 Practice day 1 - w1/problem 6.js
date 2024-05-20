var friends = ["rahim", "karim", "abdul", "sadsd", "heroAlom"];

var max = 0;
var maxername = "";

for (let i = 0; i < friends.length; i++) {
    if (friends[i].length > max) {
        max = friends[i].length;
        maxername = friends[i];
    }
}

console.log(maxername);
