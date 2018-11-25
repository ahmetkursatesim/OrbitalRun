#pragma once
#include "Orbitron.h"
#include "Monster.h"
#include "Yaþamcýk.h"
#include "Rocket.h"
#include "OyunModel.h"
#include "View.h"
#include "Parametre.h"
namespace OrbitalRun {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::ComponentModel;
	using namespace System::Threading;

   
	






///////////////////////////////////////////////////////////////////////
	/////Definiton Step ////
Monster monstr;
Orbitron orbitrn;
Monster monsters[];
Rocket rocket[];
Yaþamcýk yaþamcýk[];
OyunModel orbit3;
OyunModel orbit4;

const double objOrbitRatio = 0.05;
Point mouseLocation;
double _delta = 0;
double _hypo = 0;

////////////////////////////////////////////------------------------------///////////////////////////

	public ref class Game : public System::Windows::Forms::Form
	{
	
	private: int Point_x=0;
	private: Point point;
	private: System::Windows::Forms::Label^  label1;
	private: int Point_y = 0;
			 

 	
	public: Game(void)
		{
			// InitializeComponent()
				
				orbit3.point = Point(0,0);
				orbit4.point = Point(1, 1);
	      
			
			orbitrn.point = Point(0, 0);
			monstr.setHýz(0.07F);
			orbitrn.setAngle(0);
			monstr.setAngle(2);
			orbitrn.setHýz(a.getilkorbitronHýzý());

			orbitrn.point2 = orbit4.point;

			
		
			
			

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 80;
			this->timer1->Tick += gcnew System::EventHandler(this, &Game::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(512, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &Game::label1_Click);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(622, 261);
			this->Controls->Add(this->label1);
			this->Name = L"Game";
			this->Text = L"Game";
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Game::Game_SizeChanged);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Game::Game_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::Game_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Game_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

				 
				 
				 e->Graphics->DrawEllipse(Pens::Black, Convert::ToInt32(orbit3.point.X - orbit3.getRadius() / 4), Convert::ToInt32(orbit3.point.Y - orbit3.getRadius() / 4), Convert::ToInt32(orbit3.getRadius()), Convert::ToInt32(orbit3.getRadius()));
				 e->Graphics->DrawEllipse(Pens::Black, Convert::ToInt32(orbit4.point.X - orbit4.getRadius() / 2), Convert::ToInt32(orbit4.point.Y - orbit4.getRadius() / 2), Convert::ToInt32(orbit4.getRadius()), Convert::ToInt32(orbit4.getRadius()));
	    
				 e->Graphics->DrawEllipse(Pens::Black, Convert::ToInt32(orbit3.point.X - orbit3.getRadius() / 2), Convert::ToInt32(orbit3.point.Y - orbit3.getRadius() / 2), Convert::ToInt32(orbit3.getRadius()), Convert::ToInt32(orbit3.getRadius()));
				 e->Graphics->DrawEllipse(Pens::Black, Convert::ToInt32(orbit4.point.X -orbit4.getRadius() / 2), Convert::ToInt32(orbit4.point.Y - orbit4.getRadius() / 2), Convert::ToInt32(orbit4.getRadius()), Convert::ToInt32(orbit4.getRadius()));
			

		    SolidBrush^ br = gcnew SolidBrush(Color::Red);
		    e->Graphics->FillEllipse(br, orbitrn.point.X, orbitrn.point.Y, Convert::ToInt32(orbitrn.getRadius()), Convert::ToInt32(orbitrn.getRadius()));
			
		
			e->Graphics->FillEllipse(Brushes::DarkBlue, monstr.point.X, monstr.point.Y, Convert::ToInt32(monstr.getRadius()), Convert::ToInt32(monstr.getRadius()));

			
			
		
		
	}


	private: void getScreenSize()
			 {
				 double size = Convert::ToInt32(Math::Min(this->Size.Width, this->Size.Height));
				 Point center = Point((int)(this->Size.Width) / 2, (int)(this->Size.Height) / 2);
				 orbitrn.setRadius(size*objOrbitRatio);
				 monstr.setRadius(size*objOrbitRatio);
				 orbit4.point = center;
				 orbit3.point = center;
				
				 orbit4.setRadius(size / 4);
				 orbit3.setRadius(size / 2);
				 orbitrn.point2 = orbit4.point;
				 orbitrn.radius2 = orbit4.getRadius();
				 monstr.point2 = orbit4.point;
				 monstr.radius2 = orbit4.getRadius();
				
				 
				
			
			
			 }

			 private: void gameLoop()
			 {
						  
						
						  double hm = orbitrn.getAngle();
							  
						  hm+= orbitrn.getHýz();
						  orbitrn.setAngle(hm);
						   if (orbitrn.getAngle()> Math::PI * 2)
						   {
						  
							   double a = orbitrn.getAngle() - (orbitrn.getAngle() / Math::PI * 2)*(orbitrn.getAngle() / Math::PI * 2);
							   double ht;
						  	 ht = orbitrn.getAngle() + a;
							 orbitrn.setAngle(ht);

						   }
						   double hy = monstr.getAngle();
						   hy += monstr.getHýz();
						   monstr.setAngle(hy);
		
				 if (monstr.getAngle()> Math::PI * 2)
				{

				 double b= monstr.getAngle()- (monstr.getAngle() / Math::PI * 2)*(monstr.getAngle() / Math::PI * 2);
				 double hz;
				 hz = monstr.getAngle() + b;
				 monstr.setAngle(hz);
				
				}
				 orbitrn.point.X = orbit4.point.X + Convert::ToInt32((orbitrn.radius2/ 2) * Math::Cos(orbitrn.getAngle()) - orbitrn.getRadius() / 2);
				 orbitrn.point.Y = orbit3.point.Y + Convert::ToInt32((orbitrn.radius2/ 2) * Math::Sin(orbitrn.getAngle()) - orbitrn.getRadius() / 2);

				monstr.point.X = orbit3.point.X + Convert::ToInt32((monstr.radius2 / 2) * Math::Cos(monstr.getAngle()) - monstr.getRadius() / 2);
				monstr.point.Y = orbit4.point.Y + Convert::ToInt32((monstr.radius2 / 2) * Math::Sin(monstr.getAngle()) - monstr.getRadius()/ 2);
				
			
			
				
			

				 }
			 

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {


		gameLoop();
		Invalidate();
		
	}
	private: System::Void Game_Load(System::Object^  sender, System::EventArgs^  e) {


		getScreenSize();


	}
	private: System::Void Game_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

		if (e->KeyCode == Keys::Up)
		{
			
			
				orbitrn.point2 = orbit4.point;
				orbitrn.radius2 = orbit4.getRadius();
			
		}

		if (e->KeyCode == Keys::Down)
		{
			     
				orbitrn.point2 = orbit3.point;
				orbitrn.radius2 = orbit3.getRadius();
			
		}

	}
private: System::Void Game_SizeChanged(System::Object^  sender, System::EventArgs^  e) {

	getScreenSize();
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
