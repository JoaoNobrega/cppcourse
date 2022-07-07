#include <iostream>

using namespace std;

int main(){

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfumcpiasr"};

    string message {"I'll meet you at billy's house at 10AM"};
    string cipher;
    string decrypted;

    for (int i = 0; i < message.length(); i++) {
        int index = alphabet.find(message[i]);
        if (index != -1) {
            cipher += key[index];
        } else {
            cipher += message[i];
        }
    }

    cout << cipher << endl;

    for (int i = 0; i < cipher.length(); i++) {
        int index = key.find(cipher[i]);
        if (index != -1) {
            decrypted += alphabet[index];
        } else {
            decrypted += cipher[i];
        }
    }

    cout << decrypted << endl;

    return 0;
}