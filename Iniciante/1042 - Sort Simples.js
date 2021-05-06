var input = require('fs').readFileSync('/dev/stdin', 'utf8');
let lines = input.split(' ').map(i => Number(i))

const a = lines.slice()

lines.sort(function(a, b){return a - b})

console.log(`${lines[0]}
${lines[1]}
${lines[2]}

${a[0]}
${a[1]}
${a[2]}`)