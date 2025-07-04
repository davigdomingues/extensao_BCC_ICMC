#include <bits/stdc++.h>
using namespace std;

// Função do exercício 1:
/* int f91(int N) {
    if (N > 100)
        return N - 10;

    return f91(f91(N + 11));
}
*/

// Função do exercício 3:
/* bool eh_primo(int x){
    if (x == 1)
        return false;

    if (x == 2)
        return true;

	for (int i = 2; i < x; i++) {
	    if (x % i == 0)
	        return false;
	}

	return true;
}
*/

// Função do exercício 4 (versão recursiva):
/* int contabilizacaoNK(int N, int k) {
    if (N <= k)
        return 1;

    int parte_impar = N/2, parte_par = N - parte_impar;

    return contabilizacaoNK(parte_par, k) + contabilizacaoNK(parte_impar, k);
}
*/

// Função do exercício 4 (versão iterativa):
/* int contabilizacaoNK_iterativo(int N, int K) {
    vector<int> dp(N + 1, 0);

    // Base: para qualquer valor i <= K, só uma parte é necessária
    for (int i = 0; i <= K; i++) {
        dp[i] = 1;
    }

    // Preenche dp de baixo para cima
    for (int i = K + 1; i <= N; i++) {
        int metade1 = i / 2;
        int metade2 = i - metade1;
        dp[i] = dp[metade1] + dp[metade2];
    }

    return dp[N];
}
*/

// Função do exercício 4 (versão unordered map):
/*
unordered_map<int, int> memo;

int contabilizacaoNK(int N, int K) {
    if (N <= K)
        return 1;

    // verifica se já foi calculado para N
    if (memo.count(N))
        return memo[N];

    int metade1 = N / 2;
    int metade2 = N - metade1;

    // guarda o resultado no cache (memoization)
    return memo[N] = contabilizacaoNK(metade1, K) + contabilizacaoNK(metade2, K);
}
*/

int main() {
    /*Exercício 1:
    int entrada;
    vector <int> entradasF91;

    do {
        cin>>entrada;

        if (entrada != 0)
            entradasF91.push_back(entrada);

    } while (entrada != 0);

    for (int x : entradasF91)
        cout<< "f91("<<x<<") = "<<f91(x)<<endl;
    */

    /*Exercício 2:
    int fatorial = 1, N;
    cin>>N;

    if (N == 0) {
        cout<<1<< endl;
        return 0;
    }

    for (int i = 1; i <= N; i++)
        fatorial *= i;

    cout<<fatorial<<endl;
    */

    /*Exercício 3:
    int x;
	cin>>x;

	if (eh_primo(x))
		cout << "S" << "\n";

	else
		cout << "N" << "\n";
    */

    /*Exercício 4 (versão recursiva):
    int N, k;
    vector <int> contadoresNK;

    while (true){
        cin>>N>>k;

        if (N == 0 || k == 0)
            break;

        contadoresNK.push_back(contabilizacaoNK(N, k));
    }

    for (int i : contadoresNK)
        cout<<i<<endl;
    */

    /*Exercício 4 (versão iterativa):
    int N, K;
    vector<int> resultados;

    while (true) {
        cin >> N >> K;
        if (N == 0 || K == 0)
            break;

        resultados.push_back(contabilizacaoNK_iterativo(N, K));
    }

    for (int r : resultados)
        cout << r << endl;
    */

    /*Exercício 4 (versão unordered map):
    int N, K;
    vector<int> resultados;

    while (true) {
        cin >> N >> K;
        if (N == 0 || K == 0)
            break;

        // Limpa o cache antes de cada nova chamada, pois K pode mudar
        memo.clear();
        resultados.push_back(contabilizacaoNK(N, K));
    }

    for (int r : resultados)
        cout << r << endl;
    */

    /*Exercício 5:
    int N, testCase = 1;

    while (true) {
        cin >> N;

        if (N == 0)
            break;

        cout << "Teste " << testCase << endl;
        cout << pow(2, N) - 1 << endl;
        cout << endl;

        testCase++;
    }
    */

    /*Exercício 6:
    int f2, f1 = 1, f0 = 0, N;
    cin>>N;

    if (N == 0)
        cout<<f1;

    else {
        for (int i = 0; i < N; i++) {
            f2 = f1 + f0;
            f0 = f1;
            f1 = f2;
        }

        cout<<f2<<endl;
    }
    */

    return 0;
}
