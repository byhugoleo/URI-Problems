var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let i = 0

while (lines[i][0] != '*') {
    let cmp = lines[i][0].toUpperCase()
    let ans = 1;
    lines[i] = lines[i].split(' ').map(i => (i[0].toUpperCase() === cmp.toString()))
    for (let k = 0; k < lines[i].length; k++)
        ans &= lines[i][k]
    console.log(ans ? 'Y' : 'N')
    i++
}
