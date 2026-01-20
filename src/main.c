#include <stdio.h>
#include <stdlib.h>    // for EXIT_FAILURE
#include <rte_eal.h>
#include <rte_lcore.h>
#include <rte_common.h>      // for rte_exit
#include <rte_ethdev.h>


int main(int argc, char *argv[])
{
    int ret;
    uint16_t nb_ports;

    ret = rte_eal_init(argc, argv);
    if (ret < 0) {
        rte_exit(EXIT_FAILURE, "Error with EAL initialization\n");
    }

    nb_ports = rte_eth_dev_count_avail();
    
    printf("EAL initialized successfully\n");
    printf("Main lcore id: %u\n", rte_lcore_id());
    printf("Number of available Ethernet ports: %u\n", nb_ports);

    if(nb_ports==0)
    {
        rte_exit(EXIT_FAILURE," No Ethernet ports fount\n");

    }

    return 0;
}
