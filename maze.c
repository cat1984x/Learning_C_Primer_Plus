#include <stdio.h>
#include <stdlib.h>
int main()
{
	char maze[50][50]={"##########",
					   "# #  #   #",
                       "# #    # #",
                       "#   # # ##",
                       "# #  ##   ",
                       "#  #   # #",
                       "# # ## # #",
                       "##   # # #",
                       "#  #     #",
                       "##########",};
    int i,j,pos_x,pos_y,goal_x,goal_y;
    char key;
    pos_x=1;
    pos_y=1;
    goal_x=4;
    goal_y=9;
    maze[pos_x][pos_y]='o';
    system("cls");
	for(i=0;i<10;i++)
		puts(maze[i]);			
    
    while(pos_x!=goal_x||pos_y!=goal_y)
        {
			key=getch();
            printf("%c",key);
            if(key=='w')
            {
				if(maze[pos_x-1][pos_y]==' ')
                {
					maze[pos_x][pos_y]=' ';
                    pos_x--;					
                    maze[pos_x][pos_y]='o';
                }
            }
            
            if(key=='s')
            {
				if(maze[pos_x+1][pos_y]==' ')
                {
					maze[pos_x][pos_y]=' ';
                    pos_x++;					
                    maze[pos_x][pos_y]='o';
                }
            }
            
            if(key=='a')
            {
				if(maze[pos_x][pos_y-1]==' ')
                {
					maze[pos_x][pos_y]=' ';
                    pos_y--;					
                    maze[pos_x][pos_y]='o';
                }
            }
            
            if(key=='d')
            {
				if(maze[pos_x][pos_y+1]==' ')
                {
					maze[pos_x][pos_y]=' ';
                    pos_y++;					
                    maze[pos_x][pos_y]='o';
                }
            }
            system("cls");
			for(i=0;i<10;i++)
				puts(maze[i]);	
        
        } 
    system("cls");
    printf("You Win!");                  
	system("pause");
	return 0;
}
