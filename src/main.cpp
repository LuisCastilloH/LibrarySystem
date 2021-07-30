/*
 * @author Luis Castillo
 *
 * ADD copyright...
 *
 * TODO: description...
 *
 * OPTIONS:
 *      -h                  Shows program usage
 *  TODO...
 *
 */
#include "../include/utils.h"
#include "../include/Material.h"
#include "../include/Disc.h"

#include <cstdio>
#include <cstdlib>
#include <getopt.h>
#include <libgen.h>

int main(int argc, char *argv[]) {
    int opt;
    int verbose = 0;
    Disc dic1;

    std::cout << "Entrando..." << std::endl;
    while ((opt = getopt(argc, argv, "hn:v")) != EOF) { //EOF is -1
        switch(opt) {
            case 'h':
                usage(basename(argv[0]), opt);
                break;
            case 'n':
                std::cout << "Welcome to the LibrarySystem program " << optarg;
                break;
            case 'v':
                verbose = 1;
                break;
            default:
                break;
        }
    }
    // call main function of the program --> ...
    if (verbose) printf("Program terminated with SUCESS\n");
    return 0;
}