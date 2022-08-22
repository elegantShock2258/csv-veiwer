#include<bits/stdc++.h>

#include "../libs/tabulate.hpp"

namespace Themes{
    class Theme{
        private:
            int width,height;
            tabulate::Table table;
        public:
            Theme(tabulate::Table& table,int width,int height){
                this->table = table;
                this->width = width;
                this->height = height;
            }
    
            void Classic(){
               for(int i = 0 ; i< height ; i++){
                    for(int j =0 ; j< width; j++)
                        table[i][j].format().font_color(tabulate::Color::white).font_style({tabulate::FontStyle::bold});
               } 
            }
            void Default(){
                for(int i = 0 ; i< height ; i++){
                    for(int j =0 ; j<width; j++){
                        if(i==0) table[0][j].format().font_color(tabulate::Color::green).font_style({tabulate::FontStyle::bold,tabulate::Fon});
                        else if(j==0) table[i][0].format().font_color(tabulate::Color::blue).font_style({tabulate::FontStyle::bold});
                        else table[i][j].format().font_color(tabulate::Color::cyan).font_style({tabulate::FontStyle::bold});
                    }
               }  
            }
    };
}