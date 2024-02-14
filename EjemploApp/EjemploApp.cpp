#include "pch.h"
#include "EjemploForm.h"
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

using namespace System;

using namespace EjemploModel;

public ref class Clase1 {
    public:
    int atributo1;
    double atributo2;
    String^ atributo3;
    Clase1() {};
    Clase1(int atributo1,double atributo2) {
        this->atributo1 = atributo1;
        this->atributo2 = atributo2;
    }
};

 static int Metodo1(Clase1^ clase1) {
    int a;

    a = clase1->atributo1;
    return a;
}


int main(array<System::String ^> ^args)
{
    Clase1^ clase1 = gcnew Clase1();
    Clase1^ clase2 = gcnew Clase1(4,5.0);
    clase1->atributo1 = 4;
    int a;

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    EjemploApp::EjemploForm form;
    Application::Run(% form);
    //Console::WriteLine(clase1->atributo1.ToString());


   
}

/*
#include "EjemploForm.h"
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
   Application::EnableVisualStyles();
   Application::SetCompatibleTextRenderingDefault(false);
   EjemploApp::EjemploForm form;
   Application::Run(% form);
   return 0;*/