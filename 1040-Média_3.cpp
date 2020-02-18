#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float N1, N2, N3, N4, MEDIA, R;
	cin >> N1 >> N2 >> N3 >> N4;
	MEDIA = (N1*2 + N2*3 + N3*4 + N4)/10;
	cout << fixed << setprecision(1);
	cout << "Media: " << MEDIA << endl;
	if(MEDIA >= 7.00)
	{
		cout << "Aluno aprovado." << endl;
	}else
	{
    if(MEDIA < 5.00) cout << "Aluno reprovado." << endl;
  	else
	 {
	 	cout << "Aluno em exame." << endl;
	 	cin >> R;
	 	cout << "Nota do exame: "<< R << endl;
	 	MEDIA = (MEDIA + R) / 2;
	 	if(MEDIA >= 5.0) cout << "Aluno aprovado." << endl;
	 	else cout << "Aluno reprovado." << endl;
	 	cout << "Media final: " << MEDIA << endl;
	 }
	}
	return 0;
}
