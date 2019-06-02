#include <iostream>
#include <istream>
#include <strstream>
#include <cmath>
#include <math.h>
#include <cstdlib>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string input = "this is a standard string";
    vector<string> wordchange;
    vector<string> palindromelist;
    istringstream sentence(input);
    do{
        string word;
        sentence >> word;
        wordchange.push_back(word);
    }
    while(sentence);
    for(size_t i= 0; i < wordchange.size()-1; ++i){
        string original = wordchange[i];

        string backwardsstring = original;
        int iterator = 1;
        for(std::string::size_type i = original.size(); i > 0 ; --i){
            backwardsstring[iterator-1]= original[i-1];
            iterator++;
        }
        if(backwardsstring == original && original.size() != 1){
            palindromelist.push_back(original);
        }
        else{
            continue;
        }
    }
    if(palindromelist.size() != 0){
        cout<<"the following palindromes were discovered: ";
        for(size_t i = 0; i < palindromelist.size();++i){
            cout<<palindromelist[i]<<",";
        }
        exit(0);
    }else{
        cout<<"no palindromes were discovered"<<endl;
        exit(1);
    }
    return 0;
}