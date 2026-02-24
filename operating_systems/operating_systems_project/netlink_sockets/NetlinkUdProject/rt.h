/*
 * =====================================================================================
 *
 *       Filename:  rt.h
 *
 *    Description: This file has the data structures and routines for Routing Table Management in kernel space
 *  
 * =====================================================================================
 */

#ifndef __RT__
#define __RT__

#include "gluethread/glthread.h"

typedef enum rt_bool_{

    RT_FALSE,
    RT_TRUE
} rt_bool_t;

typedef struct rt_entry_{

    char dest_ip[16];
    char mask;
    char gw_ip[16];
    char oif[32];
    glthread_t rt_entry_glue;
} rt_entry_t;

GLTHREAD_TO_STRUCT(rt_entry_glue_to_rt_entry, 
    rt_entry_t, rt_entry_glue);

typedef struct rt_table_{

    glthread_t head;
} rt_table_t;

void
rt_init_rt_table(rt_table_t *rt_table);

rt_bool_t
rt_add_new_rt_entry(rt_table_t *rt_table,
    char *dest_ip, char mask, char *gw_ip, char *oif);

rt_bool_t
rt_delete_rt_entry(rt_table_t *rt_table,
    char *dest_ip, char mask);

rt_bool_t
rt_update_rt_entry(rt_table_t *rt_table,
    char *dest_ip, char mask, 
    char *new_gw_ip, char *new_oif);

void
rt_clear_rt_table(rt_table_t *rt_table);

void
rt_free_rt_table(rt_table_t *rt_table);

void
rt_dump_rt_table(rt_table_t *rt_table);

#endif /* __RT__ */
