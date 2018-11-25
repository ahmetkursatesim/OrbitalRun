#include "OyunModel.h"
#pragma once




 
class Monster : public OyunModel{
	public:System::Drawing::Point point2;
	public:double radius2;

		   enum MonsterYaþamDurumu {
			   Created,
			   Killed,
			   Activated

		   };



		   MonsterYaþamDurumu Yaþamdurumu;
	public: void Yaþam_Durumu_Degiþtir(MonsterYaþamDurumu Yaþamdurumu){



	}



	};
