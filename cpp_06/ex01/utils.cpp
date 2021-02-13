#include "Data.hpp"

char make_random_char(){
    int randomChar = rand() % 62;
    char res;
    if (randomChar < 26){
        res = static_cast<char>(97 + randomChar);
        return (res);
    }
    else if (randomChar < 52){
        res = static_cast<char>(65 + randomChar - 26);
        return (res);
    }
    else{
        res = static_cast<char>(48 + randomChar - 52);
        return (res);
    }
}

void * serialize(void){
    std::string rand_str1;
    std::string rand_str2;
	srand(time(0));
    int *rand_int = new int (rand());

    for (int i = 0; i < 8; i++){
        rand_str1.insert(i, 1, make_random_char());
        rand_str2.insert(i, 1, make_random_char());
    }
    rand_str1[8] = '\0';
    rand_str2[8] = '\0';

    std::cout << "Data before serialization:" << std::endl;
    std::cout << rand_str1 << std::endl << *rand_int
              << std::endl << rand_str2 << std::endl;

    char * ser_data = new char[sizeof(char) * 16 + sizeof(int)];
    char * int_arr = reinterpret_cast<char *>(rand_int);
    
    int i;
    for(i = 0; i < 8; i++){
        ser_data[i] = rand_str1[i];
    }
    for (i = 0; i < static_cast<int>(sizeof(int)); i++){
        ser_data[i + 8] = int_arr[i];
    }
    for (int j = 0; j < 8; j++){
        ser_data[i + 8 + j] = rand_str2[j];
    }

    delete rand_int;
    return reinterpret_cast<void *>(ser_data);
}

Data * deserialize(void * raw){
    Data * data = new Data;
    char * raw_data = reinterpret_cast<char *>(raw);
    char tmp_int[static_cast<int>(sizeof(int)) + 1];
    int * raw_int;
    int i;
    for (i = 0; i < 8; i++){
        data->s1.insert(i, 1, raw_data[i]);
    }
    for (i = 0; i < static_cast<int>(sizeof(int)); i++){
        tmp_int[i] = raw_data[i + 8];
    }
    tmp_int[i] = '\0';
    raw_int = reinterpret_cast<int *>(tmp_int);
    for (int j = 0; j < 8; j++){
        data->s2.insert(j, 1, raw_data[i + 8 + j]);
    }
    data->n = *raw_int;
    return data;
}