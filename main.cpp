#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    char a;
    cin>>a;
    if (verifica(a)==true){
        cout<<lettera(a)<<endl;
    }
    else{
        cout<<"ERRORE"<<endl;
    }
}
