
#include "Game.h"
#include "Parametre.h"

#pragma once



class OyunModel{

	public:int YörüngeSeviyesi;
	private:double Hýz;
	private:int Sayýsý;
	private:double angle;
	private:double radius;
	private:int Yaþam_süresi;
	public:System::Drawing::Point point;

	
	public:OyunModel(){
			   
			   



	}
	public:void yorungedeDolaþma(){


	}
	public:void hizDegiþtime(){
			
				
			   
			


	}
	public:double getHýz(){

			   return Hýz;

	}
	public:void setHýz(double Hýz){
			   this->Hýz = Hýz;

	}
	public:double getSayýsý(){

			   return Sayýsý;

	}
	public:void setSayýsý(int sayýsý){
			   this->Sayýsý = sayýsý;

	}
	public:double getAngle(){

			   return angle;

	}
	public:void setAngle(double angle){
			   this->angle = angle;

	}
	public:double getRadius(){

			   return radius;

	}
	public:void setRadius(double radius){
			   this->radius = radius;

	}
	public:double getYasamSüresi(){

			   return Yaþam_süresi;

	}
	public:void setYasamSüresi(double yaþam_süresi){
			   this->Yaþam_süresi = yaþam_süresi;

	}




	};
