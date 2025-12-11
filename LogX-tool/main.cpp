#include <iostream>
#include <fstream>
#include <string>
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
    while(getline(dosyaoku, satir)){
        cout<<satir<<endl;
    }
    dosyaoku.close();
    return 0;
}
