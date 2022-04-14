#include <iostream>
#include <fstream>

void func(std::string& str)
{
    while(true){

        int a = str.find('.');
        if(a == -1) break;
        str.replace(a,1,",");


    }
    str.pop_back();

}

void sreachpos(std::string& str)
{
    int pos = 0;
    for (int i = 0; i < str.length(); ++i) {
        if(str[i] == ',' && i > 4)
        {str.replace(i,1," "); pos=i ;break;}

    }
    str.insert(pos,"         ");
}

int main() {

    std::ifstream ifile("NewFile8.csv");
    std::ofstream ofile("NewFile88.csv");


        while(!ifile.eof()){

        std::string line;
        ifile >> line ;
        func(line);
        sreachpos(line);
        std::cout << line << std::endl;
        ofile << line << '\n';


        }





    ifile.close();
    ofile.close();

    return 0;
}
