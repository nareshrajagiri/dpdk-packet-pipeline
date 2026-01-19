STEP 1 – DPDK Directory Structure

DPDK is organized as modular libraries rather than a single binary.

Key directories:
- lib/: Core DPDK libraries (EAL, mbuf, ethdev)
- drivers/: Poll Mode Drivers (hardware + virtual)
- examples/: Reference apps 
- app/: Official utilities like testpmd

Design decision:
- My application is developed out-of-tree.
- This preserves the integrity of the upstream code, simplifies upgrades where applications link against DPDK as an external dependency.
- This mirrors real industry usage and avoids modifying DPDK core.

Key takeaway:
- Applications link against DPDK libraries.
- PMDs abstract NIC hardware from applications.

