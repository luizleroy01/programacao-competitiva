#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> moves;

void solve(int n, int from, int to, int aux, int depth = 0) {
    string indent(depth * 2, ' ');

    cout << indent << "solve("
         << "n=" << n
         << ", from=" << from
         << ", to=" << to
         << ", aux=" << aux
         << ")\n";

    if (n == 1) {
        cout << indent << "Move disco: "
             << from << " -> " << to << "\n";

        moves.push_back({from, to});
        return;
    }

    cout << indent << "1ª chamada recursiva\n";
    solve(n - 1, from, aux, to, depth + 1);

    cout << indent << "Move disco maior: "
         << from << " -> " << to << "\n";

    moves.push_back({from, to});

    cout << indent << "2ª chamada recursiva\n";
    solve(n - 1, aux, to, from, depth + 1);

    cout << indent << "Retornando de solve("
         << n << ")\n";
}

int main() {
    int n;
    cin >> n;

    solve(n, 1, 3, 2);

    cout << "\nMovimentos finais:\n";
    cout << moves.size() << "\n";

    for (auto move : moves) {
        cout << move.first << " " << move.second << "\n";
    }

    return 0;
}