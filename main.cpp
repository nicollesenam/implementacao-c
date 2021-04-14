#include <iostream>
#include "pessoa.hpp"

using namespace std;

int main() {
    Pessoa p;
    Pessoa p2(18, "Pessoa Teste");

    p.setNome("Pessoa teste");
    cout << p.getNome() <<endl;
    cout << p.getIdade() << "  " << p2.getNome() <<endl;

    return 0;
}