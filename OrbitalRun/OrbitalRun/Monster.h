#include "OyunModel.h"
#pragma once




 
class Monster : public OyunModel{
	public:System::Drawing::Point point2;
	public:double radius2;

		   enum MonsterYaşamDurumu {
			   Created,
			   Killed,
			   Activated

		   };



		   MonsterYaşamDurumu Yaşamdurumu;
	public: void Yaşam_Durumu_Degiştir(MonsterYaşamDurumu Yaşamdurumu){



	}



	};
