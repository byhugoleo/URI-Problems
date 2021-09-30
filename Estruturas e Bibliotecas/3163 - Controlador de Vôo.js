let input = require('fs').readFileSync('code.in', 'utf8');
let lines = input.replace(/(\r|\r)/gm, "").split('\n');

let vet = {
    0: [],
    2: [],
    1: [],
    3: []
};
let idx;

for (let i in lines) {
    if (lines[i] === "0")
        break;
    if (lines[i][0] === "-")
        idx = Number(lines[i][1]) - 1;
    else
        vet[idx].push(lines[i]);
}

let pos = [0, 2, 1, 3], planes = [0, 0, 0, 0], cnt = 0;
let ans = "";
idx = 0;

while (1) {
     if (pos[idx] === -1) {
        idx = (idx + 1) % 4;
        continue;
    }
     if (planes[pos[idx]] < vet[pos[idx]].length) {
        ans += vet[pos[idx]][planes[pos[idx]]];
        planes[pos[idx]]++;
        if (planes[pos[idx]] === vet[pos[idx]].length && cnt === 3) {
            ans += "";
            break;
        }
        else ans += " ";
    }
    if (planes[pos[idx]] === vet[pos[idx]].length) {
        pos[idx] = -1;
        cnt++;
    }
    idx = (idx + 1) % 4;
}

console.log(ans);