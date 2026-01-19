# Agenda de Contatos em C

Este projeto é uma aplicação em **linguagem C** que implementa uma **agenda de contatos** simples, permitindo o gerenciamento de nomes e telefones por meio de um menu interativo no terminal.

O sistema utiliza **structs**, **vetores** e **controle de status** para armazenar e manipular os registros.

---

##  Funcionalidades

- Cadastrar novos contatos
- Listar contatos cadastrados
- Consultar contato pelo nome
- Alterar o telefone de um contato
- Excluir contatos
- Menu interativo no terminal

---

## Estrutura do Projeto
- ├── main.c
- └── README.md

##  Menu do Programa

Ao executar, o programa exibe o seguinte menu:

- 1 - Cadastrar
- 2 - Listar
- 3 - Consultar
- 4 - Alterar
- 5 - Excluir
- 6 - Sair

Descrição das opções

- Cadastrar: adiciona um novo contato com nome e telefone
- Listar: exibe todos os contatos ativos
- Consultar: busca um contato pelo nome
- Alterar: modifica o telefone de um contato existente
- Excluir: remove um contato da agenda
- Sair: encerra o programa

## 🛠️ Tecnologias Utilizadas

- Linguagem C
- Biblioteca padrão (stdio.h, string.h)
- Structs e vetores
- Controle de registros com status (ativo/inativo)

## 📚 Observações

- O sistema suporta até 100 contatos
- Registros excluídos não são apagados da memória, apenas marcados como inativos
- Projeto desenvolvido com foco educacional para prática de:
- Estruturas (struct)
- Manipulação de strings
- Menu interativo
- Lógica de programação em C
