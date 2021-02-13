var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let segundos = Number(lines.shift())

let horas = Math.trunc(segundos / 3600)

let minutos = Math.trunc((segundos % 3600) / 60)

segundos = segundos % 3600 % 60

console.log(`${horas}:${minutos}:${segundos}`)