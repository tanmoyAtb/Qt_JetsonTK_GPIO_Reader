# Qt_JetsonTK_GPIO_Reader
The Qt project reads from a 5 way **GPIO switches** connected to **JetsonTK1** (nVidia) to navigate its interface.

The read from GPIO switches attached to Jetson is done in a Qthread started by the MainWindow of Qt. Communications are done with signal and slot method. signals are generated in GPIO read thread, slots in Qt UI classes.

You must have Qt 4.3 or above installed.

RUN 

```bash build```

to compile and run the project.

OR

```sudo ./uiadams```

to run the project directly.
