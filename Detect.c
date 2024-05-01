#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    FILE *file = fopen("log.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Your computer is safe.\n");
        MessageBox(NULL, "KEY-LOGGER NOT DETECTED", "INFORMATION", MB_OK | MB_ICONINFORMATION);
        return 0;
    }

    if (file != NULL){
        printf("Caution!!.. Keylogger Detected\n");
    }

    char line[100];
    printf("Contents of the file:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }    

    MessageBox(NULL, "KEY-LOGGER DETECTED", "CAUTION", MB_OK | MB_ICONWARNING);
    
    fclose(file);
    return 0;

}