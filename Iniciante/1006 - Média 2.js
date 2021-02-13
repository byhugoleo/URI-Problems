var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let a = Number(lines.shift())
let b = Number(lines.shift())
let c = Number(lines.shift())

console.log("MEDIA = " + ((a * 2 + b * 3 + c * 5) / 10).toFixed(1))