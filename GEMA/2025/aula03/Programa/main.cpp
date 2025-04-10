#include <bits/stdc++.h>
using namespace std;

// A função recebe uma matriz genérica com vector (correspondente ao exercício 5):
/*
int varreduraPesosMatriz(int limite, const vector<vector<int>>& matriz, int linha, int coluna) {
    int somaLinha = 0, somaColuna = 0;

    for (int j = 0; j < limite; j++)
        somaLinha += matriz[linha][j];

    for (int i = 0; i < limite; i++)
        somaColuna += matriz[i][coluna];

    return somaColuna + somaLinha;
}
*/

int main() {
    /* Exercício 1:
    int V;
    cin>>V;

    while (V >= 50)
        cin>>V;

    int *N = new int[V];
    for (int i = 0; i < V*10; i++) {
        N[i] = pow(2, i);
        cout<<"N[" + i<<"] = "<<N[i]<<endl;
    }

    delete N;
    */

    /* Exercício 2:
    int N;
    cin>>N;

    while (N < 1 || N > 1000)
        cin>>N;

    int *X = new int[N];
    for (int i = 0; i < N; i++)
        cin>>X[i];

    int smaller = X[0], position = 0;
    for (int i = 1; i < N; i++) {
        if (smaller > X[i]) {
            smaller = X[i];
            position = i;
        }
    }

    cout<<"Menor valor: "<<smaller<<endl;
    cout<<"Posicao: "<<position<<endl;
    */

    /* Exercício 3:
    int N = 3, maior;

    int **X = new int*[N];
    for (int i = 0; i < N; i++)
        X[i] = new int[N];

    cin>>X[0][0];
    maior = X[0][0];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 && j == 0)
                j++;

            cin>>X[i][j];

            if (maior < X[i][j])
                maior = X[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (maior == X[i][j])
                X[i][j] = -1;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout<<X[i][j]<<" ";
        cout<<endl;
    }
    */

    /* Exercício 4:
    int quadradoMagico[3][3];
    int linha1 = 0,
    linha2 = 0, linha3 = 0, coluna1 = 0, coluna2 = 0, coluna3 = 0,
    diagonal1 = 0, diagonal2 = 0;
    int x;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cin>>quadradoMagico[i][j];
    }

    for (int j = 0; j < 3; j++) {
        linha1 += quadradoMagico[0][j];
        linha2 += quadradoMagico[1][j];
        linha3 += quadradoMagico[2][j];
    }

    for (int i = 0; i < 3; i++) {
        coluna1 += quadradoMagico[i][0];
        coluna2 += quadradoMagico[i][1];
        coluna3 += quadradoMagico[i][2];
        diagonal1 += quadradoMagico[i][i];
        diagonal2 += quadradoMagico[i][2 - i];
    }

    if (linha1 == linha2 && linha2 == linha3 &&
        linha3 == coluna1 && coluna1 == coluna2 &&
        coluna2 == coluna3 && coluna3 == diagonal1 &&
        diagonal1 == diagonal2)
        cout<<"SIM";

    else
        cout<<"NAO";
    */

    /*Exercício 5 (versão menos otimizada):
    int n;
    cin >> n;

    // Matrizes com vector
    vector<vector<int>> matrizXadrez(n, vector<int>(n));
    vector<int> pesosMatriz(n * n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrizXadrez[i][j];

    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            pesosMatriz[k] = varreduraPesosMatriz(n, matrizXadrez, i, j) - 2 * matrizXadrez[i][j];
            k++;
        }
    }

    int maior = pesosMatriz[0];
    for (int i = 1; i < n * n; i++) {
        if (maior < pesosMatriz[i])
            maior = pesosMatriz[i];
    }

    cout << maior;
    */

    /* Exercício 5 (versão mais otimizada):
    int n;
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n));
    vector<int> somaLinhas(n, 0), somaColunas(n, 0);
    vector<int> pesos(n * n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
            somaLinhas[i] += matriz[i][j];
            somaColunas[j] += matriz[i][j];
        }
    }

    int k = 0, maior = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int peso = somaLinhas[i] + somaColunas[j] - 2 * matriz[i][j];
            pesos[k++] = peso;
            maior = max(maior, peso);
        }
    }

    cout << maior;
    */

    /*Exercício 6:

    */

    /* Exercício 7:
    int N, total100 = 0;
    cin>>N;

    int *X = new int[N];

    for (int i = 0; i < N; i++)
        cin>>X[i];

    for (int i = 0; i < N; i++) {
        if (X[i] == 1 && (i + 1 < N && i + 2 < N)) {
            if (X[i + 1] == 0 && X[i + 2] == 0){
                i += 2;
                total100++;
            }

        }
    }

    cout<<total100;
    */

    /* Exercício 8:
    int N;
    cin >> N;

    int *X = new int[N];

    for (int i = 0; i < N; i++)
        cin >> X[i];

    int *countersMinas = new int[N](); // inicializa os valores com zero.

    for (int j = 0; j < N; j++) {
        if (X[j] == 1)
            countersMinas[j]++;

        if (j + 1 < N && X[j + 1] == 1)
            countersMinas[j]++;

        if (j - 1 >= 0 && X[j - 1] == 1)
            countersMinas[j]++;

        cout << countersMinas[j] << " "<<endl;
    }

    delete[] X;
    delete[] countersMinas;
    */

    return 0;
}
