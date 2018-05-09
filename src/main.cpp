/* create by Trung-Duc Nguyen
 * to run....
 * ./Dinjector -m [METHOD] -t [TARGET] -p [PPS] -f [FAKESOURCES]  
 * - [METHOD]:          TCP/UDP.
 * - [TARGET]:          either IP address of target or domain.
 * - [PPS] :            from 0 to 100000. 
 * - [FAKESOURCES] :    Y-for using fakesources.
 *                      N-for do not fakesources.  
 * 
 * ./Dinjector -m TCP -t 1.2.3.4 -p 1000 -f Y
*/

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int         _PPS;
string      _METHOD, _TARGET;
bool        _isFakeSources;

bool parse_Input_Parameter(int, char **);


int main(int argc, char ** argv){
    cout << "------------DINJECTOR--------------" << endl;
    if (parse_Input_Parameter(argc, argv) ){
        cout    << "\n_METHOD: "              << _METHOD 
                << "\n_TARGET: "              << _TARGET
                << "\n_PPS: "                 << _PPS
                << "\n_isFakeSources: "       << _isFakeSources
                << endl;  
    } 

    
    return 0;
}


bool 
parse_Input_Parameter(int argc, char ** argv)
{
    if (argc < 9)
        {
            cout    << "Using ./Dijector "
                    << "-m [METHOD] " 
                    << "-t [TARGET] "
                    << "-p [PPS] "
                    << "-f [FAKESOURCES] "
                    << endl;
            return false;
        }   
    for(int i = 1; i < 9; i+=2 ){
        string pre(argv[i]);
        if (pre == "-m"){
            _METHOD = string(argv[i+1]);
            continue;
        }
        if (pre == "-t"){
            _TARGET = string(argv[i+1]);
            continue;
        }
        if (pre == "-f"){
            char c = *argv[i+1];
            (c == 'Y') ? _isFakeSources = true : _isFakeSources = false;
            continue; 
        }
        if (pre == "p"){
            string spps = string(argv[i+1]);
            stringstream ss(spps);
            _PPS = 0;
            ss >> _PPS;
            continue;
        }   
    }
    return true;    
}

