var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const [a, b, c] = lines[0].split(' ').map(i => Number(i))

let maior = (a + b + Math.abs(a - b)) / 2

console.log(`${(maior + c + Math.abs(maior - c)) / 2} eh o maior`)