📚 Sistema de Gerenciamento Bibliotecário

Sistema de controle e organização de uma biblioteca, com foco em cadastro, empréstimos e gerenciamento de acervo.

🚧 Status: Em desenvolvimento

👨‍💻 Autor: João , Carlos  , Yasmin , Hadassa

💡 Visão Geral

Este projeto consiste em um Sistema Bibliotecário desenvolvido em linguagem C, com o objetivo de simular o funcionamento de uma biblioteca, permitindo o gerenciamento eficiente de livros e usuários.

O sistema busca:

Organizar o acervo de livros
Controlar empréstimos e devoluções
Simular operações reais de uma biblioteca
Servir como base para futuras evoluções (sistemas web ou banco de dados)
🚀 Funcionalidades
📌 Cadastros

📚 Livros

Título
Autor
Código
Disponibilidade

👤 Usuários

Nome
Identificação (ID ou CPF)
🔄 Operações

📖 Empréstimo de livros

Registro de retirada
Atualização do status do livro

📥 Devolução de livros

Liberação do livro no sistema

🔍 Consulta

Busca de livros disponíveis ou emprestados
📊 Relatórios
Exibição de dados no console
Listagem de livros cadastrados
Situação dos empréstimos
(Opcional) geração de arquivos .txt

 🏛️ Arquitetura do Sistema
🧭 Componentes principais

📚 Livros: controle do acervo
👤 Usuários: pessoas cadastradas
🔄 Empréstimos: controle de uso dos livros

🔄 Fluxo do Sistema

Usuário solicita livro
↓
Sistema verifica disponibilidade
↓
Livro é emprestado
↓
Status atualizado
↓
Usuário devolve livro
↓
Sistema libera o livro novamente


🧩 Arquitetura em Camadas

🟢 Camada 1 — Dados

Structs
Informações do sistema

🟡 Camada 2 — Processos

Empréstimos
Devoluções
Consultas

🔴 Camada 3 — Regras

Verificação de disponibilidade
Validação de dados
Controle de acesso

🏃 Metodologia
🟢 Etapa 1 — Base do Sistema
Cadastro de livros
Cadastro de usuários
🟡 Etapa 2 — Operações
Empréstimos
Devoluções
🔴 Etapa 3 — Melhorias
