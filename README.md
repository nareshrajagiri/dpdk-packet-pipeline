# DPDK Packet Pipeline

This project implements a userspace packet processing application using DPDK.
The application is developed out-of-tree and incrementally built to understand
DPDK internals, performance-oriented design, and Linux userspace networking.

## Environment
- OS: Ubuntu Linux
- Setup: VirtualBox
- DPDK Version: 22.11.3
- Note: Virtual PMDs are used due to lack of PCI passthrough.

## Milestones
1. EAL initialization and environment setup
2. Packet reception using RX burst
3. Packet parsing (Ethernet/IP/TCP/UDP)
4. Packet classification and statistics
5. L2 forwarding and performance monitoring

## Motivation
This project is intended for learning of DPDK concepts, userspace networking and packet processing.
