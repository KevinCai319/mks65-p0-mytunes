struct song_library{
  struct song_node * main_table[27];
};
void make_song(struct song_library *lib, char *artist, char *song);
int getBucket(char *str);
void add_song(struct song_library* lib, struct song_node *song);
void setup_lib(struct song_library *lib);
void print_library(struct song_library* lib);
void print_letter(struct song_library * lib, char c);
struct song_node* print_artist(struct song_library* lib, char *artist);
struct song_node* find_song(struct song_library* lib, char* artist, char *song);
struct song_node* find_artist(struct song_library* lib, char* artist);
void shuffle(struct song_library *lib, int n);
struct song_library* delete_song(struct song_library* lib, char *artist, char *song);
struct song_library* clear_library(struct song_library *lib);
int numSongs(struct song_library *lib);