#include <iostream>
#include <string.h>
std::string teste(){
    
     std::string morse[26] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
        "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
        "..-", "...-", ".--", "-..-", "-.--", "--.."
    };
    std::string input;
    std::cout << "Digite o codigo morse correspondente a letra" << std::endl;
    for (int i = 0; i<26; i++){
        std::cout << char(65+i) << ": "; // 65 = A,66 = B, etc, na tabela ascii. char() pega a letra baseada no valor que está dentro.
        std::cin >> input;
        if (input != morse[i])
            return "Errou! O certo era: " + morse[i];
    }
    return "Parabens :)";
}

void inicio(){
    std::cout << teste() << std::endl;
    std::string escolha;
    while( !(escolha == "S" || escolha == "N")){ // Se a resposta não for nem sim e nem não pergunta denovo
    std::cout << "Deseja tentar novamente (S / N)?" << std::endl;
    std::cin >> escolha;
    }
    if(escolha == "S")
        inicio();
}

int main()
{
    inicio();
    return 0;
}