#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    //Bài 1
    /*
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout << "#";
        cout << endl;
    }
    */

    // Bài 2
    /*
    for (char i = 'A'; i <= 'Z';i++)
        cout << i << " ";
    cout << endl;
    for (char i = 'a'; i <= 'z';i++)
        cout << i << " ";
    */

    // Bài 3
    /*
    char A, B;
    int s=0;
    cin >> A >> B;
    while(B>A+1)
    {
        s++;
        A++;
    }
    cout << abs(s);
    */

    // Bài 4
    /*
    unsigned n;
    cin >> n;
    for(int i=1;i<=n;i++)
        if((n-i)%2 ==0 && (n-i) !=0)
            cout << (n-i) /2 << " " << i << "   ";
    */

    // Bài 5
    /*
    int n;
    cin >>n;
    int s=1,t,i=1;
    while (s<n)
    {
        s+=sqrt(i);
        i++;
    }
    cout << i-1;
    */

    // Bài 6
    /*
    double s = 0;
    double i=1;
    while (1 / i >= 0.0001)
    {
        s += (1 / i);
        i++;
    }
    cout << fixed << setprecision(4) << s + (1/i);
    */

    // Bài 7
    /*
    int n,x,tam=0;
    cin >> n;
        for (int k=0; k<n;k++)
        {
            cin >> x;
            if (x >= tam )
                tam = x;
        }
    cout << tam;
    */

    // Bài 8
    /*
    int g,c;
    for (int g=0;g<36;g++)
        for (int c=0;c<36;c++)
            if ((g+c ==36) && (2*g+4*c == 100))
                cout << g << " " << c;
    return 0;
    */

    // Bài 10
 
    int n;
    double s;
    cin >> n;
    // a
    s=0;
    for(int i=1;i<=(2*n+1);i+=2)
        s+=i;
    cout << s << endl;

    // b
    s=0;
    for (int i=2;i<=(2*n);i+=2)
        s+=float(1)/i;
    cout << fixed << setprecision(4) << s << endl;

    // c
    s=0;
    for (int i=1;i<=n;i+=1)
        s+=float(1)/pow(i,2);
    cout << fixed << setprecision(4) << s << endl;

    // d
    s=1;
    for (int i=2;i<=n;i+=1)
        s*=(1+float(1)/pow(i,2));
    cout << fixed << setprecision(4) << s << endl;

    // e
    s=0;
    for (int i=1;i<=n;i+=1)
        s+= i/float(i+1);
    cout << fixed << setprecision(4) << s << endl;

    // f
    s = 0;
    for(int i=1;i<=n;i++)
    {
        if (i % 2 != 0)
            s +=float (1)/i;
        else
            s +=float(1)/(-i);
    }
    cout << fixed << setprecision(4) << s;


}
