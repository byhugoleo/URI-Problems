var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

console.log("PROD = " + (Number(lines.shift()) * Number(lines.shift())))