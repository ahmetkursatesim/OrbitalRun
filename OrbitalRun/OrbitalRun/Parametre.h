
#pragma once

class Paramtere{
private:int ilkYörüngeSayısı = 2;
private:double ilkorbitronHızı = 2.0;
private:int ilkCanavarSayısı= 2;
private:int ilkCanavarHız = 2;

public:double getilkYörüngeSayısı(){

		   return ilkYörüngeSayısı;

}
public:void setilkYörüngeSayısı(double ilkYörüngeSayısı){
		   this->ilkYörüngeSayısı = ilkYörüngeSayısı;

}

public:double getilkorbitronHızı(){

		   return  ilkorbitronHızı;

}
public:void setilkorbitronHızı(double  ilkorbitronHızı){
		   this->ilkorbitronHızı = ilkorbitronHızı;

}


};