# Debugging Insight:
- net_pcap PMD was not available in the default DPDK build
- EAL failed to parse vdev due to missing PMD
- Switched to net_null PMD for device-model validation
- PMD availability depends on build-time configuration
