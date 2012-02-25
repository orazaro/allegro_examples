#include <allegro5/allegro.h>
#include <iostream>
#include <typeinfo>

int test_allegro()
{
    ALLEGRO_DISPLAY *display = NULL;
 
    if(!al_init()) {
        std::cerr << "failed to initialize allegro!\n";
        return -1;
    }

    display = al_create_display(640, 480);
    if(!display) {
        std::cerr << "failed to create display!\n";
        return -1;
    }

    al_clear_to_color(al_map_rgb(0xAA,0,0));
    al_flip_display();
    al_rest(5.0);
    al_destroy_display(display);
 
    return 0;
}


int main(int argc, char *argv[])
{
    try 
    {   
        test_allegro();
    } 
    catch ( ... ) 
    {
        std::cerr << "exception caught: " << std::endl;
    }
    return 0;
}
