#include <iostream>
using namespace std;
int Reset(int epilogh, int epilogh2, int epilogh3, int epilogh4, int epilogh5, int epilogh6);
void ektoepipedo(int epilogh, int epilogh2, int epilogh3, int epilogh4, int epilogh5, int epilogh6) {
    int i = 0;
    cout << "Sugxarhthria eftases sto ekto  epipedo." << endl;
    cout << "Afou ton agnoeis katalavainei to lathos tou kai sou leei na se voeithisei kai na erthei emsa mazi sou gia na kathisete mazi,ti kaneis?:" << endl;
    cout << "Pata to 1 gia na ton diwxeis giati exeis neura mazi toy." << endl;
    cout << "Pata to 2 gia na ton xtuphseis." << endl;
    cout << "Pata to 3 gia na araxete mazi spiti." << endl;
    cin >> epilogh6;
    switch (epilogh6) {
    case 1: {
        cout << "Exases thes na xekinhseis apo thn arxh? Pata 1 gia nai kai 2 gia oxi." << endl;
        i = Reset(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    case 2: {
        cout << "Exases thes na xekinhseis apo thn arxh? Pata 1 gia nai kai 2 gia oxi." << endl;
        i = Reset(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    case 3: {
        cout << "Sugxarhthria  kardises kanontas tis swstes epiloges epestrepses spiti sou gia na anarÏ wseis." << endl;
        i = Reset(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    default: {
        ektoepipedo(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    }
}
void pemptoepipedo(int epilogh, int epilogh2, int epilogh3, int epilogh4, int epilogh5, int epilogh6) {
    int i = 0;
    cout << "Sugxarhthria eftases sto pempto epipedo." << endl;
    cout << "Ftanete spiti kai o filos sou epimenei na mhn meineis spiti, ti kaneis?:" << endl;
    cout << "Pata 1 gia na pas mazi tou opou thelei." << endl;
    cout << "Pata 2 gia na neuriaseis mazi tou kai na tsakwtheite." << endl;
    cout << "Pata to 3 gia na ton agnohseis kai na mpeis spiti." << endl;
    cin >> epilogh5;
    switch (epilogh5) {
    case 1: {
        cout << "Exases thes na xekinhseis apo thn arxh? Pata 1 gia nai kai 2 gia oxi." << endl;
        i = Reset(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    case 2: {
        cout << "Exases thes na xekinhseis apo thn arxh? Pata 1 gia nai kai 2 gia oxi." << endl;
        i = Reset(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    case 3: {
        ektoepipedo(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    default: {
        pemptoepipedo(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    }
}
void tetartoepipedo(int epilogh, int epilogh2, int epilogh3, int epilogh4, int epilogh5, int epilogh6) {
    int i = 0;
    cout << "Sugxarhthria eftases sto tetarto epipedo" << endl;
    cout << "Erxetai telika o filos sou kai sou leei na pate gia volta enw o giatros eipe na se paei spiti,ti kaneis?: " << endl;
    cout << "Pata to 1 gia pate gia perpathma." << endl;
    cout << "Pata to 2 gia na pate spiti." << endl;
    cout << "Pata to 3 gia na pate gia poto." << endl;
    cin >> epilogh4;
    switch (epilogh4) {
    case 1: {
        cout << "Exases thes na xekinhseis apo thn arxh? Pata 1 gia nai kai 2 gia oxi." << endl;
        i = Reset(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    case 2: {
        pemptoepipedo(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    case 3: {
        cout << "Exases thes na xekinhseis apo thn arxh? Pata 1 gia nai kai 2 gia oxi." << endl;
        i = Reset(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    default: {
        tetartoepipedo(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    }
}
void tritoepipedo(int epilogh, int epilogh2, int epilogh3, int epilogh4, int epilogh5, int epilogh6) {
    int i = 0;
    cout << "Sugxarhthria eftases sto trito epipedo." << endl;
    cout << "O giatros sou exhgei oti methuses kai xtuphses to prohgoumeno vrady,epitrepontas sou na fugeis me kapoion mazi wste na se paei spiti,ti kaneis?:" << endl;
    cout << "Pata to 1 gia na fugeis odhgwntas." << endl;
    cout << "Pata to 2 gia na fugeis me ta podia." << endl;
    cout << "Pata to 3 gia na fugeis me taxi h na pareis thlefono enan filo sou na mse gurisei spiti." << endl;
    cin >> epilogh3;
    switch (epilogh3) {
    case 1: {
        cout << "Exases thes na xekinhseis apo thn arxh? Pata 1 gia nai kai 2 gia oxi." << endl;
        i = Reset(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    case 2: {
        cout << "Exases thes na xekinhseis apo thn arxh? Pata 1 gia nai kai 2 gia oxi." << endl;
        i = Reset(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    case 3: {
        tetartoepipedo(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    default: {
        tritoepipedo(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    }
}
void deuteroepipedo(int epilogh, int epilogh2, int epilogh3, int epilogh4, int epilogh5, int epilogh6) {
    int i = 0;
    cout << "Sugxarhthria eftases sto deutero epipedo." << endl;
    cout << "Erxetai o giatros,ti kaneis?:" << endl;
    cout << "Pata 1 gia an ton xtuphseis." << endl;
    cout << "Pata 2 gia na trexeis. " << endl;
    cout << "Pata 3 gia na ton rwthseis ti exeis." << endl;
    cin >> epilogh2;
    switch (epilogh2) {
    case 1: {
        cout << "Exases thes na xekinhseis apo thn arxh? Pata 1 gia nai kai 2 gia oxi." << endl;
        i = Reset(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    case 2: {
        cout << "Exases thes na xekinhseis apo thn arxh? Pata 1 gia nai kai 2 gia oxi." << endl;
        i = Reset(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    case 3: {
        tritoepipedo(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    default: {
        deuteroepipedo(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    }
}
void prwtoepipedo(int epilogh, int epilogh2, int epilogh3, int epilogh4, int epilogh5, int epilogh6) {
    cout << "Xupnas se ena nosokomeio apo ton pono xwris na thimasai ti exei prohghthei,ti kaneis ?:" << endl;
    int i = 0;
    epilogh = 0;
    cout << "Pata 1 gia na kaleseis ena giatro." << endl;
    cout << "Pata 2 gia na trexeis. " << endl;
    cout << "Pata 3 gia na fonaxeis." << endl;
    cin >> epilogh;
    switch (epilogh) {
    case 1: {
        deuteroepipedo(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    case 2: {
        cout << "Exases thes na xekinhseis apo thn arxh? Pata 1 gia nai kai 2 gia oxi." << endl;
        i = Reset(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    case 3: {
        cout << "Exases thes na xekinhseis apo thn arxh? Pata 1 gia nai kai 2 gia oxi." << endl;
        i = Reset(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    default: {
        prwtoepipedo(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    }
}


int main(int argc, char** argv) {
    int epilogh = 0, epilogh2 = 0, epilogh3 = 0, epilogh4 = 0, epilogh5 = 0, epilogh6 = 0;
    prwtoepipedo(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);

    return 0;
}
int Reset(int epilogh, int epilogh2, int epilogh3, int epilogh4, int epilogh5, int epilogh6) {
    int a = 0;
    int x;
    cin >> x;
    switch (x) {
    case 1: {
        cout << "Prospathise xana" << endl;
        prwtoepipedo(epilogh, epilogh2, epilogh3, epilogh4, epilogh5, epilogh6);
        break;
    }
    default: {

        cout << "Euxaristoume pou epaixes" << endl;
        break;
    }

    }
    return a;
}