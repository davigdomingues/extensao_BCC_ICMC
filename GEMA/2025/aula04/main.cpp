#include <iostream>
using namespace std;

// Fun��o do exerc�cio 1:
/* int f91(int N) {
    if (N > 100)
        return N - 10;

    return f91(f91(N + 11));
}
*/

// Fun��o do exerc�cio 2:
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
    /*Exerc�cio 1:
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

    /*Exerc�cio 2:
    main() {
    int fatorial = 1, N;
    cin>>N;

    if (N == 0)
        cout<<1;

    for (int i = 1; i <= N; i++)
        fatorial *= i;

    cout<<fatorial<<endl;
    */

    /*Exerc�cio 3:
    int x;
	cin>>x;

	if (eh_primo(x))
		cout << "S" << "\n";

	else
		cout << "N" << "\n";
    */

    /*Exerc�cio 4:

    */

    /*Exerc�cio 5:
    int N, testCase = 1;

    while (true) {
        cin >> N;

        if (N == 0)
            break;

        int movimentos = pow(2, N) - 1;

        cout << "Teste " << testCase << endl;
        cout << movimentos << endl;
        cout << endl;

        testCase++;
    }
    */

    /*Exerc�cio 6:
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
