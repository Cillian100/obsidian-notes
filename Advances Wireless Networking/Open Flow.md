- Open Flow is a network protocol that facilitates direct communication between a network system via ethernet.
- In traditional network design, each switch would contain a routing table that is used to decide how to route each packet, this routing table is largely static, it would be updated by the administrator individually on each router.
- In openflow, and SDN controller is the control plane, the SDN controller contains the logic and does the decision marking for how the network traffic should flow between the switches.
- The SDN controller establishes a connection to each switch to pass messages. This connection used Transmission Control Protocol (TCP) and is often encrypted with Transport Layer Security (TLS).

### Open Flow Architecture 
- **open flow controller:** process packet match, instruction & action set, pipeline processing
- **open flow switch:** secure channel, flow table 