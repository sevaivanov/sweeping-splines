# Sweeping Splines

This project is generating 3D shapes by drawing splines with modern OpenGL in C++. These polygon curves are used as input for translational or rotational sweeping to create three dimentional shapes. A user can explore these artifacts using controls to zoom in, move around and rotate the model.

![](images/rotational_umbrella-2.png)
![](images/rotational_umbrella-3.png)

More artsy shapes on [rotation-wo-radians](https://github.com/sevaivanov/sweeping-splines/tree/rotation-wo-radians) branch :

![](images/rotational_sharp_bowl-1.png)

## Setup

It was tested on Arch Linux.

### Dependencies

    # Arch Linux
    sudo pacman -S glew glm glfw-x11 mesa-demos

### Compiling:

    make arch       # Arch Linux
    make linux      # GNU / Linux (general)

## Usage

An example command:

    ./run.sh <name>

### Controls

    [Splines Drawing]
        
        mouse-l             marks control points in the window
        scroll              zoom in / zoom out (z)

        enter x 1           generates spline
        enter x 2           goes to next spline
        
        s                   generate spline
        l                   switch to previous spline
        r                   switch to next spline
        c                   print cursor coordinates
        
        backspace           resets the application

    [3D Shape]
        
        mouse-l + move      rotate on (x, y)
        
        arrows              rotate on (x, y)
        
        w                   move up
        s                   move down
        a                   move left
        d                   move right

        t                   display triangles
        l                   display lines
        p                   display points


## Roadmap

### Requierements

* ~~User decides whether to have a translational “T” or rotational sweep “R” (through console)~~

* ~~The user then marks control points in the window with the mouse (assume XZ plane, Y=0). The X and Z coordinates of each point should then relate to the window coordinates where the user has clicked.~~

* ~~User can then press “Enter” which computes and draws the spline.~~
    
    * ~~If the user selected translational sweep, then repeat steps 2-3 for the second set of control points resulting in two separate splines (this time assume XY plane, Z=0). The X and Y coordinates of each point should then relate to the window coordinates where the user has clicked.~~

* ~~Write the points of the resulting spline/s to an output file. The output file should have the same description format as Assignment #1.~~

* ~~Load the output file in Assignment #1 and generate smooth surfaces based on the input splines.~~

### Sub-requierements

* ~~Create a GLFW window of size 800x800 with double buffering support~~

* ~~The application should handle window resize events~~

* ~~Use an orthographic projection for simplicity~~

* Splines : Generate indices to draw lines (l)

* Splines : don't add artificial points before 0 & after n - 1 points and make those red

### Extra

* ~~Compute the sweep surfaces~~

* Use the subdivision algorithm taking into account the curvature (rather than distance) for drawing the curve


## Authors

Vsevolod (Seva) Ivanov - seva@tumahn.net
