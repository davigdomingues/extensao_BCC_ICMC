#include <bits/stdc++.h> // usa todas as bibliotecas do C++

using namespace std;

int main() {
    /* Exercício 1:
    int input;
    cin>>input;

    int *rating = new int[input];
    for (int i = 0; i < input; i++){
        cin>>rating[i];

        if (rating[i] > 10000)
            cin>>rating[i];
    }

    for (int i = 0; i < input; i++){
        if (rating[i] >= 1900)
            cout<<"Division 1"<<endl;

        else if (rating[i] <= 1899 && rating[i] >= 1600)
            cout<<"Division 2"<<endl;

        else if (rating[i] <= 1599 && rating[i] >= 1400)
            cout<<"Division 3"<<endl;

        else
            cout<<"Division 4"<<endl;
    }

    return 0;
    */

    /*Exercício 2:
    int number;
    cin>>number;

    if (number < 2 || number > pow(10, 9))

    for (int i = 1; i <= number; i++){
        if (number % i == 0)
            cout<<i<<endl;
    }
    */

    /*Exercício 3:
    int limit, higher = 0;
    cout<<"Total of numbers: ";
    cin>>limit;

    while (limit < 1 || limit > 100){
        cout<<"Total of numbers: ";
        cin>>limit;
    }

    int *numbers = new int[limit];
    for (int i = 0; i < limit; i++){
        cin>>numbers[i];

        higher = numbers[i];

        for (int j = 0; j < i; j++){
            if (numbers[j] > higher)
                higher = numbers[j];
        }
    }

    cout<<endl<<higher;
    */

    /*Exercício 4:
    int N, X, Y;
    cin>>N>>X>>Y;
    cout<<endl;

    while (N < 1 || N > 5*pow(10,5)){
        cout<<"Put a value of the correct range: ";
        cin>>N;
    }

    while (X < 0 || N > 5*pow(10,5)){
        cout<<"Put a value of the correct range: ";
        cin>>X;
    }

    while (Y < 0 || N > 5*pow(10,5)){
        cout<<"Put a value of the correct range: ";
        cin>>Y;
    }


    int *coordenates = new int[2];
    coordenates[0] = X;
    coordenates[1] = Y;

    string directions;
    for (int i = 0; i < N; i++){
        cin>>directions[i];

        if (directions[i] == 'C')
            coordenates[0] -= 1;

        else if (directions[i] == 'B')
            coordenates[0] += 1;

        else if (directions[i] == 'D')
            coordenates[1] += 1;

        else if (directions[i] == 'E')
            coordenates[1] -= 1;

        else{
            i--;
            cout<<endl;
        }
    }

    cout<<endl<<coordenates[0]<<" "<<coordenates[1];
    */

    /*Exercício 5:
    int N;
    cin>>N;

    while (N < 1 || N > pow(10, 9){
        cin>>N;
        cout<<endl;
    }

    double *numbers = new double[N], *results = new double[N];
    for (int i = 0; i < N; i++){
        cin>>numbers[i];

        while (numbers < 0 || numbers > pow(10, 9))
            cin>>numbers[i];

        results[i] = sqrt(numbers[i]);
    }

    cout<<endl;
    for (int i = 0; i < N; i++)
        cout<<results[i]<<endl;
    */

    /*Exercício 6:
    int N;
    cin>>N;

    while (N < 1 || N > pow(10,4))
        cin>>N;

    int *numbers = new int[N];
    for (int i = 0; i < N; i++) {
        cin>>numbers[i];

        while (numbers[i] < pow(2,31)*(-1) || numbers[i] > pow(2,31) - 1)
            cin>>numbers[i];
    }

    int *sequential_counters = new int[N];
    for (int i = 0; i < N; i++)
        sequential_counters[i] = 1;

    for (int i = 0; i < N; i++){
        for (int j = i + 1; j < N; j++) {
            if (numbers[i] == numbers[j])
                sequential_counters[i]++;

            else
                break;
        }
    }

    int maior = -1, higher_number;
    for (int i = 0; i < N; i++){
        if (sequential_counters[i] > maior)
            maior = sequential_counters[i];
    }

    cout<<maior;
    */

    /*Exercício 7:
    int n;
    cin>>n;
    cout<<endl;

    for (int i = 0; ; i++){
        if (n == 1)
            break;

        if (n%2 != 0){
            n = 3*n + 1;
            cout<<n<<endl;
        }


        else {
            n /= 2;
            cout<<n<<endl;
        }
    }
    */

    /*Exercício 8:
    string S;
    cin >> S;

    int limit = S.length() - 1;

    if (S[0] != '<') {
        cout << "No" << endl;
        return 0;
    }

    if (S[limit] != '>') {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 1; i <= limit - 1; i++) {
        if (S[i] != '=') {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    */

    /*Exercício 9
    int t, n;
    string a, b, c;
    vector<bool> results;
    cin>>t;

    while (t < 1 || t > 1000)
        cin>>t;

    for (int i = 0; i < t; i++) {
        cin>>n;
        while (n < 1 || n > 20)
            cin>>n;

        cin>>a>>b>>c;
        bool possible = false;

        for (int j = 0; j < n; j++) {
            if (a[j] != c[j] && b[j] != c[j]){
                possible = true;
                break;
            }
        }

        results.push_back(possible);
    }

    for (bool value : results)
        cout<<(value ? "YES" : "NO")<<endl;
    */

    /*Exercício 10
    int n, decrement = -2;
    cin>>n;

    while (n < 1 || n > 100000)
        cin>>n;

    for (int i = 0; i < n - 1; i++){
        if (i%2 == 0 && i != 0)
            decrement--;
    }

    cout<<n+decrement;

    // n-1 é usado no loop para amparelhar duas sequências: valores para n e valores
    // do decremento, os quais alternam de -2 para -2-(k/2), quando k alterna de 2 em 2
    // valores:
    [// -2, -2, -3, -3, ..., -n, -n, ...]

    // Observou-se por testes manuais, que os caminhos mais "baratos"/menor quantia de caminhos
    // eram tais que para os valores de n, havia, de 2 em 2, decrementos iguais. Ou seja,
    // para a0 e a1 há um mesmo valor a ser descontado (no caso, -2) e assim sucessivamente.
    // Há, então, um padrão para an e an+1 (termos consecutivos).
    */

    /*Exercício 11
        int t, n;
        cin >> t; // número de testes

        while (t < 1 || t > 100)
            cin >> t;

        cin.ignore(); // limpa o '\n'

        for (int i = 0; i < t; i++) {
            cin >> n;
            while (n < 1 || n > 200000)
                cin >> n;

            cin.ignore(); // limpa o '\n' antes do getline

            string s;
            do {
                getline(cin, s);
            } while (s.length() != n); // garante que a entrada da string tenha apenas n caracteres

            vector<string> final;
            int k = 0;

            while (k < n) {
                string syl = ""; // sílaba atual
                syl += s[k];     // C (consoante garantida)
                syl += s[k + 1]; // V

                if (k + 2 < n && (s[k + 2] != 'a' && s[k + 2] != 'e')) {
                    syl += s[k + 2]; // CVC
                    k += 3;
                }

                else
                    k += 2; // CV

                final.push_back(syl);
            }

            for (int j = 0; j < final.size(); j++) {
                cout << final[j];

                if (j != final.size() - 1)
                    cout << ".";
            }

            cout << endl;
        }
    */

    /*Exercício 12:
    int N, Ia = 0, Ib = 0;
    cin>>N;

    while (N < 2 || N > pow(10,5))
        cin>>N;

    int *comands = new int[N];
    for (int i = 0; i < N; i++){
        cin>>comands[i];

        while (comands[i] < 1 || comands[i] > 2)
            cin>>comands[i];

        if (comands[i] == 1)
            Ia = !Ia;

        else {
            Ia = !Ia;
            Ib = !Ib;
        }
    }

    cout<<Ia<<endl<<Ib<<endl;
    */

    return 0;
}
