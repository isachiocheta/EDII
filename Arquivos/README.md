# Pesquisa e Ordenação de Dados: Arquivos

Este repositório contém notas de estudo e conceitos fundamentais sobre a Unidade 3.1 da disciplina de Pesquisa e Ordenação de Dados, focada na estrutura e gerenciamento de arquivos.

---

## Sumário

* [Conceitos de Dados](https://www.google.com/search?q=%23-conceitos-de-dados)
* [Hierarquia de Memória](https://www.google.com/search?q=%23-hierarquia-de-mem%C3%B3ria)
* [Estrutura do Disco Rígido](https://www.google.com/search?q=%23-estrutura-do-disco-r%C3%ADgido)
* [Tempos de Acesso](https://www.google.com/search?q=%23-tempos-de-acesso)
* [Sistemas de Arquivos](https://www.google.com/search?q=%23-sistemas-de-arquivos)
* [Organização de Registros](https://www.google.com/search?q=%23-organiza%C3%A7%C3%A3o-de-registros)

---

## Conceitos de Dados

Os dados são classificados conforme sua persistência no sistema:

* 
**Dados Transientes:** Mantidos por tempo limitado durante a execução de um programa.


* 
**Dados Persistentes:** Mantidos por longos períodos, representados em linguagens de programação como registros e arquivos.


* 
**Mapeamento:** O sistema operacional (SO) realiza a ponte entre a representação lógica (arquivos) e a representação física (mídia).



---

## Mídias de Armazenamento

### Armazenamento Primário (Memória Interna)

Operada diretamente pela CPU, possui acesso rápido, mas capacidade limitada e natureza volátil.

* 
**Registradores:** Localizados no topo da hierarquia.


* 
**Cache:** Acelera o desempenho retendo dados frequentes.


* 
**RAM:** Armazena temporariamente programas e dados em uso.



### Armazenamento Secundário (Memória Externa)

Não volátil e de maior capacidade, porém com acesso mais lento.

* 
**Discos Magnéticos:** HDs.


* 
**Memória Flash:** SSDs e Pen drives.


* 
**Discos Óticos:** CDs e DVDs.


* 
**Fitas Magnéticas:** Acesso sequencial, ideal para backups e registros históricos.



---

## Estrutura do Disco Rígido (HD)

O disco rígido possui uma organização física específica que impacta na velocidade de leitura:

* 
**Trilha:** Círculos concêntricos na superfície do disco.


* 
**Cilindro:** Conjunto de trilhas de mesmo diâmetro em diferentes pratos; dados aqui são recuperados mais rápido.


* 
**Setor:** Divisão física da trilha que não pode ser alterada.


* 
**Bloco (ou Página):** Divisão lógica feita pelo SO (múltiplo do setor) para transferência de dados.



---

##  Tempos de Acesso

A performance de leitura/escrita é determinada por três fatores:

1. 
**Seek Time (Procura):** Tempo para o cabeçote chegar à trilha desejada.


2. 
**Rotational Latency (Rotação):** Tempo de espera para o bloco girar até o cabeçote.


3. 
**Transfer Time (Transferência):** Tempo real de leitura ou escrita no bloco.



---

## Sistemas de Arquivos

É a parte do SO que organiza os dados logicamente através de arquivos e diretórios.

| Sistema | Sistema Operacional |
| --- | --- |
| **Ext4** | Linux 

 |
| **NTFS** | Windows 

 |

### Funções do Sistema de Arquivos

* 
**Baixo Nível:** Gerenciamento de blocos, correção de erros, criptografia e compressão.


* 
**Alto Nível:** Criar, ler, escrever, apagar arquivos e controlar direitos de acesso.



---

## Organização de Registros

Um arquivo é uma coleção de registros lógicos, onde cada registro possui campos que descrevem atributos de uma entidade.

Formatos de Registro:

* 
**Tamanho Fixo:** Campos com tamanho constante em todos os registros.


* 
**Tamanho Variável:** Registros podem ter número de campos ou tamanhos de campos distintos.



Tipos de Organização:

1. **Sequencial Desordenado:** Registros na ordem de inserção.
2. **Sequencial Ordenado:** Registros dispostos conforme uma chave de ordenação.
3. **Hash:** Acesso direto via cálculo de endereço.
4. **Indexado:** Estrutura auxiliar (índice) para acesso rápido independente da ordem física.

---