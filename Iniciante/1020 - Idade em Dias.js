var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let dias = Number(lines.shift())

let anos = Math.trunc(dias / 365)

let meses = Math.trunc((dias % 365) / 30)

dias = (dias % 365 % 30)

console.log(`${anos} ano(s)
${meses} mes(es)
${dias} dia(s)`)