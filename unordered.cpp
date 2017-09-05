#include<iostream>
#include<unordered_map>
using namespace std;
void printffreq(const string &str){
  unordered_map<string, int> wordFreq;

  stringstream ss(str);
  string word;
  while(ss >> word)
    wordFreq[word]++;

  unordered_map<string,int>:: iterator p;
  for(p=wordFreq.begin();p!=wordFreq.end();p++)
        cout<<"("<<p->first<<","<<p->second<<")\n";
}

int main (){
  string str ="geeks ofr grrks geeks quiz";
  printffreq(str);

}