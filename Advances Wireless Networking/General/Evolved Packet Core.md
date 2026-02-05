- A framework for providing coverage voice and data services on a 4G Long Term Evolution LTE Network 

## Evolved Packet Core Architecture 
1. **Mobility Management Entity:**
	- manages session states and authenticates and tracks users across the network
	- MEE manages thousands of [[eNodeB]] elements which us one of the key differences from requirements previously seen in 2G/3G
2. **Serving Gateway (S-GW)**:
	- connects EPC to the LTE radio access network (RAN) and routes IP data packets through the access network to the LTE core network
	- the SGW is a data plane element whose primary function is to manage user-plane mobility and act as a demarcation point between the RAN and core networks 
	- SGW maintains data paths between [[eNodeB]]s and the PDN Gateway
3. **Packet Data Node Gateway (P-GW):**
	- acts on the interface between the LTE network and other IP networks 
4. **Policy and Charging Rules Function (PCRF):**
	- supports service data flow detection and helps with policy enforcement and flow-based charging


https://www.3g4g.co.uk/Lte/LTE_WP_0903_AlcatelLucent.pdf