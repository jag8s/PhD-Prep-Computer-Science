## Modeling Software Systems Using UML

**What is a UML**

UML is modeling language (not a software development methodology)

Understand the basic modeling component of UML class diagrams: class, association and generalization.



UML an object-oriented modeling

* Overview of UML
*  	Visual modelling language
*  	Incorporate current best practice of OO modeling
*  	Software Development methodology/ process neutral
*  	Industry OO modelling language for modeling systems.

Basic premise of the UML - A software system can modeled as a collection of collaborating objects.

* Object-oriented Modeling
* Why? It is natural to represent thins using objects.
* Allows direct representation of "tings" in a an application domain
* reduces the "semantic gap" between the application domain and the model
* Better represents how people then about reality
* An application domain is modeled as a collection of objects

OO Modelling \& Levels of Abstraction

* Requirement level --> We construct a requirements m=odel- We do not consider any aspects of the implementation of objects (FOCUS: identifying objects (concepts) in the application domain)
* Analysis \& Design Level --> We construct a solution model-We consider interfaces of objects (FOCUS: how objects interact in the solution)
* Implementation level --> We implement the solution model- We consider all details of objects (external and internal) (FOCUSL how to code objects)

The same OO concepts can be used at all levels.



**UML Class Diagram**

Class -A template used to create objects. A class describes a collection of objects having common: semantics, attributes, operations and relationships. A class is a classifier; and object is an instance.

A class is a factory for creating objects

A good class should capture one and one abstractions. It should have one major theme

A class should be named using the vocabulary of the application.

* Attribute - describes the data values held by objects of a class

name, type, visibility, initial value, multiplicity, changeability

* Operation - an operation describe s function or transformation that may be applied to or by objects in a class

Name, parameter names, result type

Visibility public, private, protected, package

An operation instance is called a method. An operation can have several methods that implement it (polymorphic operation)

Why classes to model systems? By abstracting a collection of objects and representing them as a class, the complexity of developing a system is reduced since it becomes easier to:

* understand the systems --> We need to understand only the classes, not the individual objects.
* specify the systems --> Classes provide a place to define and store common definitions only once

Choosing appropriate classes is an IMPORTANT DESIGN DECISION that helps promote modular design.

Association



**Association and Aggregation Relationships**

Association objection or classes within out diagram don't exits alone. we have to keep track of many links. We classify types of links together like HOLDS or IsWith. It describes a collection of links with common semantics. Conceptually association are inherently bi-directional. Can show navigability of association with an arrowhead. Two different classes can be related by several associations, as long as they have different meaning. The collection of class and association names must be unique.

type:

unary relates one class to itself

binary relates two class (in practice most associations are binary)

ternary relates three+ (hard to read, used sparingly)



* Multiplicity specifies a restriction on the number of objects in a class that may be related to an object in another class. How many relations can it have? one:one, one:many It is an application domain constraint.

minimum cardinality, the minimum number of links in which each object of C, can participate in association with A.

options participation(may not be related)

mandatory participation (must be related)

maximum cardinality the max number of links in which each object of C, can participate in association with A

A role is one end of an association. (important in unary relationships)

* Aggregation and Composition - a special type of association in which there is a "part-of" relationship between one class and another class. A component may exist independent of the aggregate object of which it is a part --> aggregations (sideways hollow diamond). A component5 may not exist independent of the aggregate object of which it is part-->composition (solid diamond)

When to use aggregation/composition?

would you use the phrase "part-of" to describe the association or name "has"? BE CAREFUL! Not all "has" associations are aggregations.

Is there an intrinsic asymmetry to the association where one object class is subordinate to the other(s)?

Are operations on the whole automatically applied to the part(s)--> composition.

The decision to use aggregation is a matter of judgement. It is a design decision.

It is not wrong to use association rather than aggregations! (In a real project, when in doubt, use association!)

Association Class

Generalization

* Inheritance
* Coverage

Constraints



Why Build Models

Models succinctly describe reality( they abstract reality) They show essential detail and filter out non-essential details

For software development this allows is to focus on the "big picture" --> programming-in-the-large

Such a focus allows us to better deal with the complexity of software development --> human limitation in understanding complex things

The result is better understanding of requirements, cleaner designs, and more maintainable systems

