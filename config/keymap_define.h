// COMBO FOR ALL LAYERS
#define COMBO_ALL(NAME, BINDINGS, KEYPOS) \
        combo_##NAME { \
                timeout-ms = <50>; \
                bindings = <BINDINGS>; \
                key-positions = <KEYPOS>; \
                layers = <0 1 2 3 4 5 6 7 8 9>; \
        };
// COMBO FOR LAYERS
#define COMBO(NAME, BINDINGS, KEYPOS, LAYERS) \
        combo_##NAME { \
                timeout-ms = <50>; \
                bindings = <BINDINGS>; \
                key-positions = <KEYPOS>; \
                layers = <LAYERS>; \
        };