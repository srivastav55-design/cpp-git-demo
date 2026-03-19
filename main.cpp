#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <thread>
#include <mutex>
#include <condition_variable>

void acc_on() {
   cout << "AC on" << endl;
}   

void acc_off() {
   cout << "AC off" << endl;
}   

void acc_standby() {
   cout << "AC standby" << endl;
}   

int main() {

   void (*state)();

    state = acc_on;
    state();
    state = acc_off;
    state();
    state = acc_standby;
    state();    
   
   
   return 0;

}
