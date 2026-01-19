# STEP 3 – DPDK EAL Initialization

## What I implemented:
- Linked application against DPDK using pkg-config
- Initialized DPDK using rte_eal_init()
- Retrieved logical core ID

## What EAL does:
- Parses DPDK arguments
- Initializes hugepages
- Detects lcores and NUMA nodes
- Prepares Poll Mode Drivers

## Why this step is critical:
- No packet processing is possible without EAL
- EAL abstracts OS, CPU, and memory details

### Key APIs:
- rte_eal_init()
- rte_lcore_id()
