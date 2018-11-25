#pragma once
#include "Parametre.h"
#include "Orbitron.h"
namespace OrbitalRun {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OyunaBaþla
	/// </summary>
	public ref class OyunaBaþla : public System::Windows::Forms::Form
	{
	public:
		OyunaBaþla(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OyunaBaþla()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	protected:
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::Label^  YörüngeSayýsý;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->YörüngeSayýsý = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(90, 46);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &OyunaBaþla::numericUpDown1_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(90, 159);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 20);
			this->numericUpDown3->TabIndex = 2;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(90, 212);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 20);
			this->numericUpDown4->TabIndex = 3;
			// 
			// YörüngeSayýsý
			// 
			this->YörüngeSayýsý->AutoSize = true;
			this->YörüngeSayýsý->Location = System::Drawing::Point(12, 53);
			this->YörüngeSayýsý->Name = L"YörüngeSayýsý";
			this->YörüngeSayýsý->Size = System::Drawing::Size(74, 13);
			this->YörüngeSayýsý->TabIndex = 4;
			this->YörüngeSayýsý->Text = L"YörüngeSayýsý";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(90, 113);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 5;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &OyunaBaþla::numericUpDown2_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"OrbitronHýzý";
			this->label2->Click += gcnew System::EventHandler(this, &OyunaBaþla::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Canavar Sayýsý";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 214);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Canavar Hýzý";
			// 
			// OyunaBaþla
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->YörüngeSayýsý);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown1);
			this->Name = L"OyunaBaþla";
			this->Text = L"OyunaBaþla";
			this->Load += gcnew System::EventHandler(this, &OyunaBaþla::OyunaBaþla_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OyunaBaþla_Load(System::Object^  sender, System::EventArgs^  e) {
     
				

	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
