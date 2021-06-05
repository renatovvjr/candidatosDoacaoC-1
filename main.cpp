#include <iostream>
using namespace std;
//O programa receberá informações de 10 candidatos à doação de sangue. O programa deverá ler a idade e informar a seguinte condição: 
//- Se menor de 16 ou acima de 69 anos, não poderá doar;
//- Se tiver entre 16 e 17 anos, somente poderá doar se estiver acompanhado dos pais ou responsáveis (neste caso criar uma condição: "Está acompanhado de pais ou responsável: 1-sim ou 2-não);
//- Se  tiver entre 18 e 69 anos, poderá doar.

//Ao final o programa deverá mostrar quantos candidatos poderão doar sangue. 
int main() {
  int idade=0, doadorMenorIdoso=0, doadorAdolescente=0,doadorAdulto=0, simNao, podeDoar, naoPodeDoar, adolescente=0;
  
  for(int i=0; i<10; i++){
    cout << "Informe a idade do candidato à doação: ";
    cin >> idade;

    if(idade<16 || idade >69){
        doadorMenorIdoso++;
      }else if(idade>=16 && idade <= 17){
       cout<<"Está acompanhado de pais ou responsável? Digite [1 - SIM] ou [2 - NÃO]";
        cin >> simNao;
       if(simNao==1){
          doadorAdolescente++;
        }else{
          adolescente++;
        }
     }else{
      doadorAdulto++;
     } 
  }
    naoPodeDoar=doadorMenorIdoso+adolescente;
    podeDoar=doadorAdolescente+doadorAdulto;

    cout <<"A quantidade de candidatos à doação que NÃO atenderam aos critérios para doação de sangue foi: " <<naoPodeDoar;
    cout << "\nA quantidade de candidatos à doação que atenderam aos critérios para doação de sangue foi: "<<podeDoar;

  return 0; 

}