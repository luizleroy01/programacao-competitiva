#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/**
 * Resolve cada query individualmente.
 * k pode ser até 10^18, por isso usamos long long.
 */
void solve() {
    long long k;
    cin >> k;

    long long length = 1; // Quantidade de dígitos (1, 2, 3...)
    long long count = 9;  // Quantidade de números com aquela 'length'
    long long start = 1;  // Primeiro número daquela faixa (1, 10, 100...)

    // Passo 1: Descobrir em qual "bloco" de números o dígito está
    // Usamos um check antes de multiplicar para evitar overflow de 'count * length'
    while (k > length * count) {
        k -= length * count;
        length++;
        count *= 10;
        start *= 10;
    }

    // Passo 2: Descobrir qual é o número exato que contém o dígito
    // (k-1) ajusta para lógica de índice 0
    long long target_num = start + (k - 1) / length;

    // Passo 3: Extrair o dígito do número encontrado
    string s = to_string(target_num);
    cout << s[(k - 1) % length] << "\n";
}

int main() {
    // Otimização de I/O para C++
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}