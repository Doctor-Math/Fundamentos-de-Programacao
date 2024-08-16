#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int opc = 0, respI, respII, respIII, respIV, acumulador = 0;
    
    cout << "\nBem-vindo à clínica para problemas respiratórios!";
    cout << "\nPor favor, indique, digitando 1 para presente ou 0 para ausente, quais dos seguintes sintomas estão sendo sentidos por ti:";
    
    cout << "\nSintoma - Infecção nos pulmões:";
    cin >> respI;
    acumulador += respI;
    opc += respI;
    
    cout << "\nSintoma - Temperatura anormal:";
    cin >> respII;
    acumulador += respII;
    opc += respII;
    
    if (opc == 2) {
        cout << "\nO seu diagnóstico é condizente com a pneumonia.";
    } else {
        cout << "\nSintoma - Coriza:";
        cin >> respIII;
        acumulador += respIII;
        
        cout << "\nSintoma - Espirros:";
        cin >> respIV;
        acumulador += respIV;
        
        if (acumulador >= 2) {
            cout << "\nSeu diagnóstico é condizente com infecção pulmonar.";
        } else {
            cout << "\nSeu diagnóstico é condizente com a gripe.";
        }
    }
    
    return 0;
}
