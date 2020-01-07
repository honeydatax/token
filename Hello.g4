grammar Hello;
program : ls + EOF ;

ls : 'hello' ID ;
ID : [a-z]+ ;
WS : [ \t\r\n]+ ->skip ;
