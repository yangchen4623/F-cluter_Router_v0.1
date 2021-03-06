#ifndef NODE_H
#define NODE_H
#include "flit.h"
#include "router.h"
#include "local_unit.h"
class node{
public:
    char cur_x;
    char cur_y;
    char cur_z;

    flit* in_xpos;
    flit* in_ypos;
    flit* in_zpos;
    flit* in_xneg;
    flit* in_yneg;
    flit* in_zneg;

    flit in_latch[PORT_NUM];
    flit* in_latch_ptrs[PORT_NUM];
    flit* inject_latch_ptrs[PORT_NUM];

    bool* inject_avail_ptrs[PORT_NUM];
    flit* eject_ptrs[PORT_NUM];


    flit out_xpos;
    flit out_ypos;
    flit out_zpos;
    flit out_xneg;
    flit out_yneg;
    flit out_zneg;

    int injection_mode;
    int routing_mode;
    int SA_mode;

    router internal_router;
 //   local_unit app_core;

	void node_init(int Cur_x, int Cur_y, int Cur_z, flit* In_xpos, flit* In_ypos, flit* In_zpos, flit* In_xneg, flit* In_yneg, flit* In_zneg, int Injection_mode, int Routing_mode, int Sa_mode, int Injection_gap, int Packet_size);
    int consume();
	int produce();
    void node_free();
    




};

#endif
