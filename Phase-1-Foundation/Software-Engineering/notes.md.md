## Software Engineering is complex. 

For example:

Game - Rome-Total War 3 million lines of code (MLOC)

Boeing 787 14MLOC

F-35 Fighter Jet 23MLOC

Windows 7 ~40MLOC

Windows 10 ~50MLOC

Facebook 61MLOC

Mac OS X ~90MLOC

Luxury passenger car 100MLOC



Application domain

* The *problems* are often very complex
* The *developers* are usually not domain experts

Communication among stakeholders (clients, developers)

* The stakeholders use different *vocabulary*: domain experts <--> developers <--> developers
* The stakeholders have different *background knowledge*.
* Human languages are inherently *ambiguous*.

Management of large software development projects

* Need to *divide* the project into pieces and *reassemble* the pieces
* Need to *coordinate* **many different parts** and **many different people**.

Coding software

* Creating useful software is a **complicated engineering process**.

Software quality problems]

* unreliable --> see ARIANE 5 rocket
* unsafe --> London Ambulance
* abandoned --> London Stock Exchange
* inflexible --> hard to change/maintain



Software development problems

* Over schedule and over budget by an order of magnitude!
* Does note meet user requirements
* Development of working code is slower than expected
* Progress is difficult to measure

For large software projects:

* 17% company threatening
* 45% over budget
* 7% over time
* 56% deliver less value



## Dealing With complexity

Design Goals

There are many desirable software quality characteristics

It is often impossible to achieve all of them simultaneously

Need to clarify understand the client's design goals..

Need to prioritize the design goals for a given project and base the development around these

Having clear design goals reduces the complexity of designing the systems!



Modular \& Incremental development

There is a limit to human understanding

1)Divide and Conquer

module: A part of a systems that it ,makes sense to consider separately.

But module have to interact with each other.

2\) Use Information hiding

Allow module s to interact only via interfaces

An interfaces abstracts and encapsulates a module thereby providing information hiding



An interface abstracts a module so the developer does not have to know how the module is implements to use it.

A module can be used by understanding only its interface.

This reduces the complexity of understanding the systems

An interface encapsulates a module so the developer cannot use knowledge about how the module is implemented.

A module can changed (internally) without affecting the rest of the system.

This reduces the complexity of maintaining the system.

Modular and incremental development using interfaces allows for:

* more productivity in team development
* fewer bugs in system development
* more maintainable software
* more reusable software

resulting in more predictable software development

This reduce the complexity of cost and time estimates for developing the system!



What do engineers do?
apply scientific knowledge, mathematics and ingenuity to develop solutions for technical problems

Engineers design materials, structures, and systems while considering the limitations imposed by practicality, regulation, safety and cost.

programming in the small --> coding

programming in the large --> software engineers

Software Engineers need to be able to :

* talk with users in terms of the application
* translate vague requirements into precise specifications
* build models of a systems at different levels of abstractions
* use and apply several development processes
* choose among design alternatives
* works in well-defined roles as part of a team

The reduces the complexity of building the system!



What is Software Engineering

Engineer principles --> It is a  disciplined development effort

economically...reliable...efficiently-->It has built-in quality

real machines--> It solves a real user problem

multi-person-->It requires a team effort

multi-version--> It is not a "one-time" development effort

A modeling activity

* requirements model --> models the user requirements
* solution model --> models the systems to be built

Need to match

A problem solving activity

* We search for an appropriate solution in the presence of change
* Therefore, it is not algorithmic, but it should be systematic

A knowledge acquisition activity

* not a linear process--> learn as you go, but may need to unlearn
* sometime, you may even need to start over!

A rationale management activity

* our assumptions and assumptions change --> bugs, technology, etc.
* thus, we may need to revisit decisions
* important to remember: "Why did we make this choice?" DOCUMENTATION

Summary

Dealing with software development complexity requires:

* having appropriate design goals
* using modular and incremental development techniques

From a technical viewpoint, software development consists of:

* software engineering(i.e., modelling and documenting system requirements and solutions-"programming-in-the-large"), and
* coding(i.e., building the system - "programming-in-the-small")

While coding is important software development activity, software engineering is ESSENTIAL to help reduce complexity and build high quality, more maintainable software systems!



