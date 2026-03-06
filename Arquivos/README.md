# Estrutura de Dados II

## Estrutura e Organização de Arquivos

Este repositório apresenta um estudo sobre **arquivos, armazenamento de dados e técnicas de organização**, abordando desde a estrutura física do disco até os modelos de organização primária e secundária de arquivos de registros.

---

## Objetivo

Compreender como os dados são armazenados, organizados e acessados fisicamente e logicamente, analisando:

* Diferença entre dados transientes e persistentes
* Hierarquia de memória
* Estrutura física do disco rígido
* Operações de I/O
* Sistemas de arquivos
* Organização de registros e métodos de acesso

---

# 1. Dados

## 1.1 Classificação

### Dados Transientes

Mantidos temporariamente durante a execução de um programa (memória volátil).

### Dados Persistentes

Mantidos por longos períodos, armazenados fisicamente em mídias não voláteis e representados logicamente como registros e arquivos.

## 1.2 Representação

* **Representação Física:** armazenamento em mídia (disco, SSD, etc.)
* **Representação Lógica:** abstração em arquivos e registros
* O sistema operacional realiza o mapeamento entre essas duas camadas.

---

# 2. Mídias de Armazenamento

## 2.1 Armazenamento Primário

* Operado diretamente pela CPU
* Volátil
* Alta velocidade
* Baixa capacidade

Componentes:

* Registradores
* Cache
* Memória RAM

## 2.2 Armazenamento Secundário

* Não volátil
* Maior capacidade
* Acesso mais lento
* Dados precisam ser carregados para a memória principal antes do processamento

Tipos:

* Discos magnéticos (HD)
* Memória flash (SSD, pen drive)
* Discos ópticos (CD, DVD)
* Fitas magnéticas (acesso sequencial, utilizadas para backup)

---

# 3. Estrutura Física do Disco Rígido

A organização física impacta diretamente o desempenho das operações de I/O.

Componentes:

* **Prato** – Disco físico onde os dados são armazenados
* **Trilha** – Círculos concêntricos no prato
* **Setor** – Menor unidade física de armazenamento
* **Cilindro** – Conjunto de trilhas de mesmo diâmetro em diferentes pratos
* **Bloco (ou Página)** – Unidade lógica definida pelo sistema operacional (múltiplo do setor)

---

# 4. Operações de Entrada e Saída (I/O)

* A transferência de dados entre disco e memória ocorre em blocos.
* Cada operação de leitura ou escrita corresponde a uma operação de I/O.
* Um buffer em memória principal é utilizado para armazenar temporariamente o bloco transferido.

Processos:

* **Leitura:** disco → buffer → memória
* **Escrita:** memória → buffer → disco

---

# 5. Tempos de Acesso

O tempo total de acesso em discos magnéticos é composto por:

1. **Seek Time (Tempo de Busca)**
   Deslocamento do cabeçote até a trilha desejada.

2. **Rotational Latency (Latência Rotacional)**
   Espera até o setor desejado girar sob o cabeçote.

3. **Transfer Time (Tempo de Transferência)**
   Tempo efetivo de leitura ou gravação do bloco.

Tempo Total = Seek Time + Rotational Latency + Transfer Time

---

# 6. Sistema de Arquivos

O sistema de arquivos é responsável por fornecer uma visão lógica e organizada do disco.

## 6.1 Organização Lógica

* Arquivos (unidade básica de dados)
* Diretórios (estrutura de classificação)

## 6.2 Exemplos de Sistemas

| Sistema | Plataforma |
| ------- | ---------- |
| Ext4    | Linux      |
| NTFS    | Windows    |

---

# 7. Funções do Sistema de Arquivos

## 7.1 Funções de Baixo Nível (SO)

* Gerenciamento de blocos livres e ocupados
* Gerenciamento de espaço físico
* Escalonamento de requisições
* Cache
* Detecção e correção de erros
* Criptografia
* Compressão
<<<<<<< HEAD

## 7.2 Funções de Alto Nível (Usuário)

* Criar, mover e apagar arquivos
* Ler e escrever dados
* Manipular diretórios
* Controlar permissões
* Realizar backups

---

# 8. Interface com o Sistema

Operações realizadas por chamadas de sistema:

Manipulação de arquivos:

* open
* close
* read
* write

Manipulação de diretórios:

* mkdir
* rmdir
* cd
* ls

Cada processo mantém uma tabela de arquivos abertos, contendo descritores associados aos arquivos.

Exemplo em C:

```c
FILE *meu_arquivo;
meu_arquivo = fopen("arquivo.txt", "r");
```

---

# 9. Atributos de Arquivos (Metadados)

* Data de criação
* Tamanho
* Proprietário (ID do usuário)
* Grupo
* Permissões (r, w, x)
* Tipo (arquivo, diretório, link)

---

# 10. Arquivos de Registros

Aplicações frequentemente armazenam dados estruturados na forma de registros.

## 10.1 Conceitos Fundamentais

* **Entidade:** objeto real ou conceitual (ex: aluno, empregado)
* **Atributo:** característica da entidade (ex: nome, matrícula)
* **Registro:** conjunto de pares atributo-valor que identificam uma entidade
* **Arquivo:** coleção de registros lógicos

---

# 11. Terminologia Essencial

* **Registro Lógico:** sequência de campos (atributos)
* **Registro Físico:** armazenamento do registro lógico em blocos
* **Chave:** campo ou conjunto de campos identificadores
* **Chave Primária:** valor único
* **Chave de Acesso:** utilizada para pesquisa
* **Chave de Ordenação:** define a sequência física ou lógica

---

# 12. Formato de Registros

## Registro de Tamanho Fixo

* Número fixo de campos
* Tamanho constante

## Registro de Tamanho Variável

* Campos ou registros podem variar de tamanho

---

# 13. Organização de Arquivos

## 13.1 Organização Primária

Define como os registros são fisicamente armazenados.

* Sequencial Desordenado
* Sequencial Ordenado
* Hash (acesso direto)

## 13.2 Organização Secundária

Utiliza estruturas auxiliares (índices) para acesso eficiente.

* Arquivos Indexados

---

# Aplicabilidade Prática

Os conceitos estudados são fundamentais para:

* Implementação de bancos de dados
* Sistemas de gerenciamento de arquivos
* Sistemas embarcados
* Aplicações de alto volume de dados
* Otimização de algoritmos de busca
=======
>>>>>>> 82fe6aad55a6e256d8937aa9710b37ad8d715c1b

## 7.2 Funções de Alto Nível (Usuário)

* Criar, mover e apagar arquivos
* Ler e escrever dados
* Manipular diretórios
* Controlar permissões
* Realizar backups

---

# 8. Interface com o Sistema

Operações realizadas por chamadas de sistema:

Manipulação de arquivos:

* open
* close
* read
* write

Manipulação de diretórios:

* mkdir
* rmdir
* cd
* ls

Cada processo mantém uma tabela de arquivos abertos, contendo descritores associados aos arquivos.

Exemplo em C:

```c
FILE *meu_arquivo;
meu_arquivo = fopen("arquivo.txt", "r");
```

---

# 9. Atributos de Arquivos (Metadados)

* Data de criação
* Tamanho
* Proprietário (ID do usuário)
* Grupo
* Permissões (r, w, x)
* Tipo (arquivo, diretório, link)

---

# 10. Arquivos de Registros

Aplicações frequentemente armazenam dados estruturados na forma de registros.

## 10.1 Conceitos Fundamentais

* **Entidade:** objeto real ou conceitual (ex: aluno, empregado)
* **Atributo:** característica da entidade (ex: nome, matrícula)
* **Registro:** conjunto de pares atributo-valor que identificam uma entidade
* **Arquivo:** coleção de registros lógicos

---

# 11. Terminologia Essencial

* **Registro Lógico:** sequência de campos (atributos)
* **Registro Físico:** armazenamento do registro lógico em blocos
* **Chave:** campo ou conjunto de campos identificadores
* **Chave Primária:** valor único
* **Chave de Acesso:** utilizada para pesquisa
* **Chave de Ordenação:** define a sequência física ou lógica

---

# 12. Formato de Registros

## Registro de Tamanho Fixo

* Número fixo de campos
* Tamanho constante

## Registro de Tamanho Variável

* Campos ou registros podem variar de tamanho

---

# 13. Organização de Arquivos

## 13.1 Organização Primária

Define como os registros são fisicamente armazenados.

* Sequencial Desordenado
* Sequencial Ordenado
* Hash (acesso direto)

## 13.2 Organização Secundária

Utiliza estruturas auxiliares (índices) para acesso eficiente.

* Arquivos Indexados

---

# Aplicabilidade Prática

Os conceitos estudados são fundamentais para:

* Implementação de bancos de dados
* Sistemas de gerenciamento de arquivos
* Sistemas embarcados
* Aplicações de alto volume de dados
* Otimização de algoritmos de busca

---
