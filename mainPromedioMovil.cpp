#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
	 {
	float y0,y1,y2,y3,y4,y5,y6,y7,y8,y9,y10,y11,y12,y13,y14,y15,y16;
	float p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16;
	cout<< "Digite la secuencia de 17 valores, separados por espacios"<<endl;
	cin >>y0>>y1>>y2>>y3>>y4>>y5>>y6>>y7>>y8>>y9>>y10>>y11>>y12>>y13>>y14;
	p2=(y2+y1+y0)/3;
	p3=(y3+y2+y1)/3;
	p4=(y4+y3+y2)/3;
	p5=(y5+y4+y3)/3;
	p6=(y6+y5+y4)/3;
	p7=(y7+y6+y5)/3;
	p8=(y8+y7+y6)/3;
	p9=(y9+y8+y7)/3;
	p10=(y10+y9+y8)/3;
	p11=(y11+y10+y9)/3;
	p12=(y12+y11+y10)/3;
	p13=(y13+y12+y11)/3;
	p14=(y14+y13+y12)/3;
	p15=(y15+y14+y13)/3;
	p16=(y16+y15+y14)/3;
	
	cout<<"La secuencia de su promedio movil es:"<<endl;
	cout<<p2<<p3<<p4<<p5;
	
	return 0;
}
