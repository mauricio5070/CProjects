
/*#include <cstdlib>
#include <iostream>

using namespace std;




int main(){
    int **matriz;
    int filas=5;
    int columnas=3;
    matriz= new int*[filas];
    
    for(int i=0; i<filas;i++){
        matriz[i]= new int[i+1];
    
    }

    for(int i=0;i<filas;i++){
        for(int j=0;j<i+1;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    
    float f = 123.456;
	long g = 1e100;
	int i = f;
	double j = g;
        
	cout << i << endl; 
	cout << g << endl; 


    return 0;
}*/

/*#include <iostream>

using namespace std;

namespace Hogwarts {
	int Troll = 1;
}

namespace Mordor {
	int Troll = 2 ;
}

using namespace Hogwarts;

int main(void) {
	cout << Troll << " " << Mordor::Troll << endl;
	return 0;
}*/

/*#include <iostream>
using namespace std;
namespace Hogwarts {
	int Troll = 1;
}
namespace Mordor {
	int Troll = 2 ;
}
namespace Hogwarts {
	float Wizard = -0.5;
}
namespace Mordor {
	float Wizard = 0.5;
}
int main(void) {
	cout << Hogwarts::Troll << " " << Hogwarts::Wizard << endl;
	cout << Mordor::Troll << " " << Mordor::Wizard << endl;
	return 0;
}*/

/*#include <iostream> 
using namespace std;
namespace Hogwarts {
	int Troll = 1;
	float Wizard = -0.5;
}
namespace Mordor {
	int Troll = 2 ;
	float Wizard = 0.5;
}
using Mordor::Troll;
using Hogwarts::Wizard;
int main(void) {
	cout << Hogwarts::Troll << " " << Wizard << endl;
	cout << Troll << " " << Mordor::Wizard << endl;
	return 0;
}*/

#include <iostream>  
#include <string> 

using namespace std; 

int main(void) { 
	string hilera = "content"; 
	
        for(int i=0;i<hilera.length();i++){
      
            cout<<hilera[i];
        }
        cout<<endl;
        
        cout<<hilera.substr(1,4)<<endl;
    
}