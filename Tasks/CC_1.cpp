// Create a class representing a musical playlist with a dynamic array of song objects. Implement a copy constructor to ensure a deep copy of the playlist, including all song details.

#include<iostream>
using namespace std;

class Song {
private:
    string title;
    string artist;

public:
    Song(string t, string a) : title(t), artist(a) {}

    string getTitle() {
        return title;
    }

    string getArtist() {
        return artist;
    }
};

class Playlist {
private:
    Song** songs;
    int capacity;
    int size;

public:
    Playlist(int initialCapacity) : capacity(initialCapacity), size(0) {
        songs = new Song*[capacity];
    }

    ~Playlist() {
        for (int i=0; i<size; i++) {
            delete songs[i];
        }
        delete[] songs;
    }

    void addSong(string title, string artist) {
        if(size < capacity) {
            songs[size] = new Song(title, artist);
            size++;
        } else {
            cout << "Playlist is full" << endl;
        }
    }

    void displayPlaylist() {
        cout << "Playlist: " << endl;
        for (int i=0; i<size; i++) {
            cout << "Title: " << songs[i]->getTitle() << ", Artist: " << songs[i]->getArtist() << endl;
        }   
    }
};

int main() {
    Playlist myPlaylist(5);

    myPlaylist.addSong("Ek Ajnabee Haseena Se", "Kishore Kumar");
    myPlaylist.addSong("Pal Pal Dil Ke Paas", "Kishore Kumar");
    myPlaylist.addSong("Kahin Door Jab Din Dhal Jaye", "Mukesh");
    myPlaylist.addSong("Yeh Shaam Mastani", "R. D. Burman");
    myPlaylist.addSong("Yeh Vaada Raha", "Asha Bhosle");

    myPlaylist.displayPlaylist();

    return 0;
}