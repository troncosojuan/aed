#include <iostream>
#include <assert.h>
/*Diseñar un programa C++ que ejemplifique la aplicación de los tipos de datos
vistos en clases.*/
using namespace std;


    int main()
{

    int var1 = 265;
    bool var2 = false;
    char var3 = 'b' ;
    string var4 = "tomate";
    unsigned var5 = -52;
    double var6 = 26.33;

    assert(var1==265);
    assert(var2<true);
    assert(var3!='c');
    assert(var4+"tabaco " == "tomatetabaco");
    assert(var5*-1== 52);
    assert(var6-00.33 <= 26);




}

