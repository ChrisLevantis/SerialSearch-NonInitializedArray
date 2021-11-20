///ASK 1 DOMES DEDOMENON...
///Chris Levantis 20110
#include <iostream>
#include <stdlib.h>
#include <time.h>
#define N 10
using namespace std;

///Σειριακή αναζήτηση 1
siriaki_1(int k,int a[])
{
    int i=1;
    int n=0;//Αριθμός συγκρίσεων
    while(i<=N)
    {
        n++;
        if( a[i] == k )
        {
            cout<<"SUCCESS----Thesi:"<<i<<endl;
            cout<<"Number of compares:"<<n<<endl;
            return 1;
        }
        else
            i=i+1;
    }
    cout<<"Number of compares:"<<n<<endl;
    cout<<"NOT FIND..."<<endl;
}
///Σειριακή αναζήτηση 2
siriaki_2(int k,int a[])
{
    int n=0;
    for(int i=1; i<=N; i++)
    {
        if(a[i] == k)
        {
            n++;//μετρά εμφανίσεις
            cout<<"Emfanistike stin thesi:"<<"a["<<i<<"]"<<endl;
        }
        if(i == N)
        {
            cout<<"Emfanisis:"<<n<<endl;
            exit(2);
        }
    }

}
int main()
{
    srand(time(NULL));
    int *a = new int [N];///nea desmeusi pinaka

    ///Αρχικοποιείται ο πίνακας
    for(int i=1; i<=N; i++)
    {
        a[i]= 1+rand()%N;
        cout<< i<<"-"<< a[i]<<endl;
    }

    ///Δημιουργία κλειδιού k
    int k;
    k=1+rand()%N;
    cout<<"\nKEY="<<k<<endl;

    ///Σειριακή αναζήτηση 1
    cout<<"\n\nSiriaki anazitisi 1:::::"<<endl;
    siriaki_1(k,a);

    ///Σειριακή αναζήτηση 2
    cout<<"\n\nSiriaki anazitisi 2..."<<endl;
    siriaki_2(k,a);

}


