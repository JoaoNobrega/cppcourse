#include <iostream>
#include <string>

using namespace std;

int main(){

    string message;

    cout << "Enter a message: ";
    getline(cin, message);

    for (int i = 0; i < message.length(); i++) {
        int numletters = 2*i+1;
        int numspaces = (((message.length()*2)-1)-numletters)/2;
        for( int bs=0;bs<numspaces;bs++){
            cout << " ";
        }
        for(int j=0; j<i+1;j++){
            cout << message.at(j);
        }
        for(int k=i-1; k>=0;k--){
            cout << message.at(k);
        }
        for( int as=0;as<numspaces;as++){
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}