#include "bintree.h"
#include "tree_printer.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int string_array_length(const char **string_array) {
    if(!string_array)
        return 0;

    int length = 0;
    while(*string_array++) {
        length++;
    }
    return length;
}

int string_equal(const char *string1, const char *string2) {
    return !strcmp(string1, string2) ? 1 : 0;
}

char *string_lstrip(const char *string) {
    int not_whitespace_index = 0;
    size_t i;
    for(i = 0; i < strlen(string); i++) {
        if(isspace(string[i]))
            not_whitespace_index++;
        else
            break;
    }
    char *new_string = strdup(string+not_whitespace_index);
    return new_string;
}

char *string_rstrip(const char *string) {
    int not_whitespace_index = strlen(string);
    int i;
    for(i = strlen(string)-1; i >= 0; i--) {
        if(isspace(string[i]))
            not_whitespace_index--;
        else
            break;
    }
    char *str_tmp = strdup(string);
    str_tmp[not_whitespace_index] = '\0';
    char *new_string = strdup(str_tmp);
    free(str_tmp);
    return new_string;
}

char *string_lrstrip(const char *string) {
    char *lstriped_string = string_lstrip(string);
    char *rstriped_string = string_rstrip(lstriped_string);
    free(lstriped_string);
    return rstriped_string;
}

char **string_split(const char *line, const char *separators, int max_split) {
    int array_size = 0;
    char *token = NULL, *str = NULL, *tofree = NULL;
    char **array = (char **) calloc(array_size+1, sizeof(char **));
    array_size++;

    tofree = str = strdup(line);
    if(max_split != 0) {
        while(max_split && (token = strsep(&str, separators))) {
            if(!string_equal(token, "")) {
                char **tmp_array = (char **) calloc(array_size+1, sizeof(char **));
                int i;
                for(i = 0; i < array_size-1; i++) {
                    tmp_array[i] = array[i];
                }
                tmp_array[array_size-1] = strdup(token);

                free(array);
                array = tmp_array;

                array_size++;
                max_split--;
            }
        }
    } else {
        free(array);
        array = (char **) calloc(2, sizeof(char **));
        array[0] = strdup(str);
    }
    free(tofree);

    return array;
}


root *tree_root;
node *cur_node;
void init_root() {
    tree_root = cur_node = create_root(0);
}

char **parse_command_on_args(const char *command) {
    char *striped_line = string_lrstrip(command);
    char **args = string_split(command, " ", -1);
    free(striped_line);
    return args;
}

void help() {
    printf(
        "help:     print list of commands\n"
        "info:     print count of leaves, inner nodes, nodes and check if tree is heap\n"
        "drawtree: draw ascii view of tree\n"
        "draw:     draw ascii view of tree started on current node\n"
        "set:      set current node to value\n"
        "root:     go back to root node\n"
        "back:     go back to parent node\n"
        "left:     go to left node from this if possible\n"
        "right:    go to right node from this if possible\n"
        "addleft:  add new node on left or right side\n"
        "addright: add new node on left or right side\n"
        "remleft:  remove left node and all subnodes\n"
        "remright: remove right node and all subnode\n"
        "save:     save tree to file\n"
        "load:     load tree from file\n"
        "clear:    clear tree\n"
        "exit:     exit from program\n"
	);
}

int get_number(char *string, int *number) {
    char *end;
    *number = strtol(string, &end, 10);
    if(string == end) 
        return 0;

    return 1;
}

void string_free_splited_array(char **string_array) {
    int i;
    for(i = 0; string_array[i]; i++) {
        free(string_array[i]);
    }

    free(string_array);
}

int main() {
    printf("Enter commands after greeting symbols '>>'. To show list of command print 'help'. To exit print 'exit'\n");
    init_root();
    while(1) {
        printf(">> ");

        char *line = NULL;
        size_t size;
        getline(&line, &size, stdin);
        line[strlen(line)-1] = '\0';

        char **args = parse_command_on_args(line);
        int args_count = string_array_length((const char **) args);
        if(args_count >= 1) {
            if(string_equal(args[0], "help")) {
                
		help();
    
            } else if(string_equal(args[0], "info")) {
                
                printf("leaves: %u\ninner nodes: %u\nnodes: %u\nis heap: %s\n", get_leaves(tree_root), get_inner_nodes(tree_root), get_nodes(tree_root), is_tree_heap(tree_root) ? "true" : "false");
                
            } else if(string_equal(args[0], "drawtree")) {
                
                print_ascii_tree(tree_root);
                
            } else if(string_equal(args[0], "draw")) {
                
                print_ascii_tree(cur_node);
                
            } else if(string_equal(args[0], "set")) {
                if(args_count >= 2) {
                    int number;
                    if(get_number(args[1], &number)) {
                        set_node_value(cur_node, number);
                    } else {
                        printf("error: not number argument '%s'\n", args[1]);
                    }
                } else {
                    printf("error: not enought arguments\n");
                }
            } else if(string_equal(args[0], "addleft")) {
                if(args_count >= 2) {
                    int number;
                    if(get_number(args[1], &number)) {
                        add_node(cur_node, left, number);
                    } else {
                        printf("error: not number argument '%s'\n", args[1]);
                    }
                } else {
                    printf("error: not enought arguments\n");
                }
            } else if(string_equal(args[0], "addright")) {
                if(args_count >= 2) {
                    int number;
                    if(get_number(args[1], &number)) {
                        add_node(cur_node, right, number);
                    } else {
                        printf("error: not number argument '%s'\n", args[1]);
                    }
                } else {
                    printf("error: not enought arguments\n");
                }
            } else if(string_equal(args[0], "root")) {
                cur_node = go_to_root(cur_node);
            } else if(string_equal(args[0], "back")) {
                cur_node = change_node(cur_node, backward);
            } else if(string_equal(args[0], "left")) {
                cur_node = change_node(cur_node, left);
            } else if(string_equal(args[0], "right")) {
                cur_node = change_node(cur_node, right);
            } else if(string_equal(args[0], "remleft")) {
                remove_node(cur_node, left);
            } else if(string_equal(args[0], "remright")) {
                remove_node(cur_node, right);                
            } else if(string_equal(args[0], "save")) {
                if(args_count >= 2) {
                    serialize_tree(tree_root, args[1]);
                } else {
                    printf("error: not enought arguments\n");
                }       
            } else if(string_equal(args[0], "load")) {
                if(args_count >= 2) {
                    free_root(tree_root);
                    tree_root = deserialize_tree(args[1]);
                    if(tree_root == NULL) {
                        printf("init tree root with o\n");
                        tree_root = create_root(0);
                    }
                } else {
                    printf("error: not enought arguments\n");
                }           
            } else if(string_equal(args[0], "clear")) {
                tree_root = cur_node = clear_tree(tree_root);
            } else if(string_equal(args[0], "exit")) {
                string_free_splited_array(args);
                break;
            } else {
                printf("error: unknown command\n");
            }
        } else {
            printf("error: empty line\n");
        }

        string_free_splited_array(args);
    }

    free_root(tree_root);

    return 0;
}