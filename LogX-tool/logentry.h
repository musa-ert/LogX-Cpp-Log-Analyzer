#ifndef logentry_h
#define logentry_h
#include <iostream>
#include <string>
using namespace std;
class logentry{
private:
    string time;
    string kontrol;
    string mesaj;
public:
    logentry(string satir){
        ayirma(satir);
    }
    void ayirma(string satir){
    int zaman_s = satir.find('[');
    int zaman_f = satir.find(']');
    if (zaman_s == string::npos || zaman_f == string::npos) return;
    time=satir.substr(zaman_s,zaman_f-zaman_s+1);
    int kontrol_s=satir.find('[',zaman_s+1);
    int kontrol_f=satir.find(']',zaman_f+1);
    if (kontrol_s == string::npos || kontrol_f == string::npos) return;
    kontrol=satir.substr(kontrol_s,kontrol_f-kontrol_s+1);
    mesaj=satir.substr(kontrol_f+1);

    }
    string getTime(){
    return time;
    }
    string getKontrol(){
    return kontrol;
    }
    string getMesaj(){
    return mesaj;
    }
    void printlog(){
        cout<<time<<kontrol<<mesaj<<endl;
    }

};


#endif
