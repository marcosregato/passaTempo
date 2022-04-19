#include <vector>
#include <iostream>
#include <random>

using namespace std;

vector<int> minhaLista(){

        vector<int> lista;

        random_device rd;
        mt19937 mt(rd());
        uniform_int_distribution<int> dist(-10,10);

        for(int i= 0; i < 5; i++){
            lista.push_back(dist(mt));
        }

        return lista;
    }

 void somaValoresSequencial(){

        int result = 0;
        int pos   = 1;
        vector<int> lista;

       vector<int> lista_2 = minhaLista();

        for(int indice = 0; indice < lista_2.size(); indice++){
            if(indice < pos){
                result = result + lista_2[indice];
                lista.push_back(result);
            }
            pos++;
        }

        int max_num = 0;

        for(int indice =0; indice <= lista.size(); indice ++){
            if(lista[indice] > max_num){
                max_num = lista[indice];
            }
        }
        cout << max_num;
    }

int main(){
 somaValoresSequencial();
}
