var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let [time, dist] = lines

console.log(`${(time * dist / 12).toFixed(3)}`)