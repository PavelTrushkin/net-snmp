#ifndef DELIVERBYNOTIFY_H
#define DELIVERBYNOTIFY_H 1

void init_mteTrigger(void);

void parse_deliver_config(const char *, char *);
void free_deliver_config(void);

void deliver_execute(void);

#endif /* deliverByNotify_h */
