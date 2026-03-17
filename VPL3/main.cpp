#include <iostream>

using namespace std;

void func(int &a, int *b, int c) {
    a = a + 1;
    *b = *b + 1;
    c = c + 1;
}

int main(){

    // 1) Declare uma variável do tipo inteiro e preencha com o valor informado na entrada
    int n1;
    cin >> n1;
    
    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo
    int *ptr = nullptr;

    // 3) Declare um vetor de inteiros com tamanho informado na entrada e preencha com dados lidos da entrada
    int tam;
    cin >> tam;
    int *vetor = new int[tam];
    for(int i = 0; i < tam; i++) cin >> vetor[i];

    // 4) Imprima o ENDEREÇO da variável declarada em (1)
    cout << &n1 << endl;

    // 5) Imprima o VALOR da variável declarada em (1)
    cout << n1 << endl;

    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    cout << &ptr << endl;
    
    // 7) Imprima o VALOR da variável declarada em (2)
    cout << ptr << endl;

    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    cout << &vetor << endl;

    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    cout << &vetor[0] << endl;

    // 10) Imprima o VALOR da primeira posição da variável declarada em (3)
    cout << vetor[0] << endl;

    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    ptr = &n1;

    // 12) Imprima o VALOR da variável declarada em (2)
    cout << ptr << endl;

    // 13) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << *ptr << endl;

    // 14) Coloque o VALOR '5' no ENDEREÇO apontado por (2)
    *ptr = 5;

    // 15) Imprima o VALOR da variável declarada em (1)
    cout << n1 << endl;

    // 16) Atribua o VALOR da variável (3) à variável declarada em (2)
    ptr = vetor;

    // 17) Imprima o VALOR da variável declarada em (2)
    cout << ptr << endl;

    // 18) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << *ptr << endl;

    // 19) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
    ptr = &vetor[0];

    // 20) Compare o valor variáveis (2) e (3), imprimindo 'S' se forem iguais e 'N' se forem diferentes
    if (ptr == vetor) cout << "S" << endl; else cout << "N" << endl;

    // 21) Imprima o VALOR da variável declarada em (2)
    cout << ptr << endl;

    // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << *ptr << endl;

    // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)
    for(int i = 0; i < tam; i++) ptr[i] = ptr[i] * 10;

    // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)
    for(int i = 0; i < tam; i++) {
        cout << vetor[i] << (i == tam - 1 ? "" : " ");
    }
    cout << endl;

    // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
    for(int i = 0; i < tam; i++) {
        cout << *(vetor + i) << (i == tam - 1 ? "" : " ");
    }
    cout << endl;

    // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
    for(int i = 0; i < tam; i++) {
        cout << *(ptr + i) << (i == tam - 1 ? "" : " ");
    }
    cout << endl;

    // 27) Atribua o ENDEREÇO da última posição de (3) à variável declarada em (2)
    ptr = &vetor[tam - 1];

    // 28) Imprima o VALOR da variável declarada em (2)
    cout << ptr << endl;

    // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << *ptr << endl;

    // 30) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
    int **pptr = &ptr;

    // 31) Imprima o VALOR da variável declarada em (30)
    cout << pptr << endl;

    // 32) Imprima o ENDEREÇO da variável declarada em (30)
    cout << &pptr << endl;

    // 33) Imprima o VALOR guardado no ENDEREÇO apontado por (30)
    cout << *pptr << endl;

    // 34) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (30)
    cout << **pptr << endl;

    // 35) Crie 3 variáveis interiras e leia o valor delas da entrada
    int v1, v2, v3;
    cin >> v1 >> v2 >> v3;

    // 36) Chame a função criada em (0) passando as 3 variáveis criadas em (35) como parâmetro.
    func(v1, &v2, v3);
    
    // 37) Imprima o valor das 3 variáveis criadas em 35, uma por linha
    cout << v1 << endl << v2 << endl << v3 << endl;
    
    delete[] vetor;
    return 0;
}