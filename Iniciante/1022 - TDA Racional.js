var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function gcd(a, b) {
    if (a == 0)
        return b;
    return gcd(b % a, a)
}

const t = Number(lines.shift())

for (let i = 0; i < t; i++) {
    const s = lines[0].split(' ')[3]
    const [n1, , d1, , n2, , d2] = lines.shift().split(' ').map(i => Number(i))
    let an, ad;
    if (s == '+')
        an = (n1 * d2 + n2 * d1), ad = (d1 * d2)
    else if (s == '-')
        an = (n1 * d2 - n2 * d1), ad = (d1 * d2) 
    else if (s == '*')
        an = (n1 * n2), ad = (d1 * d2)
    else if (s == '/')
        an = (n1 * d2), ad = (n2 * d1)
    let maxd = Math.abs(gcd(an, ad))
    console.log(`${an}/${ad} = ${an / maxd}/${ad / maxd}`)
}