#include <iostream>
using namespace std;

int main(void){

    char buf[100];
    FILE*fd;

    cout<<"========Inicio del programa=========="<<endl;
    fd = fopen("archivo_texto.txt","r+t");
    fread(buf,100,1,fd);
    printf("%s",buf);
    fclose(fd);
    cout<<" "<<endl;

}