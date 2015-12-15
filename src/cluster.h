#ifndef CLUSTER_H_INCLUDED
#define CLUSTER_H_INCLUDED

#include <hiredis/hiredis.h>

#include "core.h"

void discover_cluster_slots(VRT_CTX, struct vmod_redis_db *db);

redisReply *cluster_execute(
    VRT_CTX, struct vmod_redis_db *db, task_priv_t *state,
    unsigned version, struct timeval timeout, unsigned argc, const char *argv[]);

#endif
