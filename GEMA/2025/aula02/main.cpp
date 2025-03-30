#include <iostream>
#include <cmath>
#include <cstring>

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

    return 0;
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

    return 0;
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


    return 0;
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

    return 0;
    */

    /*Exercício 6 (esqueci que é consecutivo....):
    int N;
    cin>>N;

    while (N < 1 || N > pow(10,4)){
        cin>>N;
        cout<<endl;
    }

    int *numbers = new int[N];
    for (int i = 0; i < N; i++){
        cin>>numbers[i];

        while (numbers[i] < (-1)*pow(2,31) || numbers[i] > pow(2,31) - 1){
            cin>>numbers[i];
            cout<<endl;
        }
    }


    int sentinel;
    int *counters = new int[N];
    for (int i = 0 ; i < N; i++)
        counters[i] = 0;

    for (int i = 1; i <= N; i++){
        sentinel = numbers[i-1];

        for (int j = 0; j < N; j++){
            if (sentinel == numbers[j])
                counters[j]++;
        }
    }

    int higher_counters = 0;
    for (int i = 0; i < N; i++){
        if (counters[i] > higher_counters)
            higher_counters = counters[i];
    }

    cout<<higher_counters;
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

    return 0;
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
    return 0;
    */

    //Exercício 9:

    return 0;
}
