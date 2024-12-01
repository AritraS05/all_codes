#include<bits/stdc++.h>
using namespace std;

bool found(string& word){
    int count = 0;
    string vowels = "aeiouAEIOU";
    for(char ch: word){
        if(vowels.find(ch) != string::npos){
            count++;
        }
    }
    return count<=1;
}

int main(){
    ifstream inputFile("a.txt");
    ofstream outputFile("b.txt");

    if(!inputFile.is_open()){
        cerr<<"error"<<endl;
        return 1;
    }
    if(!outputFile.is_open()){
        cerr<<"error"<<endl;
        return 1;
    }

    string word;
    int count = 0;
    while(inputFile>>word){
        size_t end = word.find_last_not_of(".,!?;:");
        if (end != string::npos) {
            word = word.substr(0, end + 1);
        }
        if(found(word)){
            outputFile<<word<<endl;
            count++;
        }
    }
    inputFile.close();
    outputFile.close();
    cout<<"total words under condition:"<<count<<endl;
    return 0;
}