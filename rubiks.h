#ifndef		RUBIKS_H_
# define	RUBIKS_H_

enum MENU
  {
    PLAY = 'a',
    AUTO_PLAY = 'b'
  };

enum CMD
  {
    FRONT = 'a',
    UPPER = 'z',
    LEFT = 'q',
    RIGHT = 'd',
    BOTTOM = 's',
    BACK = 'e',
    DISPLAY = 't'
  };

/********************************/
/*		FACE		*/
/********************************/

int	front(char *Ab);
int	up(char *dessusb);
int     left(char *Gb);
int	right(char *Db);
int	bottom(char *dessousb);
int	back(char *dosb);


/********************************/
/*		CMD		*/
/********************************/

void	quit_game(char *end);

#endif
