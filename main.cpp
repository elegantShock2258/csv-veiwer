#include<bits/stdc++.h>

#include "libs/CSV.hpp"
#include "libs/tabulate.hpp"
#include "themes/themes.hpp"

//TODO: Complete help()
//      add a function to add or remove a record by line number

void printDocument(CSV::Document& doc, long unsigned int numberOfLines = 4){
    tabulate::Table table;
    auto columns = doc.getColumns();

    if(numberOfLines > columns.size()) numberOfLines = columns.size();

    for(long unsigned int i = 0; i<numberOfLines; i++){

        auto v = columns[i];

        tabulate::Table::Row_t row;
        row.assign(v.begin(), v.end());

        table.add_row(row);
    }

    //styling
    // TODO: add customisability and themes!

    Themes::Theme theme(table,columns[0].size(),numberOfLines);
    theme.Default();
                        
    std::cout << table; 

}

void help(){

}

// first param is file
// second param is number of lines Default is 4

int main(int numParams, char** params){

    if(params[1] != NULL && params[2] == NULL){
        CSV::Document document(params[1]);
        printDocument(document);
    } 
    else if(params[1] != NULL && params[2] != NULL){
        CSV::Document document(params[1]);
        printDocument(document,std::stoi(params[2]));
    }
    else 
        help();
   return 0;
}

