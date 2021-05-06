var input = require('fs').readFileSync('/dev/stdin', 'utf8');
let lines = input.split('\n').map(i => Number(i))

let cnt = 0
lines.map(i => i > 0 ? cnt++ : 0)
console.log(cnt + ' valores positivos')
