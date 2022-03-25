#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/curl/curl.h"
#include "funcoes.h"

static size_t write_callback(char *ptr, size_t size, size_t nmemb, void *userdata){
    data = ptr;
    return size * nmemb;
}

void makeRequest(){
  CURL *curl;
  CURLcode res;

  char url[] = "http://economia.awesomeapi.com.br/json/last/BRL-";
  strcat(url,code);

  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0);
    curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0);
    curl_easy_setopt(curl, CURLOPT_URL, url);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
    /* example.com is redirected, so we tell libcurl to follow redirection */
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

    /* Perform the request, res will get the return code */
    res = curl_easy_perform(curl);
    /* Check for errors */
    if(res != CURLE_OK)
      fprintf(stderr, "curl_easy_perform() failed: %s\n",
              curl_easy_strerror(res));
    else{
        findBid();
    }

    /* always cleanup */
    curl_easy_cleanup(curl);

  }
  return 0;
}

void findBid(){
    int index;
    char values[5];
    for (int i = 0; i < strlen(data); i++) {
         if(data[i] == 'b' && data[i+1] == 'i' && data[i+2] == 'd'){
            index = i+6;
            for(int j = 0; j < 5; j++){
                values[j] = data[index+j];
            }
         }
    }
    bid = atof(values);

    return 0;
}


