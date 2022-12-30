
#include "micromouseserver.h"

void microMouseServer::studentAI()
{
/*
 * The following are the eight functions that you can call. Feel free to create your own fuctions as well.
 * Remember that any solution that calls moveForward more than once per call of studentAI() will have points deducted.
 *
 *The following functions return if there is a wall in their respective directions
 *bool isWallLeft();
 *bool isWallRight();
 *bool isWallForward();
 *
 *The following functions move the mouse. Move forward returns if the mouse was able to move forward and can be used for error checking
 *bool moveForward();
 *void turnLeft();
 *void turnRight();
 *
 * The following functions are called when you need to output something to the UI or when you have finished the maze
 * void foundFinish();
 * void printUI(const char *mesg);
 
*/
    bool theEnd(){
        if(bool isWallForward()==false){
            bool moveForward();
            void turnRight();
            if(bool isWallForward()==false){
                bool moveForward();
                void turnRight();
                if(bool isWallForward()==false){
                    bool moveForward();
                    void turnRight();
                    if(bool isWallForward()==false){
                        bool moveForward();
                        void turnRight();
                        return true;
                    }
                }
            }
        }
       
    }
    while(true){
        if(bool isWallLeft()==true && bool isWallRight()==true && bool isWallForward()==false){
            bool moveForward();
        }else if(bool isWallLeft()==true && bool isWallRight()==false && bool isWallForward()==true){
            void turnRight();
            bool moveForward();
        }else if(bool isWallLeft()==false && bool isWallRight()==true && bool isWallForward()==true){
            void turnLeft();
            bool moveForward();
        }else if(bool isWallLeft()==false && bool isWallForward()==true && isWallRight()==false){
            void turnLeft();
            bool moveForward();
        }else if(bool isWallLeft()==true && bool isWallForward()==true && isWallRight()==true){
            void turnLeft();
        }else if(bool isWallLeft()==true && bool isWallForward()==false && isWallRight()==false){
            bool moveForward();
        }else if(bool isWallLeft()==false && bool isWallForward()==false && isWallRight()==true){
            void turnLeft();
        }
        if(isEnd()==true){
            break;
        }
        
    }
    void foundFinish();
    void printUI(const char End);

}
