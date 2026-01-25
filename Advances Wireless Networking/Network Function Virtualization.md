- The concept of transforming of hardware based network functions into software or virtual functions.
- The goal is separate network functions from the underlying dedicate hardware so that they can run on standard hardware. 

- Network function virtualisation aims to address problems by leveraging standard IT virtualisation technology to consolidate many network equipment types onto industry standards high volume servers, switches and storage, which could be located in Datacenters, Network Nodes and in the end user premise.

## SDN vs NFV
- Network function virtualisation is highly complementary to Software Defined Networking (SDN). These topics are mutually beneficial but are not dependent on each other. Network functions can be virtualized and deployed without and SND being required and vice versa. 
- SDN is focused on data centres, while VNF is geared towards [[Wireless WAN]]s and network services providers and operators. 
	- NFV visualises network functions and is used to recude the need for physical devices.
	- SDN helps organisation centralised network management and improve route network traffic.

### ESTI NFV Architecture Main Components: 
- **MANO** (management and orchestration)
- **NFVI** (NFV infrastructure)
- **NVF** (virtualisation network functions)
- **OSS** (operation support system)/**BSS** (business support systems)
- **EM** (element management)
## MANO - Management, Automation and Network Orchestration:
- NFV MANO is the basic framework for managing the deployment, provisioning and performance of virtual network functions.
- MANO is divided into three subsections:
	- **NFO Orchestration:**
		- NFV uses virtualisation technology to deploy new network functions and provision resources to existing VNFs.
	- **VNF Manager:**
		- a VIM keeps a record to virtual and physical resources allowing network operations to maintain operations and deploy new services.
	 - **Visualised Infrastructure Manager:** 
		- VNF managers standardise VNFs and increase compatibility of software defined network functions 

## NFVI - NFV Infrastructure
- provides the capability or functionality of providing an environment in which VNF can execute 
- creates a virtualization layer that sits above the hardware and abstracts the HW resources so they can be logically partitioned and provided to the VNF to perform their functions 

## OSS - Operation Support Systems / BSS - Business Support Systems
- deals with the operational side of network management 
- **OSS:** handles configuration, fault detection and service management 
- **BSS:** focuses on managing customer order, billing and product offerings
- togther, OSS and BSS ensure smooth operation and customer service in the NFV environment 
- 
## EM - Element Management 
- focuses on managing the performance, configuration and security of VNFs
- ensures that VNFs are functioning correctly and optimally


https://www.ietf.org/proceedings/88/slides/slides-88-opsawg-6.pdf
https://portal.etsi.org/NFV/NFV_White_Paper.pdf?_gl=1*199j2g3*_ga*MTA4OTcwMjI5LjE3Njg5OTYzMjU.*_ga_L34WJL1P2Z*czE3Njg5OTYzMjQkbzEkZzEkdDE3Njg5OTY4MjAkajUkbDAkaDA
https://www.ibm.com/think/topics/network-functions-virtualization#:~:text=NFV%20MANO%20is%20the%20basic,performance%20of%20virtualized%20network%20functions
https://www.tatacommunications.com/knowledge-base/mcc/network-functions-virtualisation-guide