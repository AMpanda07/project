#include <stdio.h>

int main()
{
    int number;
    char repeat;

    printf("===========================================================================================\n");
    printf("============================> MORDEN PERIODIC TABLE<=======================================\n");
    printf("===========================================================================================\n");
    printf("| H  |                                                                               | He |\n");
    printf("| Li | Be |                                                 | B  | C  | N  | O  | F  | Ne |\n");
    printf("| Na | Mg |                                                 | Al | Si | P  | S  | Cl | Ar |\n");
    printf("| K  | Ca | Sc | Ti | Ve | Cr | Mn | Fe | Co | Ni | Cu | Zn | Ga | Ge | As | Se | Br | Kr |\n");
    printf("| Rb | Sr | Y  | Zr | Nb | Mo | Tc | Ru | Rh | Pd | Ag | Cd | In | Sn | Sb | Te | I  | Xe |\n");
    printf("| Cs | Ba | Lan| HF | Ta | W  | Re | Os | Ir | Pt | Au | Hg | Tl | Pb | Bi | Po | At | Rn |\n");
    printf("| Fr | Ra | Act| Rf | Db | Sg | Bh | Hs | Mt | Ds | Rg | Cn | Nh | Fl | Mc | Lv | Ts | Og |\n");
    printf("| Uue| Ubn| Ubu| Ubb| Ubt| Ubq| Ubp| Ubh| Ubs|  \n");
    printf("");
    printf("");
    printf("===========================================================================================\n");
    do
    {
        printf("Give me an atomic number: \n");
        scanf("%d", &number);

        switch (number)
        {
        case 1:
            printf("Element Name: Hydrogen\n");
            printf("Symbol: H\n");
            printf("Number: 1\n");
            printf("E=1 P=1 N=0\n");
            printf("Atomic weight: 1.008 u\n");
            printf("Valence: 1\n");
            printf("Block: s-block\n");
            printf("Period: 1\n");
            break;
        case 2:
            printf("Element Name: Helium\n");
            printf("Symbol: He\n");
            printf("Number: 2\n");
            printf("E=2 P=2 N=2\n");
            printf("Atomic weight: 4.0026 u\n");
            printf("Valence: 0\n");
            printf("Block: s-block\n");
            printf("Period: 1\n");
            break;
        case 3:
            printf("Element Name: Lithium\n");
            printf("Symbol: Li\n");
            printf("Number: 3\n");
            printf("E=3 P=3 N=4\n");
            printf("Atomic weight: 6.94 u\n");
            printf("Valence: 1\n");
            printf("Block: s-block\n");
            printf("Period: 2\n");
            break;
        case 4:
            printf("Element Name: Beryllium\n");
            printf("Symbol: Be\n");
            printf("Number: 4\n");
            printf("E=4 P=4 N=5\n");
            printf("Atomic weight: 9.0122 u\n");
            printf("Valence: 2\n");
            printf("Block: s-block\n");
            printf("Period: 2\n");
            break;
        case 5:
            printf("Element Name: Boron\n");
            printf("Symbol: B\n");
            printf("Number: 5\n");
            printf("E=5 P=5 N=6\n");
            printf("Atomic weight: 10.81 u\n");
            printf("Valence: 3\n");
            printf("Block: p-block\n");
            printf("Period: 2\n");
            break;
        case 6:
            printf("Element Name: Carbon\n");
            printf("Symbol: C\n");
            printf("Number: 6\n");
            printf("E=6 P=6 N=6\n");
            printf("Atomic weight: 12.011 u\n");
            printf("Valence: 4\n");
            printf("Block: p-block\n");
            printf("Period: 2\n");
            break;
        case 7:
            printf("Element Name: Nitrogen\n");
            printf("Symbol: N\n");
            printf("Number: 7\n");
            printf("E=7 P=7 N=7\n");
            printf("Atomic weight: 14.007 u\n");
            printf("Valence: 3, 5\n");
            printf("Block: p-block\n");
            printf("Period: 2\n");
            break;
        case 8:
            printf("Element Name: Oxygen\n");
            printf("Symbol: O\n");
            printf("Number: 8\n");
            printf("E=8 P=8 N=8\n");
            printf("Atomic weight: 15.999 u\n");
            printf("Valence: 2\n");
            printf("Block: p-block\n");
            printf("Period: 2\n");
            break;
        case 9:
            printf("Element Name: Fluorine\n");
            printf("Symbol: F\n");
            printf("Number: 9\n");
            printf("E=9 P=9 N=10\n");
            printf("Atomic weight: 18.998 u\n");
            printf("Valence: 1\n");
            printf("Block: p-block\n");
            printf("Period: 2\n");
            break;
        case 10:
            printf("Element Name: Neon\n");
            printf("Symbol: Ne\n");
            printf("Number: 10\n");
            printf("E=10 P=10 N=10\n");
            printf("Atomic weight: 20.180 u\n");
            printf("Valence: 0\n");
            printf("Block: p-block\n");
            printf("Period: 2\n");
            break;
        case 11:
            printf("Element Name: Sodium\n");
            printf("Symbol: Na\n");
            printf("Number: 11\n");
            printf("E=11 P=11 N=12\n");
            printf("Atomic weight: 22.990 u\n");
            printf("Valence: 1\n");
            printf("Block: s-block\n");
            printf("Period: 3\n");
            break;
        case 12:
            printf("Element Name: Magnesium\n");
            printf("Symbol: Mg\n");
            printf("Number: 12\n");
            printf("E=12 P=12 N=12\n");
            printf("Atomic weight: 24.305 u\n");
            printf("Valence: 2\n");
            printf("Block: s-block\n");
            printf("Period: 3\n");
            break;
        case 13:
            printf("Element Name: Aluminum\n");
            printf("Symbol: Al\n");
            printf("Number: 13\n");
            printf("E=13 P=13 N=14\n");
            printf("Atomic weight: 26.982 u\n");
            printf("Valence: 3\n");
            printf("Block: p-block\n");
            printf("Period: 3\n");
            break;
        case 14:
            printf("Element Name: Silicon\n");
            printf("Symbol: Si\n");
            printf("Number: 14\n");
            printf("E=14 P=14 N=14\n");
            printf("Atomic weight: 28.085 u\n");
            printf("Valence: 4\n");
            printf("Block: p-block\n");
            printf("Period: 3\n");
            break;
        case 15:
            printf("Element Name: Phosphorus\n");
            printf("Symbol: P\n");
            printf("Number: 15\n");
            printf("E=15 P=15 N=16\n");
            printf("Atomic weight: 30.974 u\n");
            printf("Valence: 3, 5\n");
            printf("Block: p-block\n");
            printf("Period: 3\n");
            break;
        case 16:
            printf("Element Name: Sulfur\n");
            printf("Symbol: S\n");
            printf("Number: 16\n");
            printf("E=16 P=16 N=16\n");
            printf("Atomic weight: 32.06 u\n");
            printf("Valence: 2, 4, 6\n");
            printf("Block: p-block\n");
            printf("Period: 3\n");
            break;
        case 17:
            printf("Element Name: Chlorine\n");
            printf("Symbol: Cl\n");
            printf("Number: 17\n");
            printf("E=17 P=17 N=18\n");
            printf("Atomic weight: 35.45 u\n");
            printf("Valence: 1, 3, 5, 7\n");
            printf("Block: p-block\n");
            printf("Period: 3\n");
            break;
        case 18:
            printf("Element Name: Argon\n");
            printf("Symbol: Ar\n");
            printf("Number: 18\n");
            printf("E=18 P=18 N=22\n");
            printf("Atomic weight: 39.948 u\n");
            printf("Valence: 0\n");
            printf("Block: p-block\n");
            printf("Period: 3\n");
            break;
        case 19:
            printf("Element Name: Potassium\n");
            printf("Symbol: K\n");
            printf("Number: 19\n");
            printf("E=19 P=19 N=20\n");
            printf("Atomic weight: 39.098 u\n");
            printf("Valence: 1\n");
            printf("Block: s-block\n");
            printf("Period: 4\n");
            break;
        case 20:
            printf("Element Name: Calcium\n");
            printf("Symbol: Ca\n");
            printf("Number: 20\n");
            printf("E=20 P=20 N=20\n");
            printf("Atomic weight: 40.078 u\n");
            printf("Valence: 2\n");
            printf("Block: s-block\n");
            printf("Period: 4\n");
            break;
        case 21:
            printf("Element Name: Scandium\n");
            printf("Symbol: Sc\n");
            printf("Number: 21\n");
            printf("E=21 P=21 N=24\n");
            printf("Atomic weight: 44.956 u\n");
            printf("Valence: 3\n");
            printf("Block: d-block\n");
            printf("Period: 4\n");
            break;
        case 22:
            printf("Element Name: Titanium\n");
            printf("Symbol: Ti\n");
            printf("Number: 22\n");
            printf("E=22 P=22 N=26\n");
            printf("Atomic weight: 47.867 u\n");
            printf("Valence: 2, 3, 4\n");
            printf("Block: d-block\n");
            printf("Period: 4\n");
            break;
        case 23:
            printf("Element Name: Vanadium\n");
            printf("Symbol: V\n");
            printf("Number: 23\n");
            printf("E=23 P=23 N=28\n");
            printf("Atomic weight: 50.942 u\n");
            printf("Valence: 2, 3, 4, 5\n");
            printf("Block: d-block\n");
            printf("Period: 4\n");
            break;
        case 24:
            printf("Element Name: Chromium\n");
            printf("Symbol: Cr\n");
            printf("Number: 24\n");
            printf("E=24 P=24 N=28\n");
            printf("Atomic weight: 51.996 u\n");
            printf("Valence: 2, 3, 6\n");
            printf("Block: d-block\n");
            printf("Period: 4\n");
            break;
        case 25:
            printf("Element Name: Manganese\n");
            printf("Symbol: Mn\n");
            printf("Number: 25\n");
            printf("E=25 P=25 N=30\n");
            printf("Atomic weight: 54.938 u\n");
            printf("Valence: 2, 3, 4, 6, 7\n");
            printf("Block: d-block\n");
            printf("Period: 4\n");
            break;
        case 26:
            printf("Element Name: Iron\n");
            printf("Symbol: Fe\n");
            printf("Number: 26\n");
            printf("E=26 P=26 N=30\n");
            printf("Atomic weight: 55.845 u\n");
            printf("Valence: 2, 3\n");
            printf("Block: d-block\n");
            printf("Period: 4\n");
            break;
        case 27:
            printf("Element Name: Cobalt\n");
            printf("Symbol: Co\n");
            printf("Number: 27\n");
            printf("E=27 P=27 N=32\n");
            printf("Atomic weight: 58.933 u\n");
            printf("Valence: 2, 3\n");
            printf("Block: d-block\n");
            printf("Period: 4\n");
            break;
        case 28:
            printf("Element Name: Nickel\n");
            printf("Symbol: Ni\n");
            printf("Number: 28\n");
            printf("E=28 P=28 N=31\n");
            printf("Atomic weight: 58.693 u\n");
            printf("Valence: 2, 3\n");
            printf("Block: d-block\n");
            printf("Period: 4\n");
            break;
        case 29:
            printf("Element Name: Copper\n");
            printf("Symbol: Cu\n");
            printf("Number: 29\n");
            printf("E=29 P=29 N=35\n");
            printf("Atomic weight: 63.546 u\n");
            printf("Valence: 1, 2\n");
            printf("Block: d-block\n");
            printf("Period: 4\n");
            break;
        case 30:
            printf("Element Name: Zinc\n");
            printf("Symbol: Zn\n");
            printf("Number: 30\n");
            printf("E=30 P=30 N=35\n");
            printf("Atomic weight: 65.38 u\n");
            printf("Valence: 2\n");
            printf("Block: d-block\n");
            printf("Period: 4\n");
            break;
        case 31:
            printf("Element Name: Gallium\n");
            printf("Symbol: Ga\n");
            printf("Number: 31\n");
            printf("E=31 P=31 N=39\n");
            printf("Atomic weight: 69.723 u\n");
            printf("Valence: 3\n");
            printf("Block: p-block\n");
            printf("Period: 4\n");
            break;
        case 32:
            printf("Element Name: Germanium\n");
            printf("Symbol: Ge\n");
            printf("Number: 32\n");
            printf("E=32 P=32 N=41\n");
            printf("Atomic weight: 72.630 u\n");
            printf("Valence: 2, 4\n");
            printf("Block: p-block\n");
            printf("Period: 4\n");
            break;
        case 33:
            printf("Element Name: Arsenic\n");
            printf("Symbol: As\n");
            printf("Number: 33\n");
            printf("E=33 P=33 N=42\n");
            printf("Atomic weight: 74.922 u\n");
            printf("Valence: 3, 5\n");
            printf("Block: p-block\n");
            printf("Period: 4\n");
            break;
        case 34:
            printf("Element Name: Selenium\n");
            printf("Symbol: Se\n");
            printf("Number: 34\n");
            printf("E=34 P=34 N=45\n");
            printf("Atomic weight: 78.971 u\n");
            printf("Valence: 2, 4, 6\n");
            printf("Block: p-block\n");
            printf("Period: 4\n");
            break;
        case 35:
            printf("Element Name: Bromine\n");
            printf("Symbol: Br\n");
            printf("Number: 35\n");
            printf("E=35 P=35 N=45\n");
            printf("Atomic weight: 79.904 u\n");
            printf("Valence: 1, 5\n");
            printf("Block: p-block\n");
            printf("Period: 4\n");
            break;
        case 36:
            printf("Element Name: Krypton\n");
            printf("Symbol: Kr\n");
            printf("Number: 36\n");
            printf("E=36 P=36 N=48\n");
            printf("Atomic weight: 83.798 u\n");
            printf("Valence: 0, 2\n");
            printf("Block: p-block\n");
            printf("Period: 4\n");
            break;
        case 37:
            printf("Element Name: Rubidium\n");
            printf("Symbol: Rb\n");
            printf("Number: 37\n");
            printf("E=37 P=37 N=48\n");
            printf("Atomic weight: 85.468 u\n");
            printf("Valence: 1\n");
            printf("Block: s-block\n");
            printf("Period: 5\n");
            break;
        case 38:
            printf("Element Name: Strontium\n");
            printf("Symbol: Sr\n");
            printf("Number: 38\n");
            printf("E=38 P=38 N=50\n");
            printf("Atomic weight: 87.62 u\n");
            printf("Valence: 2\n");
            printf("Block: s-block\n");
            printf("Period: 5\n");
            break;
        case 39:
            printf("Element Name: Yttrium\n");
            printf("Symbol: Y\n");
            printf("Number: 39\n");
            printf("E=39 P=39 N=50\n");
            printf("Atomic weight: 88.906 u\n");
            printf("Valence: 3\n");
            printf("Block: d-block\n");
            printf("Period: 5\n");
            break;
        case 40:
            printf("Element Name: Zirconium\n");
            printf("Symbol: Zr\n");
            printf("Number: 40\n");
            printf("E=40 P=40 N=51\n");
            printf("Atomic weight: 91.224 u\n");
            printf("Valence: 4\n");
            printf("Block: d-block\n");
            printf("Period: 5\n");
            break;
        case 41:
            printf("Element Name: Niobium\n");
            printf("Symbol: Nb\n");
            printf("Number: 41\n");
            printf("E=41 P=41 N=52\n");
            printf("Atomic weight: 92.906 u\n");
            printf("Valence: 3, 5\n");
            printf("Block: d-block\n");
            printf("Period: 5\n");
            break;
        case 42:
            printf("Element Name: Molybdenum\n");
            printf("Symbol: Mo\n");
            printf("Number: 42\n");
            printf("E=42 P=42 N=54\n");
            printf("Atomic weight: 95.95 u\n");
            printf("Valence: 2, 3, 4, 5, 6\n");
            printf("Block: d-block\n");
            printf("Period: 5\n");
            break;
        case 43:
            printf("Element Name: Technetium\n");
            printf("Symbol: Tc\n");
            printf("Number: 43\n");
            printf("E=43 P=43 N=55\n");
            printf("Atomic weight: 98 u\n");
            printf("Valence: 7\n");
            printf("Block: d-block\n");
            printf("Period: 5\n");
            break;
        case 44:
            printf("Element Name: Ruthenium\n");
            printf("Symbol: Ru\n");
            printf("Number: 44\n");
            printf("E=44 P=44 N=57\n");
            printf("Atomic weight: 101.07 u\n");
            printf("Valence: 2, 3, 4, 6, 8\n");
            printf("Block: d-block\n");
            printf("Period: 5\n");
            break;
        case 45:
            printf("Element Name: Rhodium\n");
            printf("Symbol: Rh\n");
            printf("Number: 45\n");
            printf("E=45 P=45 N=58\n");
            printf("Atomic weight: 102.906 u\n");
            printf("Valence: 2, 3, 4\n");
            printf("Block: d-block\n");
            printf("Period: 5\n");
            break;
        case 46:
            printf("Element Name: Palladium\n");
            printf("Symbol: Pd\n");
            printf("Number: 46\n");
            printf("E=46 P=46 N=60\n");
            printf("Atomic weight: 106.42 u\n");
            printf("Valence: 2, 4\n");
            printf("Block: d-block\n");
            printf("Period: 5\n");
            break;
        case 47:
            printf("Element Name: Silver\n");
            printf("Symbol: Ag\n");
            printf("Number: 47\n");
            printf("E=47 P=47 N=61\n");
            printf("Atomic weight: 107.868 u\n");
            printf("Valence: 1\n");
            printf("Block: d-block\n");
            printf("Period: 5\n");
            break;
        case 48:
            printf("Element Name: Cadmium\n");
            printf("Symbol: Cd\n");
            printf("Number: 48\n");
            printf("E=48 P=48 N=64\n");
            printf("Atomic weight: 112.414 u\n");
            printf("Valence: 2\n");
            printf("Block: d-block\n");
            printf("Period: 5\n");
            break;
        case 49:
            printf("Element Name: Indium\n");
            printf("Symbol: In\n");
            printf("Number: 49\n");
            printf("E=49 P=49 N=66\n");
            printf("Atomic weight: 114.818 u\n");
            printf("Valence: 1, 3\n");
            printf("Block: p-block\n");
            printf("Period: 5\n");
            break;
        case 50:
            printf("Element Name: Tin\n");
            printf("Symbol: Sn\n");
            printf("Number: 50\n");
            printf("E=50 P=50 N=69\n");
            printf("Atomic weight: 118.710 u\n");
            printf("Valence: 2, 4\n");
            printf("Block: p-block\n");
            printf("Period: 5\n");
            break;
        case 51:
            printf("Element Name: Antimony\n");
            printf("Symbol: Sb\n");
            printf("Number: 51\n");
            printf("E=51 P=51 N=71\n");
            printf("Atomic weight: 121.760 u\n");
            printf("Valence: 3, 5\n");
            printf("Block: p-block\n");
            printf("Period: 5\n");
            break;
        case 52:
            printf("Element Name: Tellurium\n");
            printf("Symbol: Te\n");
            printf("Number: 52\n");
            printf("E=52 P=52 N=76\n");
            printf("Atomic weight: 127.60 u\n");
            printf("Valence: 2, 4, 6\n");
            printf("Block: p-block\n");
            printf("Period: 5\n");
            break;
        case 53:
            printf("Element Name: Iodine\n");
            printf("Symbol: I\n");
            printf("Number: 53\n");
            printf("E=53 P=53 N=74\n");
            printf("Atomic weight: 126.904 u\n");
            printf("Valence: 1, 5, 7\n");
            printf("Block: p-block\n");
            printf("Period: 5\n");
            break;
        case 54:
            printf("Element Name: Xenon\n");
            printf("Symbol: Xe\n");
            printf("Number: 54\n");
            printf("E=54 P=54 N=77\n");
            printf("Atomic weight: 131.293 u\n");
            printf("Valence: 0, 2, 4, 6\n");
            printf("Block: p-block\n");
            printf("Period: 5\n");
            break;
        case 55:
            printf("Element Name: Cesium\n");
            printf("Symbol: Cs\n");
            printf("Number: 55\n");
            printf("E=55 P=55 N=78\n");
            printf("Atomic weight: 132.905 u\n");
            printf("Valence: 1\n");
            printf("Block: s-block\n");
            printf("Period: 6\n");
            break;
        case 56:
            printf("Element Name: Barium\n");
            printf("Symbol: Ba\n");
            printf("Number: 56\n");
            printf("E=56 P=56 N=81\n");
            printf("Atomic weight: 137.327 u\n");
            printf("Valence: 2\n");
            printf("Block: s-block\n");
            printf("Period: 6\n");
            break;
        case 57:
            printf("Element Name: Lanthanum\n");
            printf("Symbol: La\n");
            printf("Number: 57\n");
            printf("E=57 P=57 N=82\n");
            printf("Atomic weight: 138.905 u\n");
            printf("Valence: 3\n");
            printf("Block: f-block\n");
            printf("Period: 6\n");
            break;
        case 58:
            printf("Element Name: Cerium\n");
            printf("Symbol: Ce\n");
            printf("Number: 58\n");
            printf("E=58 P=58 N=82\n");
            printf("Atomic weight: 140.116 u\n");
            printf("Valence: 3, 4\n");
            printf("Block: f-block\n");
            printf("Period: 6\n");
            break;
        case 59:
            printf("Element Name: Praseodymium\n");
            printf("Symbol: Pr\n");
            printf("Number: 59\n");
            printf("E=59 P=59 N=82\n");
            printf("Atomic weight: 140.907 u\n");
            printf("Valence: 3, 4\n");
            printf("Block: f-block\n");
            printf("Period: 6\n");
            break;
        case 60:
            printf("Element Name: Neodymium\n");
            printf("Symbol: Nd\n");
            printf("Number: 60\n");
            printf("E=60 P=60 N=82\n");
            printf("Atomic weight: 144.242 u\n");
            printf("Valence: 3\n");
            printf("Block: f-block\n");
            printf("Period: 6\n");
            break;
        case 61:
            printf("Element Name: Promethium\n");
            printf("Symbol: Pm\n");
            printf("Number: 61\n");
            printf("E=61 P=61 N=84\n");
            printf("Atomic weight: 145 u\n");
            printf("Valence: 3\n");
            printf("Block: f-block\n");
            printf("Period: 6\n");
            break;
        case 62:
            printf("Element Name: Samarium\n");
            printf("Symbol: Sm\n");
            printf("Number: 62\n");
            printf("E=62 P=62 N=88\n");
            printf("Atomic weight: 150.36 u\n");
            printf("Valence: 2, 3\n");
            printf("Block: f-block\n");
            printf("Period: 6\n");
            break;
        case 63:
            printf("Element Name: Europium\n");
            printf("Symbol: Eu\n");
            printf("Number: 63\n");
            printf("E=63 P=63 N=89\n");
            printf("Atomic weight: 151.964 u\n");
            printf("Valence: 2, 3\n");
            printf("Block: f-block\n");
            printf("Period: 6\n");
            break;
        case 64:
            printf("Element Name: Gadolinium\n");
            printf("Symbol: Gd\n");
            printf("Number: 64\n");
            printf("E=64 P=64 N=93\n");
            printf("Atomic weight: 157.25 u\n");
            printf("Valence: 3\n");
            printf("Block: f-block\n");
            printf("Period: 6\n");
            break;
        case 65:
            printf("Element Name: Terbium\n");
            printf("Symbol: Tb\n");
            printf("Number: 65\n");
            printf("E=65 P=65 N=94\n");
            printf("Atomic weight: 158.925 u\n");
            printf("Valence: 3, 4\n");
            printf("Block: f-block\n");
            printf("Period: 6\n");
            break;
        case 66:
            printf("Element Name: Dysprosium\n");
            printf("Symbol: Dy\n");
            printf("Number: 66\n");
            printf("E=66 P=66 N=97\n");
            printf("Atomic weight: 162.500 u\n");
            printf("Valence: 3\n");
            printf("Block: f-block\n");
            printf("Period: 6\n");
            break;
        case 67:
            printf("Element Name: Holmium\n");
            printf("Symbol: Ho\n");
            printf("Number: 67\n");
            printf("E=67 P=67 N=98\n");
            printf("Atomic weight: 164.930 u\n");
            printf("Valence: 3\n");
            printf("Block: f-block\n");
            printf("Period: 6\n");
            break;
        case 68:
            printf("Element Name: Erbium\n");
            printf("Symbol: Er\n");
            printf("Number: 68\n");
            printf("E=68 P=68 N=99\n");
            printf("Atomic weight: 167.259 u\n");
            printf("Valence: 3\n");
            printf("Block: f-block\n");
            printf("Period: 6\n");
            break;
        case 69:
            printf("Element Name: Thulium\n");
            printf("Symbol: Tm\n");
            printf("Number: 69\n");
            printf("E=69 P=69 N=100\n");
            printf("Atomic weight: 168.934 u\n");
            printf("Valence: 2, 3\n");
            printf("Block: f-block\n");
            printf("Period: 6\n");
            break;
        case 70:
            printf("Element Name: Ytterbium\n");
            printf("Symbol: Yb\n");
            printf("Number: 70\n");
            printf("E=70 P=70 N=103\n");
            printf("Atomic weight: 173.045 u\n");
            printf("Valence: 2, 3\n");
            printf("Block: f-block\n");
            printf("Period: 6\n");
            break;
        case 71:
            printf("Element Name: Lutetium\n");
            printf("Symbol: Lu\n");
            printf("Number: 71\n");
            printf("E=71 P=71 N=104\n");
            printf("Atomic weight: 174.967 u\n");
            printf("Valence: 3\n");
            printf("Block: d-block\n");
            printf("Period: 6\n");
            break;
        case 72:
            printf("Element Name: Hafnium\n");
            printf("Symbol: Hf\n");
            printf("Number: 72\n");
            printf("E=72 P=72 N=106\n");
            printf("Atomic weight: 178.49 u\n");
            printf("Valence: 4\n");
            printf("Block: d-block\n");
            printf("Period: 6\n");
            break;
        case 73:
            printf("Element Name: Tantalum\n");
            printf("Symbol: Ta\n");
            printf("Number: 73\n");
            printf("E=73 P=73 N=108\n");
            printf("Atomic weight: 180.948 u\n");
            printf("Valence: 5\n");
            printf("Block: d-block\n");
            printf("Period: 6\n");
            break;
        case 74:
            printf("Element Name: Tungsten\n");
            printf("Symbol: W\n");
            printf("Number: 74\n");
            printf("E=74 P=74 N=110\n");
            printf("Atomic weight: 183.84 u\n");
            printf("Valence: 2, 3, 4, 5, 6\n");
            printf("Block: d-block\n");
            printf("Period: 6\n");
            break;
        case 75:
            printf("Element Name: Rhenium\n");
            printf("Symbol: Re\n");
            printf("Number: 75\n");
            printf("E=75 P=75 N=111\n");
            printf("Atomic weight: 186.207 u\n");
            printf("Valence: 1, 2, 4, 5, 6, 7\n");
            printf("Block: d-block\n");
            printf("Period: 6\n");
            break;
        case 76:
            printf("Element Name: Osmium\n");
            printf("Symbol: Os\n");
            printf("Number: 76\n");
            printf("E=76 P=76 N=114\n");
            printf("Atomic weight: 190.23 u\n");
            printf("Valence: 2, 3, 4, 6, 8\n");
            printf("Block: d-block\n");
            printf("Period: 6\n");
            break;
        case 77:
            printf("Element Name: Iridium\n");
            printf("Symbol: Ir\n");
            printf("Number: 77\n");
            printf("E=77 P=77 N=115\n");
            printf("Atomic weight: 192.217 u\n");
            printf("Valence: 2, 3, 4, 6\n");
            printf("Block: d-block\n");
            printf("Period: 6\n");
            break;
        case 78:
            printf("Element Name: Platinum\n");
            printf("Symbol: Pt\n");
            printf("Number: 78\n");
            printf("E=78 P=78 N=117\n");
            printf("Atomic weight: 195.084 u\n");
            printf("Valence: 2, 4\n");
            printf("Block: d-block\n");
            printf("Period: 6\n");
            break;
        case 79:
            printf("Element Name: Gold\n");
            printf("Symbol: Au\n");
            printf("Number: 79\n");
            printf("E=79 P=79 N=118\n");
            printf("Atomic weight: 196.967 u\n");
            printf("Valence: 1, 3\n");
            printf("Block: d-block\n");
            printf("Period: 6\n");
            break;
        case 80:
            printf("Element Name: Mercury\n");
            printf("Symbol: Hg\n");
            printf("Number: 80\n");
            printf("E=80 P=80 N=121\n");
            printf("Atomic weight: 200.592 u\n");
            printf("Valence: 1, 2\n");
            printf("Block: d-block\n");
            printf("Period: 6\n");
            break;
        case 81:
            printf("Element Name: Thallium\n");
            printf("Symbol: Tl\n");
            printf("Number: 81\n");
            printf("E=81 P=81 N=123\n");
            printf("Atomic weight: 204.383 u\n");
            printf("Valence: 1, 3\n");
            printf("Block: p-block\n");
            printf("Period: 6\n");
            break;
        case 82:
            printf("Element Name: Lead\n");
            printf("Symbol: Pb\n");
            printf("Number: 82\n");
            printf("E=82 P=82 N=125\n");
            printf("Atomic weight: 207.2 u\n");
            printf("Valence: 2, 4\n");
            printf("Block: p-block\n");
            printf("Period: 6\n");
            break;
        case 83:
            printf("Element Name: Bismuth\n");
            printf("Symbol: Bi\n");
            printf("Number: 83\n");
            printf("E=83 P=83 N=126\n");
            printf("Atomic weight: 208.980 u\n");
            printf("Valence: 3, 5\n");
            printf("Block: p-block\n");
            printf("Period: 6\n");
            break;
        case 84:
            printf("Element Name: Polonium\n");
            printf("Symbol: Po\n");
            printf("Number: 84\n");
            printf("E=84 P=84 N=125\n");
            printf("Atomic weight: 209 u\n");
            printf("Valence: 2, 4, 6\n");
            printf("Block: p-block\n");
            printf("Period: 6\n");
            break;
        case 85:
            printf("Element Name: Astatine\n");
            printf("Symbol: At\n");
            printf("Number: 85\n");
            printf("E=85 P=85 N=125\n");
            printf("Atomic weight: 210 u\n");
            printf("Valence: 1, 3, 5, 7\n");
            printf("Block: p-block\n");
            printf("Period: 6\n");
            break;
        case 86:
            printf("Element Name: Radon\n");
            printf("Symbol: Rn\n");
            printf("Number: 86\n");
            printf("E=86 P=86 N=136\n");
            printf("Atomic weight: 222 u\n");
            printf("Valence: 0\n");
            printf("Block: p-block\n");
            printf("Period: 6\n");
            break;
        case 87:
            printf("Element Name: Francium\n");
            printf("Symbol: Fr\n");
            printf("Number: 87\n");
            printf("E=87 P=87 N=136\n");
            printf("Atomic weight: 223 u\n");
            printf("Valence: 1\n");
            printf("Block: s-block\n");
            printf("Period: 7\n");
            break;
        case 88:
            printf("Element Name: Radium\n");
            printf("Symbol: Ra\n");
            printf("Number: 88\n");
            printf("E=88 P=88 N=138\n");
            printf("Atomic weight: 226 u\n");
            printf("Valence: 2\n");
            printf("Block: s-block\n");
            printf("Period: 7\n");
            break;
        case 89:
            printf("Element Name: Actinium\n");
            printf("Symbol: Ac\n");
            printf("Number: 89\n");
            printf("E=89 P=89 N=138\n");
            printf("Atomic weight: 227 u\n");
            printf("Valence: 3\n");
            printf("Block: f-block\n");
            printf("Period: 7\n");
            break;
        case 90:
            printf("Element Name: Thorium\n");
            printf("Symbol: Th\n");
            printf("Number: 90\n");
            printf("E=90 P=90 N=142\n");
            printf("Atomic weight: 232.038 u\n");
            printf("Valence: 4\n");
            printf("Block: f-block\n");
            printf("Period: 7\n");
            break;
        case 91:
            printf("Element Name: Protactinium\n");
            printf("Symbol: Pa\n");
            printf("Number: 91\n");
            printf("E=91 P=91 N=140\n");
            printf("Atomic weight: 231.036 u\n");
            printf("Valence: 5\n");
            printf("Block: f-block\n");
            printf("Period: 7\n");
            break;
        case 92:
            printf("Element Name: Uranium\n");
            printf("Symbol: U\n");
            printf("Number: 92\n");
            printf("E=92 P=92 N=146\n");
            printf("Atomic weight: 238.029 u\n");
            printf("Valence: 3, 4, 5, 6\n");
            printf("Block: f-block\n");
            printf("Period: 7\n");
            break;
        case 93:
            printf("Element Name: Neptunium\n");
            printf("Symbol: Np\n");
            printf("Number: 93\n");
            printf("E=93 P=93 N=144\n");
            printf("Atomic weight: 237 u\n");
            printf("Valence: 3, 4, 5, 6, 7\n");
            printf("Block: f-block\n");
            printf("Period: 7\n");
            break;
        case 94:
            printf("Element Name: Plutonium\n");
            printf("Symbol: Pu\n");
            printf("Number: 94\n");
            printf("E=94 P=94 N=150\n");
            printf("Atomic weight: 244 u\n");
            printf("Valence: 3, 4, 5, 6, 7\n");
            printf("Block: f-block\n");
            printf("Period: 7\n");
            break;
        case 95:
            printf("Element Name: Americium\n");
            printf("Symbol: Am\n");
            printf("Number: 95\n");
            printf("E=95 P=95 N=148\n");
            printf("Atomic weight: 243 u\n");
            printf("Valence: 3, 4, 5, 6\n");
            printf("Block: f-block\n");
            printf("Period: 7\n");
            break;
        case 96:
            printf("Element Name: Curium\n");
            printf("Symbol: Cm\n");
            printf("Number: 96\n");
            printf("E=96 P=96 N=151\n");
            printf("Atomic weight: 247 u\n");
            printf("Valence: 3, 4\n");
            printf("Block: f-block\n");
            printf("Period: 7\n");
            break;
        case 97:
            printf("Element Name: Berkelium\n");
            printf("Symbol: Bk\n");
            printf("Number: 97\n");
            printf("E=97 P=97 N=150\n");
            printf("Atomic weight: 247 u\n");
            printf("Valence: 3, 4\n");
            printf("Block: f-block\n");
            printf("Period: 7\n");
            break;
        case 98:
            printf("Element Name: Californium\n");
            printf("Symbol: Cf\n");
            printf("Number: 98\n");
            printf("E=98 P=98 N=153\n");
            printf("Atomic weight: 251 u\n");
            printf("Valence: 3\n");
            printf("Block: f-block\n");
            printf("Period: 7\n");
            break;
        case 99:
            printf("Element Name: Einsteinium\n");
            printf("Symbol: Es\n");
            printf("Number: 99\n");
            printf("E=99 P=99 N=153\n");
            printf("Atomic weight: 252 u\n");
            printf("Valence: 2, 3\n");
            printf("Block: f-block\n");
            printf("Period: 7\n");
            break;
        case 100:
            printf("Element Name: Fermium\n");
            printf("Symbol: Fm\n");
            printf("Number: 100\n");
            printf("E=100 P=100 N=157\n");
            printf("Atomic weight: 257 u\n");
            printf("Valence: 2, 3\n");
            printf("Block: f-block\n");
            printf("Period: 7\n");
            break;
        case 101:
            printf("Element Name: Mendelevium\n");
            printf("Symbol: Md\n");
            printf("Number: 101\n");
            printf("E=101 P=101 N=157\n");
            printf("Atomic weight: 258 u\n");
            printf("Valence: 2, 3\n");
            printf("Block: f-block\n");
            printf("Period: 7\n");
            break;
        case 102:
            printf("Element Name: Nobelium\n");
            printf("Symbol: No\n");
            printf("Number: 102\n");
            printf("E=102 P=102 N=157\n");
            printf("Atomic weight: 259 u\n");
            printf("Valence: 2, 3\n");
            printf("Block: f-block\n");
            printf("Period: 7\n");
            break;
        case 103:
            printf("Element Name: Lawrencium\n");
            printf("Symbol: Lr\n");
            printf("Number: 103\n");
            printf("E=103 P=103 N=162\n");
            printf("Atomic weight: 266 u\n");
            printf("Valence: 3\n");
            printf("Block: d-block\n");
            printf("Period: 7\n");
            break;
        case 104:
            printf("Element Name: Rutherfordium\n");
            printf("Symbol: Rf\n");
            printf("Number: 104\n");
            printf("E=104 P=104 N=163\n");
            printf("Atomic weight: 267 u\n");
            printf("Valence: 4\n");
            printf("Block: d-block\n");
            printf("Period: 7\n");
            break;
        case 105:
            printf("Element Name: Dubnium\n");
            printf("Symbol: Db\n");
            printf("Number: 105\n");
            printf("E=105 P=105 N=163\n");
            printf("Atomic weight: 268 u\n");
            printf("Valence: 5\n");
            printf("Block: d-block\n");
            printf("Period: 7\n");
            break;
        case 106:
            printf("Element Name: Seaborgium\n");
            printf("Symbol: Sg\n");
            printf("Number: 106\n");
            printf("E=106 P=106 N=163\n");
            printf("Atomic weight: 269 u\n");
            printf("Valence: 6\n");
            printf("Block: d-block\n");
            printf("Period: 7\n");
            break;
        case 107:
            printf("Element Name: Bohrium\n");
            printf("Symbol: Bh\n");
            printf("Number: 107\n");
            printf("E=107 P=107 N=163\n");
            printf("Atomic weight: 270 u\n");
            printf("Valence: 7\n");
            printf("Block: d-block\n");
            printf("Period: 7\n");
            break;
        case 108:
            printf("Element Name: Hassium\n");
            printf("Symbol: Hs\n");
            printf("Number: 108\n");
            printf("E=108 P=108 N=169\n");
            printf("Atomic weight: 277 u\n");
            printf("Valence: 8\n");
            printf("Block: d-block\n");
            printf("Period: 7\n");
            break;
        case 109:
            printf("Element Name: Meitnerium\n");
            printf("Symbol: Mt\n");
            printf("Number: 109\n");
            printf("E=109 P=109 N=169\n");
            printf("Atomic weight: 278 u\n");
            printf("Valence: 9\n");
            printf("Block: d-block\n");
            printf("Period: 7\n");
            break;
        case 110:
            printf("Element Name: Darmstadtium\n");
            printf("Symbol: Ds\n");
            printf("Number: 110\n");
            printf("E=110 P=110 N=171\n");
            printf("Atomic weight: 281 u\n");
            printf("Valence: 10\n");
            printf("Block: d-block\n");
            printf("Period: 7\n");
            break;
        case 111:
            printf("Element Name: Roentgenium\n");
            printf("Symbol: Rg\n");
            printf("Number: 111\n");
            printf("E=111 P=111 N=171\n");
            printf("Atomic weight: 282 u\n");
            printf("Valence: 11\n");
            printf("Block: d-block\n");
            printf("Period: 7\n");
            break;
        case 112:
            printf("Element Name: Copernicium\n");
            printf("Symbol: Cn\n");
            printf("Number: 112\n");
            printf("E=112 P=112 N=173\n");
            printf("Atomic weight: 285 u\n");
            printf("Valence: 12\n");
            printf("Block: d-block\n");
            printf("Period: 7\n");
            break;
        case 113:
            printf("Element Name: Nihonium\n");
            printf("Symbol: Nh\n");
            printf("Number: 113\n");
            printf("E=113 P=113 N=173\n");
            printf("Atomic weight: 286 u\n");
            printf("Valence: 13\n");
            printf("Block: p-block\n");
            printf("Period: 7\n");
            break;
        case 114:
            printf("Element Name: Flerovium\n");
            printf("Symbol: Fl\n");
            printf("Number: 114\n");
            printf("E=114 P=114 N=175\n");
            printf("Atomic weight: 289 u\n");
            printf("Valence: 14\n");
            printf("Block: p-block\n");
            printf("Period: 7\n");
            break;
        case 115:
            printf("Element Name: Moscovium\n");
            printf("Symbol: Mc\n");
            printf("Number: 115\n");
            printf("E=115 P=115 N=175\n");
            printf("Atomic weight: 290 u\n");
            printf("Valence: 15\n");
            printf("Block: p-block\n");
            printf("Period: 7\n");
            break;
        case 116:
            printf("Element Name: Livermorium\n");
            printf("Symbol: Lv\n");
            printf("Number: 116\n");
            printf("E=116 P=116 N=177\n");
            printf("Atomic weight: 293 u\n");
            printf("Valence: 16\n");
            printf("Block: p-block\n");
            printf("Period: 7\n");
            break;
        case 117:
            printf("Element Name: Tennessine\n");
            printf("Symbol: Ts\n");
            printf("Number: 117\n");
            printf("E=117 P=117 N=177\n");
            printf("Atomic weight: 294 u\n");
            printf("Valence: 17\n");
            printf("Block: p-block\n");
            printf("Period: 7\n");
            break;
        case 118:
            printf("Element Name: Oganesson\n");
            printf("Symbol: Og\n");
            printf("Number: 118\n");
            printf("E=118 P=118 N=177\n");
            printf("Atomic weight: 294 u\n");
            printf("Valence: 18\n");
            printf("Block: p-block\n");
            printf("Period: 7\n");
            break;

        default:
            printf("OH NO!!\n element number %d is not avaliable in the table\n", number);
            break;
        }

        printf("Do you want to view another element?(y/n)");
        scanf(" %c", &repeat);
    } while (repeat == 'y' || repeat == 'Y');
    printf("Thanks for playing");
    return 0;
}