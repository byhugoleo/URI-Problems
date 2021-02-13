var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let [a, b, c, d] = lines[0].split(' ').map(i => Number(i))

if (b > c && d > a && c + d > a + b && c > 0 && d > 0 && !(a % 2))
    console.log(`Valores aceitos`)
else
    console.log(`Valores nao aceitos`)