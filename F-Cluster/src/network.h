#ifndef NETWORK_H
#define NETWORK_H

#include "link.h"
#include "node.h"
class network{
private:
    int size_x;
    int size_y;
    int size_z;
    node*** node_list;
    link*** link_list_xpos;
    link*** link_list_xneg;
    link*** link_list_ypos;
    link*** link_list_yneg;
    link*** link_list_zpos;
    link*** link_list_zneg;

public:
    void network_init(int x, int y, int z, int Injection_mode, int Routing_mode, int Sa_mode, int Injection_gap, int Packet_size, int Allow_VC_Num);
	int consume();
	int produce();
	void network_free();
	int network_max_busy_VC_num();
};

#endif
