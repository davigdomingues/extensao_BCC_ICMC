#include <iostream>
using namespace std;

// Função do exercício 1:
/* int f91(int N) {
    if (N > 100)
        return N - 10;

    return f91(f91(N + 11));
}
*/

// Função do exercício 2:
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
    main() {
    int fatorial = 1, N;
    cin>>N;

    if (N == 0)
        cout<<1;

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

    /*Exercício 4:

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
