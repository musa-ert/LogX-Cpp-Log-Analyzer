#include <iostream>
#include <fstream>
#include <string>
#include "logentry.h"
using namespace std;

int main()
{
    string o_dosya;
    cout<<"Welcome to Log Analysis Tool"<<endl;
    cout<<"Please enter a file name(look like this blabla.txt)"<<endl;
    cin>>o_dosya;
    ifstream dosyaoku(o_dosya);
    if(!dosyaoku.is_open()){
        cout<<"Error: File could not be opened."<<endl;
        return 1;
    }
    string satir;
    while(getline(dosyaoku,satir)){
        logentry deneme(satir);
        if(deneme.getKontrol()=="[ERROR]"){
            deneme.printlog();
        }

    }


    dosyaoku.close();
    return 0;
}
