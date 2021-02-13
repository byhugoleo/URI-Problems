var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var [, qnt, val] = lines.shift().split(' ').map(i => Number(i))

let sum = qnt * val

var [, qnt, val] = lines.shift().split(' ').map(i => Number(i))

sum += qnt * val

console.log(`VALOR A PAGAR: R$ ${sum.toFixed(2)}`)