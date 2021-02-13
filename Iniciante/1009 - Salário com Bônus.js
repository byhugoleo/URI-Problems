var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const [, sal, val] = lines.map(i => Number(i))

console.log(`TOTAL = R$ ${(sal + (val * 0.15)).toFixed(2)}`)