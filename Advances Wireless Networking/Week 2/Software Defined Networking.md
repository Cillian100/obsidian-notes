- A network management method that support dynamic programmable network configuration. 

### SDN Architecture
- **infrastructure layer:** consists of forwarding devices, such as data centre switches
- **control layer:** consists of SDN control software and communicates with forwarding devices
- **application layer:** users can build their own cloud management platforms 

### Open-Flow
- Open-flow is often misunderstood to be equivalent to SND -> no requirements for the use of openflow within an SDN 


- **Data Plane:** all the activities involving data packets sent by the end-user belong to this plane.
	- the data plane is responsible for processing data-carrying packets using a set rules specified by the control plane
	- the data planes may be implemented in physical hardware switches or in software
- **Control Plane:** all activities necessary to perform data plan activities but do not involve end-user data packets belong to this plane.


### SND Controller
- collects network information from hardware and sends this information to applications 