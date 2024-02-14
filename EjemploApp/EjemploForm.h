#pragma once
#include "pch.h"
#include "EjemploForm1.h"
using namespace System;
using namespace EjemploModel;
using namespace EjemploController;
using namespace System::Collections::Generic;

namespace EjemploApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de EjemploForm
	/// </summary>
	public ref class EjemploForm : public System::Windows::Forms::Form
	{
	public:
		EjemploForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~EjemploForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnPush;
	private: System::Windows::Forms::Button^ txtAdd;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ txtbox2;
	private: System::Windows::Forms::Button^ button1;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnPush = (gcnew System::Windows::Forms::Button());
			this->txtAdd = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->txtbox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnPush
			// 
			this->btnPush->Location = System::Drawing::Point(216, 12);
			this->btnPush->Name = L"btnPush";
			this->btnPush->Size = System::Drawing::Size(163, 58);
			this->btnPush->TabIndex = 0;
			this->btnPush->Text = L"Hola";
			this->btnPush->UseVisualStyleBackColor = true;
			this->btnPush->Click += gcnew System::EventHandler(this, &EjemploForm::btnPush_Click);
			// 
			// txtAdd
			// 
			this->txtAdd->Location = System::Drawing::Point(78, 222);
			this->txtAdd->Name = L"txtAdd";
			this->txtAdd->Size = System::Drawing::Size(158, 44);
			this->txtAdd->TabIndex = 1;
			this->txtAdd->Text = L"Agregar";
			this->txtAdd->UseVisualStyleBackColor = true;
			this->txtAdd->Click += gcnew System::EventHandler(this, &EjemploForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(283, 222);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 44);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(85, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nombre:";
			this->label1->Click += gcnew System::EventHandler(this, &EjemploForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(167, 131);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(146, 22);
			this->textBox1->TabIndex = 4;
			// 
			// txtbox2
			// 
			this->txtbox2->Location = System::Drawing::Point(451, 134);
			this->txtbox2->Name = L"txtbox2";
			this->txtbox2->Size = System::Drawing::Size(143, 22);
			this->txtbox2->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(475, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 34);
			this->button1->TabIndex = 6;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EjemploForm::button1_Click_1);
			// 
			// EjemploForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 318);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtbox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txtAdd);
			this->Controls->Add(this->btnPush);
			this->Name = L"EjemploForm";
			this->Text = L"EjemploForm";
			this->Load += gcnew System::EventHandler(this, &EjemploForm::EjemploForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EjemploForm_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Empleado^>^ listempleado = gcnew List<Empleado^>();
		listempleado = Controller::GetEmpleados();

		int number = listempleado->Count - 1;
		
		if (number >= 0){
			txtbox2->Text = listempleado[number]->name;
		}
		else {
		}
		


	}
	private: System::Void btnPush_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Chau");
		Empleado^ empleado= gcnew Empleado();
		empleado=Controller::Metodo1(1,"Pablo", empleado);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		List<Empleado^>^ listempleado = gcnew List<Empleado^>();
		Empleado^ empleado = gcnew Empleado();
		empleado->name = textBox1->Text;
		Controller::AnadirEmpleado(empleado);
		listempleado = Controller::GetEmpleados();

		int number=listempleado->Count-1;
		txtbox2->Text = listempleado[number]->name;

	
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		EjemploForm1^ ejForm = gcnew EjemploForm1();

	   ejForm->Show();
}
};
}
