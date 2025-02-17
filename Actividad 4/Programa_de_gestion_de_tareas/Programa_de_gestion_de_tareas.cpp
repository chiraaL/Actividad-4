#include <iostream>
#include <vector>
#include <string>

using namespace std;

void agregarTarea(vector<string>& tareas) {
    string tarea;
    cin.ignore();
    getline(cin, tarea);
    tareas.push_back(tarea);
}

void eliminarTarea(vector<string>& tareas) {
    int index;
    for (size_t i = 0; i < tareas.size(); ++i) {
        cout << (i + 1) << ". " << tareas[i] << endl;
    }
    cin >> index;
    if (index > 0 && index <= tareas.size()) {
        tareas.erase(tareas.begin() + index - 1);
    }
}

void mostrarTareas(const vector<string>& tareas) {
    if (tareas.empty()) {
        cout << "No hay tareas.\n";
    } else {
        for (size_t i = 0; i < tareas.size(); ++i) {
            cout << (i + 1) << ". " << tareas[i] << endl;
        }
    }
}

int main() {
    vector<string> tareas;
    int opcion;

    do {
        cout << "1. Agregar tarea\n2. Eliminar tarea\n3. Mostrar tareas\n4. Salir\n";
        cin >> opcion;

        switch(opcion) {
            case 1: agregarTarea(tareas); break;
            case 2: eliminarTarea(tareas); break;
            case 3: mostrarTareas(tareas); break;
        }
    } while(opcion != 4);

    return 0;
}
