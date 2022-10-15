package TicTacToh;

public class Brd {
    private char brd[][];
    private int brdSize = 3;
    private char p1Symbol, p2Symbol;
    private int c;
   public final static int PLAYER_2_WINS = 2;
public final static int INCOMPLETE = 4;
   public final static int PLAYER_1_WINS = 1;
    public final static int DRAW = 3;
public final static int INVALID = 5;

    
    
    public Brd(char p1Symbol, char p2Symbol){
        brd = new char[brdSize][brdSize];
        for(int i =0; i < brdSize; i++){
            for(int j =0; j < brdSize; j++){
                brd[i][j] = ' ';
            }
        }
        this.p1Symbol = p1Symbol;
        this.p2Symbol = p2Symbol;
    }
    public int move(char symbol, int x, int y) {

        if(x < 0 || x >= brdSize || y < 0 || y >= brdSize || brd[x][y] != ' '){
            return INVALID;
        }

        brd[x][y] = symbol;
        c++;
        // Check Row
        if(brd[x][0] == brd[x][1] && brd[x][0] == brd[x][2]){
            return symbol == p1Symbol ? PLAYER_1_WINS : PLAYER_2_WINS;
        }
        // Check Col
        if(brd[0][y] == brd[1][y] && brd[0][y] == brd[2][y]){
            return symbol == p1Symbol ? PLAYER_1_WINS : PLAYER_2_WINS;
        }
        // First Diagonal
        if(brd[0][0] != ' ' && brd[0][0] == brd[1][1] && brd[0][0] == brd[2][2]){
            return symbol == p1Symbol ? PLAYER_1_WINS : PLAYER_2_WINS;
        }
        // Second Diagonal
        if(brd[0][2] != ' ' && brd[0][2] == brd[1][1] && brd[0][2] == brd[2][0]){
            return symbol == p1Symbol ? PLAYER_1_WINS : PLAYER_2_WINS;
        }
        if(c == brdSize * brdSize){
            return DRAW;
        }
        return  INCOMPLETE;

    }
    public void print() {
        System.out.println("---------------");
        for(int i =0; i < brdSize; i++){
            for(int j =0; j < brdSize; j++){
                System.out.print("| " + brd[i][j] + " |");
            }
            System.out.println( );
        }
        System.out.println();
        System.out.println("----------------");
    }
}

