- Open Flow is a network protocol that facilitates direct communication between a network system via ethernet.
- In traditional network design, each switch would contain a routing table that is used to decide how to route each packet, this routing table is largely static, it would be updated by the administrator individually on each router.
- In openflow, and SDN controller is the control plane, the SDN controller contains the logic and does the decision marking for how the network traffic should flow between the switches.
- The SDN controller establishes a connection to each switch to pass messages. This connection used Transmission Control Protocol (TCP) and is often encrypted with Transport Layer Security (TLS).

- OpenFlow is a network communication protocol used between controllers and forwarders in an SND archiecture.
	- the core idea of SND is to seperate the forwarding plane from the control plane.

### Open Flow Architecture 
- **Open Flow Controller:** 
	- an open flow controller is the brain of the [[Software Defined Networking]] architecture and is located at the control layer to instruct data forwarding through the OpenFlow protocol 
- **Open Flow Switch Channel:**
	- a secure channel is established between a controller and an open flow switch, through this channel the controller controls and manages the switch and receives feedback from the switch 
- **Open Flow Switch:**
	- open flow switch is mainly responsible for forwarding at the data layer


https://info.support.huawei.com/info-finder/encyclopedia/en/OpenFlow.html