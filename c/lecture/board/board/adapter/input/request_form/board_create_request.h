#ifndef __BOARD_CREATE_REQUEST_H__
#define __BOARD_CREATE_REQUEST_H__

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _board_create_request_form board_create_request_form;

struct _board_create_request_form
{
    char *title;
    char *writer;
    char *content;
};

board_create_request_form *init_board_create_request_form(
    char *title, char *writer, char *content);

char *get_board_create_request_form_title(board_create_request_form *);
char *get_board_create_request_form_writer(board_create_request_form *);
char *get_board_create_request_form_content(board_create_request_form *);

void clear_board_create_request_form(board_create_request_form *);

#ifdef __cplusplus
}
#endif

#endif