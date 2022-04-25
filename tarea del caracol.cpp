/******************************************************************************************************************

Un caracol cae a un pozo de H metros de profundida . Este caracol durante el dia  asciende una distancia Ld metros,
pero durante la noche desciende Ln metros. Diseñe un programa que simulando el movimiento del caracol,debe arrojar
como resultado en cuantos dias el caracol sale del pozo.
*******************************************************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    float H, Ld, Ln;
    float Days= 0;
    
    cout<<" Enter the height in meters of the well : ";
    cin>> H ;
    
    cout<<" Enter the meters that the snail ascends in the day : ";
    cin>> Ld ;
    
    cout<<" Enter the meters that the snail descends in the night : ";
    cin>> Ln ;
    
    cout<<"Days: "<< ((H-Ld/Ld-Ln)+1)<< endl;
   
    
    
    return 0;
}

