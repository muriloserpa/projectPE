#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

#define MAX 10

//TADs

//var globais
//int i=10;

char *data; // Conteudo da Requisição
float bid; // Valor para a conversao

void makeRequest(char *code);
float findBid();
static size_t write_callback(char *ptr, size_t size, size_t nmemb, void *userdata);
int verifyCode(char *code);
#endif /* FUNCOES_H_INCLUDED */
