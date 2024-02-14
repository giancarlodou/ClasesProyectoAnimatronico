#pragma once

using namespace System;
using namespace EjemploModel;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Xml::Serialization;

namespace EjemploController {
	public ref class Controller
	{
	private:
		static List<Empleado^>^ EmpleadoList = gcnew List<Empleado^>();

	public:
		static Empleado^ Metodo1(int ,String^, Empleado^);
		static int AnadirEmpleado(Empleado^);
		static List<Empleado^>^ GetEmpleados();
		static void PersisEmpleados();
		static void LoadEmpleados();


		// TODO: Agregue aquí los métodos de esta clase.
	};
}
