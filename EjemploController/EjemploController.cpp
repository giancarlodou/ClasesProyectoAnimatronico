#include "pch.h"

#include "EjemploController.h"

Empleado^ EjemploController::Controller::Metodo1(int id, String^ nombre, Empleado^ empleado)
{
	empleado->name = nombre;

	return empleado;
}

int EjemploController::Controller::AnadirEmpleado(Empleado^ empleado)
{
	EmpleadoList->Add(empleado);
	PersisEmpleados();
	return 1;
}

List<Empleado^>^ EjemploController::Controller::GetEmpleados()
{
	List<Empleado^>^ emplist = gcnew List<Empleado^>();
	LoadEmpleados();
	emplist = EmpleadoList;
	return emplist;
	
}

void EjemploController::Controller::PersisEmpleados()
{

	XmlSerializer^ writer = gcnew XmlSerializer(EmpleadoList->GetType());
	StreamWriter^ sw = gcnew StreamWriter("Empleados.xml");
	writer->Serialize(sw, EmpleadoList);
	sw->Close();
}

void EjemploController::Controller::LoadEmpleados()
{
	try {
		XmlSerializer^ reader = gcnew XmlSerializer(EmpleadoList->GetType());
		StreamReader^ sr = gcnew StreamReader("Empleados.xml");
		EmpleadoList = (List<Empleado^>^)reader->Deserialize(sr);
		sr->Close();
	}
	catch(Exception^ e) {

	}
	
}
