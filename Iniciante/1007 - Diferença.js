var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const [a, b, c, d] = lines

console.log(`DIFERENCA = ${a * b - c * d}`)