var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let a = Number(lines.shift())
let b = Number(lines.shift())

console.log("MEDIA = " + ((a * 3.5 + b * 7.5) / 11).toFixed(5))