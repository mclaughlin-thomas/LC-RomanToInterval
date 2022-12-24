#include <string>
#include <iostream>

/*
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
*/

int Converter(std::string test);

int main(){
    std::string test = "IV";
    int result = Converter(test);
    std::cout<< result;
    return 0;
}

int Converter(std::string test){
    int result=0;
    for (int i =0; i<test.size(); i++){

        switch (test[i])
        {
            case 'I':
                if(test[i+1]=='V'||test[i+1]=='X'){
                    result-=1;
                }
                else{
                    result+=1;
                }
                break;
            case 'V':
                result+=5;
                break;
            case 'X':
                if(test[i+1]=='L'||test[i+1]=='C'){
                    result-=10;
                }
                else{
                    result+=10;
                }
                break;
            case 'L':
                result+=50;
                break;
            case 'C':
                if(test[i+1]=='D'||test[i+1]=='M'){
                    result-=100;
                }
                else{
                    result+=100;
                }
                break;
            case 'D':
                result+=500;
                break;
            case 'M':
                result+=1000;
                break;
            default:
                break;
        }
    
    }


    return result;

}