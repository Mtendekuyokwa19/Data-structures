#include <iostream>
#include <fstream>
void fileCopy(char copper[],char coppient[]);

using namespace std;

int main(){

fileCopy("establish.txt","write.txt");



    return 0;
}
void fileCopy(char copper[],char coppient[]){

ifstream read(coppient);
ofstream write(copper,ios::app);


while (!read.eof())
{
    char words[81];
    
read.getline(words,70);
write<<words<<endl;
cout<<words;

}




}