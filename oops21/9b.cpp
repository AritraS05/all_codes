#include<bits/stdc++.h>
using namespace std;


int main(){
    ifstream fin("a.txt");
    ofstream fout("b.txt");
    if(!fin.is_open()){
        cout<<"ferror"<<endl;
        return 1;
    }
    if(!fout.is_open()){
        cout<<"ferror"<<endl;
        return 1;
    }
    string word;
    while(fin>>word){
        if(word[0] == 'a' && word[word.length()-1] == 'a'){
            fout<<word<<endl;
            cout<<"ya transfer complete"<<endl;
        }
    }

    fin.close();
    fout.close();
    return 0;
}