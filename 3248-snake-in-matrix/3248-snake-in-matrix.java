class Solution {
    public int finalPositionOfSnake(int n, List<String> commands) {

        int x=0;
        int y=0;
        for(int i=0;i<commands.size();i++)
        {
            String command=commands.get(i);
            if(command.equals("UP")) y--;
            else if(command.equals("DOWN")) y++;
            else if(command.equals("RIGHT")) x++;
            else x--;
        }
        
        return (y*n)+x;
    }
}