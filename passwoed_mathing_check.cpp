#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cctype>
using namespace std;

int main()
{
    string input_pass;
    string re_input_pass;
    char sngl_input;
    int uppercase =0;
    int lowercase=0;
    int digit=0;
    
    cout<< " creeate your password : " <<endl;
    cout<< "      ****** It  has to have at least 1 upper case letter, 1 lower case letter, and 1 dight and can not be smaller than 8 characters and greater than 32 characters ******  "<<endl;
    
    cin>> input_pass;
    
    if (input_pass.size()>=8 && input_pass.size()<=32)
        
{
    
    
    
            for(int i=0;i<32;i++)
        {
            sngl_input= input_pass[i];
            
            if (sngl_input >='A' && sngl_input<= 'Z')
                
            {
                uppercase=uppercase+1;
            }
            
            if (sngl_input>= 'a' && sngl_input<= 'z')
                
            {
                lowercase=lowercase+1;
                
            }
            
            if (sngl_input>='0'&&sngl_input<='9')
                
            {
                digit=digit+1;
            }
            
            
        }
        
        if (uppercase>0)
            
        {
            cout<< " upper case is met"<<endl;
        
            if( lowercase>0)
                
            {
                cout<< " Lowercase is met"<<endl;
                
                if(digit>0)
                    
                {
                    cout<< " digit is met"<<endl;
                }

            }

        
        }
        
        else
            
        {
            cout<< " Cases are not met"<<endl;
        }
        
        if(uppercase>0 && lowercase>0 && digit>0)
            
    {
        cout<< " Reenter your password"<<endl;
        cin>> re_input_pass;
        
        if (input_pass.compare(re_input_pass)==0)
            
        {
            cout<< " Good Job!, you put the correct password !"<<endl;
        }
        
        else
        {
            do
            {
                
                cout<< " your password did not match "<<endl;
                cout<< " Reenter your password Again "<<endl;
                cin>> re_input_pass;
                
                
            } while (input_pass.compare(re_input_pass)!=0);
            
            cout<< " Your password matched."<<endl;
        }
        
    }
    
        
        
}
    

else
{
    cout<< " you are messed up " << " " << " Enter again :"<<endl;
}
    
    
}
