#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Ler o número de alunos
    int n;
    cin >> n;
    int nota;
    string nome;
    // Criar o map para armazenar as notas
    map<string, int> grades;
    
    // TODO: Escreva seu código aqui
    // Ler o nome e a nota de cada aluno e adicionar ao map
     for(int i = 0; i < n; i++){
        cin >> nome >> nota;
        grades.insert({nome,nota});
     }
    
    // Imprimir os resultados
    cout << "Student Grades:" << endl;
    // TODO: Use um loop for baseado em intervalo para imprimir a nota de cada aluno
    for(const auto& notas : grades){
        cout << notas.first << ": " << notas.second << endl;
    }
    
    // Imprimir o número total de alunos
    cout << "Total students: " << grades.size() << endl;
    
    return 0;
}