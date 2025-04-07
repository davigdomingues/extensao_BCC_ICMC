#include <bits/stdc++.h>
using namespace std;

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
