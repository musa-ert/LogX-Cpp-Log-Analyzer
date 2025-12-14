#include <iostream>
#include <fstream>
#include <string>
#include "logentry.h"
#include <vector>
using namespace std;

int main()
{
    vector<logentry> hatasayisi;
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
        if(satir.empty()) continue;
        logentry deneme(satir);
        if(deneme.getKontrol()=="[ERROR]"){
            deneme.printlog();
            hatasayisi.push_back(deneme);
        }

    }
    cout<<"-----------------------------------------";
    cout<<"\n\t\tERROR counter:"<<hatasayisi.size()<<endl;
    dosyaoku.close();
    return 0;
}
