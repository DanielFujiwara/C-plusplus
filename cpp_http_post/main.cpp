#include <string.h>
#include "HttpReq.h"
#include <iomanip>
int main(void)
{
    HttpRequest* Http;
    char http_return[4096] = {0};
    char http_msg[4096] = {0};
    strcpy(http_msg, "menling.naxclow.com\app/api/ApiDorrBell/doorBellSendBase64IMG");

    if(Http->HttpPost(http_msg,"deviceCode=test1060&base64=MTggIDEwODEg57ut5LiKDQoyNyAgODE35byA5aeLDQoNCg0KMTQ0Nw0KDQoNCjE4ICAgIDI1MjgrMjQyID0gMjc1MCAgICs0MzAgID0gMzE4MCAgICAgIDIuNy0yLjXml6DpmZAg6YeN5ZCvICDnlLXmsaAgMy42DQoyNyAgICA2NTc=&random=ADCFVG&token=asdfa", http_return)){
        std::cout << http_return << std::endl;
    }
    return 0;
}