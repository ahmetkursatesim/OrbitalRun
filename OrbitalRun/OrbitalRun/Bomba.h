#include "OyunModel.h";
#pragma once



 class Bomba :public OyunModel{

		enum BombaYaşamDurumu {
			Created,
			Killed,


		};
	public: float BombaSüresi;
			BombaYaşamDurumu Yaşamdurumu;
	public: void Bomba_Durumu_Degiştir(BombaYaşamDurumu Yaşamdurumu){
				


	}



	};
