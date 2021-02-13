var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const raio = Number(lines.shift())

console.log(`VOLUME = ${((4.0 / 3.0) * 3.14159 * (raio ** 3)).toFixed(3)}`)