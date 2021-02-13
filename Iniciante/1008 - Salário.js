var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const [id, hrs, val] = lines

console.log(`NUMBER = ${id}
SALARY = U$ ${(hrs * val).toFixed(2)}`)