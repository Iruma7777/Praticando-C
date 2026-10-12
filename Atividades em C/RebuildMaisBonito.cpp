#include <iostream>
#include <limits>
#include <string>
#include <vector>

using namespace std;

// Tive que pedir pra IA deixar o codigo original que fiz mais legivel, pois estava tudo muito grudado 

int main() {
  vector<string> tasks;
  string buffer;
  int taskNumber = 0;
  int opc;
  int ligado = 1;

  // Mensagem inicial e menu
  cout << "Welcome to Task List Tool!" << endl << endl;

  cout << "Menu Options:" << endl;
  cout << "1. Add Task" << endl;
  cout << "2. View Tasks" << endl;
  cout << "3. Remove Task" << endl;
  cout << "4. Quit" << endl << endl;

  cout << "Task list system initialized and ready!" << endl;

  // Loop principal
  while (ligado) {

    cout << "Choose an option: ";

    // Se a leitura falhar (acabou a entrada), sai do loop
    if (!(cin >> opc)) {
      break;
    }

    // Limpa o '\n' que sobrou depois do número
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    switch (opc) {

    // 1. Adicionar tarefa
    case 1:
      getline(cin, buffer);
      tasks.push_back(buffer);

      cout << "Task \"" << buffer << "\" added successfully!" << endl;
      cout << "Total tasks: " << tasks.size() << endl;
      break;

    // 2. Ver tarefas
    case 2:
      if (tasks.empty()) {
        cout << "No tasks available." << endl;
      } else {
        int id = 1;

        cout << "Your Tasks:" << endl;

        for (const string &ver : tasks) {
          cout << id << ". " << ver << endl;
          id++;
        }

        cout << "Total tasks: " << tasks.size() << endl;
      }
      break;

    // 3. Remover tarefa
    case 3:
      cin >> taskNumber;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      if (taskNumber >= 1 && taskNumber <= (int)tasks.size()) {

        cout << "Task \"" << tasks.at(taskNumber - 1)
             << "\" removed successfully!" << endl;

        tasks.erase(tasks.begin() + (taskNumber - 1));

        if (tasks.empty()) {
          cout << "No tasks remaining." << endl;
          cout << "Total tasks: " << tasks.size() << endl;
        } else {
          int id = 1;

          cout << "Remaining Tasks:" << endl;

          for (const string &ver : tasks) {
            cout << id << ". " << ver << endl;
            id++;
          }

          cout << "Total tasks: " << tasks.size() << endl;
        }

      } else {
        cout << "Error: Invalid task number. Please enter a number between 1 "
                "and "
             << tasks.size() << "." << endl;
      }
      break;

    // 4. Sair
    case 4:
      cout << "Thank you for using Task List Tool!" << endl;
      ligado = 0;
      break;

    // Qualquer outra opção
    default:
      cout << "Invalid choice. Please try again." << endl;
      break;
    }
  }

  return 0;
}