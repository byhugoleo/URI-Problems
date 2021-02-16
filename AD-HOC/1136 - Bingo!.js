var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

while (Number(lines[0][0]) + Number(lines[0][1])) {
    const [n, b] = lines.shift().split(' ').map(i => Number(i))
    const v = lines.shift().split(' ').map(i => Number(i))
    let ms = new Set()
    for (let i = 0; i < b; i++)
        for (let j = i; j < b; j++)
            ms.add(Math.abs(v[i] - v[j]))
    console.log(ms.size - 1 === n ? 'Y' : 'N')
}