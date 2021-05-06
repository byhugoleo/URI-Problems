var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const r = Number(lines.shift()).toFixed(2)
console.log(`${(2 * 3.14 * r).toFixed(2)}`)