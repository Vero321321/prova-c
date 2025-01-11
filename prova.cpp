#include <iostream>
using namespace std;


int main()
{

int r,c,prodotto=1;

int M [3][3];
for(r=0;r<3;r++){
    for(c=0;c<3;c++){
        cout<<"Inserisci un numero \n";
        cin>>M[r][c];
    }
}

for(r=0;r<3;r++){
    for(c=0;c<3;c++){
        cout<<M[r][c];
    }
    cout<<"\n";
}

for(r=0;r<3;r++){
    for(c=0;c<3;c++){
        if(M[r]==M[c]){
            prodotto=prodotto*M[r][c];
        }
    }
}

cout<<"Il prodotto di tutti i numeri sulla diagonale è di ";cout<<prodotto;

}