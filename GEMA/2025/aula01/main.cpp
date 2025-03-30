#include <iostream>
#include <cmath>

using namespace std;

int main() {
    /*Exercício 1:
    int A, B;

    cin>>A>>B;

    while (A < -1000 || A > 1000 || B < -1000 || B > 1000)
        cin>>A>>B;

    cout <<(A+B)/2<< endl;
    */

    /*Exercício 2
    int A, M;

    cin>>A>>M;

     while (A < 1 || A > 50 || M < 1 || M > 50)
        cin>>A>>M;

    if (A + M <= 50)
        cout<<"S"<<endl;

    else
        cout<<"N"<<endl;
    */

    /*Exercício 3*/

    /*Exercício 5
    int n, x = 0;
    cin>>n;

    while (n < 1 || n > pow(10,15))
        cin>>n;

    for (int i = 1; i <= n; i++)
        x += pow(-1,i)*i;

    cout<<x<<endl;
    */

    /*Exercício 6
    int n, k;
    cin>>n>>k;

    while (n < 1 || k > pow(10,9))
        cin>>n>>k;

    int i;
    for (i = n + 1; ; i++){
        if (i%k == 0)
            break;
    }

    cout<<i;
    */

    /*Exercício 7
    double P1, P2, C1, C2;
    cin>>P1>>C1>>P2>>C2;

    while (P1 < 10 || P1 > 100 || P2 < 10 || P2 > 100 || C1 < 10 || C1 > 100 || C2 < 10 || C2 > 100)
        cin>>P1>>C1>>P2>>C2;

    if(P1*C1 == P2*C2)
        cout<<"0"<<endl;

    if(P1*C1 < P2*C2)
        cout<<"1"<<endl;

    if(P1*C1 > P2*C2)
        cout<<"-1"<<endl;
    */

    /*Exercício 8
    int sum = 0, difference;
    double k,w,n;
    cin>>k>>w>>n;

    while (k < 1 || w > 1000 || n < 0 || n > pow(10,9))
        cin>>k>>w>>n;

    for (int i = 1; i < n + 1; i++)
        sum += (i*k);

    difference = sum - w;

    if (difference > 0)
        cout<<difference;

    else
        cout<<endl<<"There is no need for his friend to borrow him money!"<<endl;
    */

    /*Exercício 9
    int t, a, b, c;

    cin>>t;
    while (t < 1 || t > 162)
        cin>>t;

    int *results = new int[t];

    for (int i = 0; i < t; i++){
        cin>>a>>b>>c;

        while (a < 1 || b > 9 || c < -8 || c > 18)
            cin>>a>>b>>c;

        if (a+b == c)
            results[i] = 1;

        if (a-b == c)
            results[i] = 0;

        else
            results[i] = -1;
    }

    cout<<endl;
    for (int i = 0; i < t; i++){
        if (results[i] == 1)
            cout<<"+"<<endl;

        else if (results[i] == 0)
            cout<<"-"<<endl;

        else
            cout<<"No signal existent"<<endl;
    }
    */

    /*Exercício 10
    int w;
    cin>>w;

    while (w < 1 || w > 100)
        cin>>w;

    if (w%2 == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    */

    return 0;
}
