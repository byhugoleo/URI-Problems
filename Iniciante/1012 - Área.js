var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const [a, b, c] = lines.shift().split(' ').map(i => Number(i))

console.log(`TRIANGULO: ${(a * c / 2).toFixed(3)}
CIRCULO: ${(3.14159 * c ** 2).toFixed(3)}
TRAPEZIO: ${((a + b) * c / 2).toFixed(3)}
QUADRADO: ${(b ** 2).toFixed(3)}
RETANGULO: ${(a * b).toFixed(3)}`)