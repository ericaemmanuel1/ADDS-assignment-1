#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>
#include <string>
using namespace std;




int main(){
  //Getting the values from the input
  vector<string> list = {};
  string input;
  getline(cin, input);
  stringstream str_strm;
  str_strm << input;
  string temp_str;
  while(!str_strm.eof()) {str_strm >> temp_str;list.push_back(temp_str);}
  string a = list[0]; string b = list[1]; string B = list[2];
  
  int n = a.length();
  int dif = (a.length() - b.length());
  int kjh = b.length(); if (kjh>n){n = b.length(); dif = (b.length() - a.length());}
  if (a.length()>b.length()){for (int i = 0; i<dif; i++) {b="0"+b;}
  } else {for (int i = 0; i<dif; i++) {a="0"+a;}}


  //get the sum
  cout<<school_sum(a, b, stoi(B))<<" ";

  //get the product
  cout<<Karasuba_product(a, b, stoi(B))<<endl;
}
