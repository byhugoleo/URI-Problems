var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let dist = Number(lines.shift())

console.log(`${dist * 60 / 30} minutos`)