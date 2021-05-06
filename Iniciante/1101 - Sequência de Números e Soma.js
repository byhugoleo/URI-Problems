let input = require('fs').readFileSync('code.in', 'utf8');
let lines = input.replace(/(\r|\r)/gm, "").split('\n');

let [m, n] = lines.shift().split(' ').map(i => Number(i));

while (m > 0 && n > 0) {
    let soma = 0, ans = '';
    if (n < m)
        [m, n] = [n, m];
    for (let i = m; i <= n; i++)
        ans += (i + ' '), soma += i;
    console.log(ans + `Sum=${soma}`);
    [m, n] = lines.shift().split(' ').map(i => Number(i));
}