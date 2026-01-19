#include <stdio.h>
#include <stdlib.h>    // for EXIT_FAILURE
#include <rte_eal.h>
#include <rte_lcore.h>
#include <rte_common.h>      // for rte_exit



int main(int argc, char *argv[])
{
    int ret;

    ret = rte_eal_init(argc, argv);
    if (ret < 0) {
        rte_exit(EXIT_FAILURE, "Error with EAL initialization\n");
    }

    printf("EAL initialized successfully\n");
    printf("Main lcore id: %u\n", rte_lcore_id());

    return 0;
}
