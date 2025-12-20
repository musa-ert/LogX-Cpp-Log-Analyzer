#include <iostream>
#include <fstream>
#include <string>
#include "logentry.h"
#include <vector>
using namespace std;

int main()
{
    vector<logentry> errorLogs;
    string inputFilename;
    cout<<"Welcome to Log Analysis Tool"<<endl;
    cout<<"Please enter a file name(look like this blabla.txt)"<<endl;
    cin>>inputFilename;
    ifstream logFile(inputFilename);
    if(!logFile.is_open()){
        cout<<"Error: File could not be opened."<<endl;
        return 1;
    }
    string line;
    while(getline(logFile,line)){
        if(line.empty()) continue;
        logentry currentLog(line);
        if(currentLog.getKontrol()=="[ERROR]"){
            currentLog.printlog();
            errorLogs.push_back(currentLog);
        }

    }
    cout<<"-----------------------------------------";
    cout<<"\n\t\tERROR counter:"<<errorLogs.size()<<endl;
    logFile.close();
    return 0;
}
