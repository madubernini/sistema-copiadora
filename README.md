
# 📄 Copiadora da Maria Eduarda Bernini (Versão em C)

Este programa simula o atendimento de uma copiadora, permitindo ao usuário escolher um serviço de cópia, inserir a quantidade de páginas e, opcionalmente, adicionar serviços extras como encadernação.

## 💻 Funcionalidades

- Escolha entre 4 serviços principais:
  - `DIG`: Digitalização
  - `ICO`: Impressão Colorida
  - `IPB`: Impressão Preto e Branco
  - `FOT`: Fotocópia
- Inserção do número de páginas com aplicação de descontos:
  - 15% de desconto: 20 a 199 páginas
  - 20% de desconto: 200 a 1999 páginas
  - 25% de desconto: 2000 a 19999 páginas
- Serviços extras:
  - Encadernação simples: R$15
  - Encadernação capa dura: R$40
- Cálculo do valor total

## 🧾 Exemplo de Uso

```
Bem-vindo a Copiadora da Maria Eduarda Bernini

Entre com o tipo de serviço desejado
DIG - Digitalização
ICO - Impressão Colorida
IPB - Impressão Preto e Branco
FOT - Fotocópia
>>> DIG
Entre com o número de páginas: 250
Deseja adicionar mais algum serviço?
1 - Encadernação Simples
2 - Encadernação Capa Dura
0 - Não desejo mais nada
>>> 1
Total: R$ 245.00 (serviço: 1.10 * páginas: 200.00 + extra: 15.00)
```

## 🛠️ Compilação e Execução

Compile com:

```
gcc copiadora.c -o copiadora
```

Execute com:

```
./copiadora
```

## 📁 Estrutura

- `copiadora.c`: Código-fonte principal
- `README.md`: Instruções e documentação

---

Criado por Maria Eduarda Bernini
