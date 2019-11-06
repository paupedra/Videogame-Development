# Void Leaper
Repository for our 2D platformer. This prototype is the first delivery of a platormer game which is part of the
UPC Game Design and Development Degree. 

The Github repository can be accesed [here.](https://github.com/OuEsquerra/Videogame-Development/) 

## Authors
- Pau Fiol-[paufiol](https://github.com/paufiol/)
  - Collisions 
  - Load/Save handling 
  - XML Handling 
  - Porting/Adapting preexisting Functions/Modules 
  - Green Level
- Pau Pedra-[OuEsquerra](https://github.com/OuEsquerra/) 
  - Player state machine
  - Animations
  - Parallax
  - Render-Distance
  - Sound
  - Blue Level

(please note that these are mainly responsabilities, but both parties have also taken part in each others parts)

## Controls
- WALKING: A/D and LEFT/RIGHT
- CROUCH: S/DOWN (Crouching will drop you from a platform)
- JUMP: SPACE
- DASH: X or L

### Debug
- F1: Load 1st Level
- F2: Load 2nd Level
- F5: Save State
- F6: Load State
- F9: Toggle Display Colliders
- F10: Toggle God Mode (while God Mode is on use WASD or ARROWS to fly)

## Innovation Candidates
- Animations are loaded from a .tmx file (via Tiled)
- Colliders and Sensors are created via Object Layers, so we have fewer, larger colliders, improving performance.


## Credits
This Game falls under GNU General Public License v3.0 (GNU GPLv3.0). For details on the license, please see LICENSE.txt

3rd party resources:
  - [A64ish 8x8 Tiles(Expanded).](https://flashed.itch.io/a64ish)
  - [Animated pixel hero](https://rvros.itch.io/animated-pixel-hero)
  - [Roundabout - 8-bit version](https://www.youtube.com/watch?v=YmLTfeyffok)
  - [Generic Hero Effort Noises](https://opengameart.org/content/generic-hero-effort-noises)