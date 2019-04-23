/*
Box
https://www.amazon.com/gp/product/B0787B1GT3
158 x 90 x 64mm/6.2"x 3.5"x 2.5"(L*W*H)

Switches
https://www.amazon.com/gp/product/B0119FH5Z2
7/16" 11.1125mm

*/

difference(){
    square(size = [158, 90], center = true);
    union(){        
        translate([0,0]) circle(d=11.1125); //Up
        translate([40,0]) circle(d=11.1125); //Down
        translate([20,-20]) circle(d=11.1125); //Left
        translate([20,20]) circle(d=11.1125); //Right

        translate([-40,-20]) circle(d=11.1125); //Prev
        translate([-40,20]) circle(d=11.1125); //Next

        translate([0,0]) circle(d=.5); //Up
        translate([40,0]) circle(d=11.1125); //Down
        translate([20,-20]) circle(d=11.1125); //Left
        translate([20,20]) circle(d=11.1125); //Right

        translate([-40,-20]) circle(d=11.1125); //Prev
        translate([-40,20]) circle(d=11.1125); //Next


    }
}
translate([0,0]) circle(d=.5); //Up
translate([40,0]) circle(d=.5); //Down
translate([20,-20]) circle(d=.5); //Left
translate([20,20]) circle(d=.5); //Right

translate([-40,-20]) circle(d=.5); //Prev
translate([-40,20]) circle(d=.5); //Next
