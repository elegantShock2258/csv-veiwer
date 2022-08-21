#include<bits/stdc++.h>

#include "libs/CSV.hpp"

int main(){
    CSV::Document doc("sample/sample.csv");

    auto columns = doc.getColumns();

    std::cout << (columns[0])[0] << std::endl;
}