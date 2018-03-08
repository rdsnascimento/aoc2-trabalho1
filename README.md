# Trabalho 1 - Arquitetura e Organização de Computadores
## Descrição

Neste primeiro trabalho, os alunos deverão implementar uma calculadora de tempo médio de acesso para memória parametrizável.

A assinatura da função a ser implementada é:

        uint32_t tempo_medio(uint32_t acesso_l1, float t_miss_l1, uint32_t acesso_l2, float t_miss_l2, uint32_t acesso_l3, float t_miss_l3, uint32_t acesso_mem);

Onde _acesso\_l1_ é o tempo em nanossegundos para acessar o primeiro nível e _t\_miss\_l1_ é a porcentagem de falhas no primeiro nível. Da mesma forma, há parâmetros para o segundo e terceiro nível de _caches_, bem como para o tempo de acesso da memória principal.

Caso o tempo de acesso de um nível seja definido como _zero_, o nível (e todos os níveis abaixo com a excessão da memória) são desconsiderados.

A função retorna o tempo médio de acesso calculado em nanossegundos. O valor final deve ser arredondado para cima, caso haja necessidade. Se qualquer parâmetro for inválido, a função deverá retornar _zero_.

__IMPORTANTE__: só modifique o arquivo _tm.c_.

## Produtos

* Implementação (*tm.c*)

## Cronograma

* Envio da versão final: _20/10/2017_ 


