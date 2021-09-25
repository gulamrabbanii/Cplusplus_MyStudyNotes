
#include <iostream>
using namespace std;

void mightGoWrong(){
    bool error1 = false;
    bool error2 = true;
    
    if(error1){
        throw 8;
    }
    
    if(error2){
        throw string("Something went wrong");
    }
}

void usersMightGoWrong(){
    mightGoWrong();
}

int main(){
    try{
        usersMightGoWrong();
    }
    catch(int e){
        std::cout << "Error code: " << e << std::endl;
    }
    catch(char const *e){
        cout << "Error message: " << e << endl; 
    }
    catch(string &e){
        cout << "string error message: " << e << endl;
    }
    
    cout << "Still running..." << endl;
    
    return 0;
}