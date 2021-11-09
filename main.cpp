#include "fractie.cpp"


int main()
{
    Fractie F1(4,5);
    cout<<"Datele fractiei F1 sunt: \n";
    cout<<F1;

    Fractie F2(F1);//apel constructor copiere
    cout<<"Se verifica copierea lui F1 in F2: \n"<<F2;

    Fractie F3=F2;///folosirea operatorului =
    cout<<"Se verifica atribuirea F3=F2: \n"<<F3;  

    F3.~Fractie();//destructor
    cout<<"Se apeleaza destructorul pentru variabila F3\n";
    cout<<F3;


    cout<<"Valoarea fractiei F2 este "<<F2.getValoare();
    cout<<"\nNumarator: "<<F2.getA();
    cout<<"\nNumitor: "<<F2.getB()<<endl;
    
    F2.setdata(7,4);
    cout<<"\nSe schimba valorile pentru F2\n"<<F2;
    
    
    Fractie F;
    cout<<"\n\nSe efectueaza diverse operatii intre F1 si F2:\n";

    F=F1+F2;
    cout<<"\nAdunare:\n"<<F;


    F=F1-F2;
    cout<<"\nScadere: \n"<<F;


    F=F1*F2;
    cout<<"\nInultire: \n"<<F;


    F=F1/F2;
    cout<<"\nImpartire: \n"<<F;

    
    F=-F1;
    cout<<"\nOpusul fractiei F1: \n"<<F;


    F+=F1;
    cout<<"\nSe aduna opusul lui F1 cu F1, verificand daca suma da 0: \n"<<F;

    Fractie f(14,8);
    
    cout<<"Fractia f este:\n"<<f<<endl;
    cout<<"Se compara f,F1,F2\n";

    if(f==F2)
       cout<<"Fractiile f si F2 sunt egale";
    else
       cout<<"Fractiile f si F2 NU sunt egale";
    cout<<endl;
    
    if(F1!=F2)
       cout<<"Fractiile F1 si F2 NU sunt egale";
    else
       cout<<"Fractiile F1 si F2 sunt egale";
    cout<<endl;

    if(F1>=F2)
         cout<<"F1>=F2";
    else
         cout<<"F1<F2";
    cout<<endl;
    

    

    return 999;
}
