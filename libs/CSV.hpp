#include<bits/stdc++.h>
#include<fstream>

#include <string>
#include <sstream>
#include <vector>


// src: https://stackoverflow.com/a/27511119
std::vector<std::string> split(const std::string &s, char delim) {
  std::stringstream ss(s);
  std::string item;
  std::vector<std::string> elems;
  while (std::getline(ss, item, delim)) {
    elems.push_back(item);
    // elems.push_back(std::move(item)); // if C++11 (based on comment from @mchiasson)
  }
  return elems;
}

namespace CSV{
    class Document{
        private:
            std::fstream fileToRead;
        public:
            Document(std::string path){
                fileToRead = std::fstream(path);
            }

            std::vector<std::vector<std::string>> getColumns(){
                std::string line;
                std::vector<std::vector<std::string>> lines;
                
                while(std::getline(fileToRead,line))
                    lines.push_back(split(line,','));

                return lines; 
            }
    };



}