#include<bits/stdc++.h>

#include "libs/tabulate.hpp"
#include "libs/CSV.hpp"


int main(){

    tabulate::Table table;

    CSV::Document doc("sample/sample.csv");

    auto columns = doc.getColumns();
    
    for(long unsigned int i = 0; i<columns.size(); i++){
    auto v = columns[i];

    tabulate::Table::Row_t row;
    row.assign(v.begin(), v.end());

    table.add_row(row);
    }
        for(int i =0 ; i<=columns.size();i++)
        table[0][i].format().font_color(tabulate::Color::green).font_style({tabulate::FontStyle::bold});

    std::cout << table ;
}