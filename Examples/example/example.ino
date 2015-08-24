
#include "ppmintin.h"
PPMintIn chan1(A0);
PPMintIn chan2(A1);
PPMintIn chan3(A2);

setup(){
    Serial.begin(115200);
    chan1.begin();
    chan2.begin();
    chan3.begin();
}

loop(){
    Serial.println(chan1.getSignal());
    Serial.println(chan2.getSignal());
    Serial.println(chan3.getSignal());
}
