Complex products refer to high-cost, large-scale, high-tech, engineering-intensive products, subsystems, systems or facilities, covering automobiles, ships, robots, complex electromechanical systems and other fields, with complex structures, functions, and
behaviors. . Multi-resolution modeling and simulation research on how to effectively organize model structures of different resolutions and manage model simulation operations
in a unified manner to cope with different levels of simulation tasks is of great significance for the design and development, operation and maintenance of complex products.
This paper studies the multi-resolution modeling and simulation technology of complex
products, and achieves the following results:
The general process and basic requirements of multi-resolution modeling and simulation are analyzed. Aiming at the difficulty of constructing and maintaining the consistency
of multi-resolution models, the basic structure of multi-resolution entities is analyzed, and
a method for constructing multi-resolution entity models based on simulation data is proposed. Consistency maintenance during attribute mapping and simulation. Entity-level
and system-level resolution controllers are constructed to realize fine and efficient control
of multi-resolution system structures.
Aiming at the weakness of DEVS-based multi-resolution formal description in the
relative lack of agent behavior description, an extension method of its behavior modeling
ability is studied. Based on MR-DEVS, combined with the advantages of the agent-based
modeling method in describing the perception behavior, communication cooperation, evolutionary learning, etc. of the agent, a formal description specification for multi-resolution
models of complex products with coupling and closure is proposed. , the modeling process
is analyzed and the effectiveness is verified by combining with actual modeling cases.
Aiming at the problem of simulation resource utilization in multi-resolution simulation, an optimal configuration method based on historical simulation operation data is
proposed. Recommend solvers for models based on historical data and make predictions
about the resources needed to solve them. When the simulation resources are insufficient, the resolution switching event is pre-triggered for the system resolution controller
to process. Normally, simulation resources are configured by the subgraph partitioning
algorithm. In order to verify the effectiveness of the method, a model was constructed based on the DETEST dataset for verification.
Based on the basic requirements of multi-resolution modeling and simulation, a prototype system was designed, developed and verified. Build atomic models by editing, creating and integrating CAE software models, and implement atomic model simulators with open source solvers and CAE software’s own solvers; provide a variety of different
coupling network structures in the coupled model to realize models with different resolutions The simulation solution algorithm based on atomic simulator is constructed and designed. On this basis, a prototype system is designed and developed, and its effectiveness is verified with the vehicle dynamics model


![framework](https://github.com/linqq19/multi-resolution-modeling-and-simulation/assets/54255402/0df543c9-d2e3-438b-9144-e27bebeef48b)


https://github.com/linqq19/multi-resolution-modeling-and-simulation/assets/54255402/7e10214a-e5fe-45f8-90af-c5f33c7326e7

