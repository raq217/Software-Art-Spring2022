SKETCH 2

For this sketch I wanted to replicate a lava lamp like animation through circle rotations. The color scheme is to imitate such of a lava lamp with slight delays from right to left, when you look at the right the circles rotate faster than compared to the left in a repreating process. 

The main code used for the circles is as follows:
ofDrawCircle(ofGetWidth()/2 + 100 * sin( i * 1.02 + time + x), 50 + i, 50 + 40 * sin(i * 0.006 + time + x));
As you can see the sin funtion is used to determine the rate and sizes at which the circles fluctuate. This was done 7 different times with different values of time to create the delay, e.g; 0.006 + time would be faster than 000.10 + time. 
The color change also uses the sin function which is relative to the time passed in the animation.
 ofSetColor(17 + 200 * sin(i * 0.01 + time + x),
            204 + 127 * sin(i * 0.011 + time),
            127 + 102 * sin(i * 0.012 + time));



Gif showing the rotation:

![ezgif com-gif-maker (2)](https://user-images.githubusercontent.com/66205383/163846963-a1ef98d0-3879-47a4-ab03-be8e64db8948.gif)
