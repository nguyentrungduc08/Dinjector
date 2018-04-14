/* create by Trung-Duc Nguyen
 * to run....
 * ./Dinjector -m [METHOD] -t [TARGET] -p [PPS] -f [FAKESOURCES]  
 * - [METHOD]:          TCP/UDP.
 * - [TARGET]:          either IP address of target or domain.
 * - [PPS] :            from 0 to 100000. 
 * - [FAKESOURCES] :    Y-for using fakesources.
 *                      N-for do not fakesources.  
 * 
*/

#include <bits/stdc++.h>
#include <iostream>


using namespace std;

bool parse_Input_Parameter();


int main(int argc, char ** argv){
    cout    << "num parameters: " << argc
            << endl;
    return 0;
}


bool 
parse_Input_Parameter()
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
    
{

