#import <iostream>

using namespace std;

int main(){
      float cuenta,descuento,total
      cout<<"\t :::Caluclo de la cuenta :::"
      cout>>"Dame el total a pagar ";
      cin>>cuenta;

      if (cuenta<1000){
        descuento=0
        total=cuenta;
      }
      else if (cuenta >1000 && cuenta<<2000){

        descuento=cuenta*.12;
        total=cuenta-descuento;
      }
      cout<<"El descuento de la cuenta fue $"<<descuento<<endl;
      cout<< "El total a pagar es: $"<<total<<endl;


}