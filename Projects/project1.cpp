#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/********************************** DIETARY------ FIBER ------CALCULATOR ***************************************** */

class Fiber
{
    private:
     //float avocado=14,guava=5,raspberry=0.325,pomegranate=4,kiwi=2.1,orange=2.4,;
     float f[10]={14,5,0.325,4, 2.1, 2.4, 2.4, 2.6, 2.4};
     float v[10]={4.4, 0.6, 12.5, 2.7, 6.8, 2.8, 3.2};
     float pul[10]={15,18.0,18,18,10};
     float g[10]={3,17,1,2.0};
     char z;


    public:
      int Fruits(void);
      int Vegetables(void);
      int Pulses(void);
      int Grains(void);
      int q;
      

};
 
int Fiber:: Fruits(void)
{  cout<<"Fruits which are abundant in fiber are shown in this list"<<endl;
   cout<<"1)Avocado \n 2)Guava \n 3)Rashpberry \n 4)Pomegranate \n 5)Kiwi \n 6)Orange \n 7)Apple \n 8)Banana \n 9)Mango"<<endl;
   cout<<"Enter the number associated with the Fruit"<<endl;
   int n;
   cin>>n;
   int a[10]={1,2,3,4,5,6,7,8,9};
   for(int i=0; i<9; i++)
   {  if (a[i]==n){
     switch(a[i])
       { case 1: cout<<"Your choosen fruit is Avocado"<<endl; 
       //this all association does not work inside the case        
                 // cout<<"Enter the number of Avocado you eating"<<endl;
                 //int av,Avocado =14,A=0; 
                 //cin>>av;
                 //A=av*Avocado;
                 //cout<<"Total fiber you get from Avocado is"<<A<<endl;


              break;
        case 2:  cout<<"Your choosen fruit is Guava"<<endl;
             break;
        case 3:  cout<<"Your choosen fruit is Raspberry"<<endl;
            break;
        case 4:  cout<<"Your choosen fruit is Pomegranate"<<endl;
             break;
        case 5:  cout<<"Your choosen fruit is Kiwi"<<endl;     
             break;
        case 6:  cout<<"Your choosen fruit is Orange"<<endl;
             break;             
        case 7:  cout<<"Your choosen fruit is Apple"<<endl;
             break;            
        case 8:  cout<<"Your choosen fruit is Banana"<<endl;
             break;
        case 9:  cout<<"Your choosen fruit is Mango"<<endl;
             break;                
        
        default :
           cout<<"Please enter correct number";
       }  
    }
    
    
  }
     if(n==1)
     {
        cout<<"enter the number of avocado you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*f[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==2)
     {
        cout<<"enter the number of guava you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*f[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==3)
     {
        cout<<"enter the number of raspberry you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*f[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==4)
     {
        cout<<"enter the number of pomegranate you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*f[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==5)
     {
        cout<<"enter the number of kiwi you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*f[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==6)
     {
        cout<<"enter the number of orange you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*f[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==7)
     {
        cout<<"enter the number of apple you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*f[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==8)
     {
        cout<<"enter the number of banana you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*f[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==9)
     {
        cout<<"enter the number of mango you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*f[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
}


int Fiber:: Vegetables(void)
{  cout<<" Vegetables which are abundant in fiber are shown in this list"<<endl;
   cout<<" 1)Green peas \n 2)Turnip green \n 3)Cabbage \n 4)Potato \n 5)Sweet corn \n 6)Carrot \n 7)Okra"<<endl; 
   cout<<"Enter the number associated with the Vegetable"<<endl;
   int n;
   cin>>n;
   int a[10]={1,2,3,4,5,6,7};
   for(int i=0; i<9; i++)
   {  if (a[i]==n)
     {  switch(a[i])
       { case 1: cout<<"Green peas"<<endl;   
              break;
        case 2:  cout<<"Turnip green"<<endl;
             break;
        case 3:  cout<<"Cabbage"<<endl;
            break;
        case 4:  cout<<"Potato"<<endl;
             break;
        case 5:  cout<<"Sweet corn"<<endl;     
             break;
        case 6:  cout<<"Carrot"<<endl;
             break;             
        case 7:  cout<<"OKra"<<endl;
             break;                           
        
        default :
           cout<<"Please enter correct number";
       }  
    }
   }
   if(n==1)
     {
        cout<<"enter the number of Green peas you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*v[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==2)
     {
        cout<<"enter the number of Turnip green you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*v[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==3)
     {
        cout<<"enter the number of Cabbage you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*v[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==4)
     {
        cout<<"enter the number of Potato you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*v[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==5)
     {
        cout<<"enter the number of Sweet corn you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*v[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==6)
     {
        cout<<"enter the number of Carrot you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*v[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==7)
     {
        cout<<"enter the number of Okra you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*v[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }

}

int Fiber:: Pulses(void)
{  cout<<" Pulses which are abundant in fiber are shown in this list"<<endl;
   cout<<"1)Split peas \n 2)Green gram \n 3)Black gram \n 4)Chickpea \n 5)Chana"<<endl;
   cout<<"Enter the number associated with the Pulse"<<endl;
   int n;
   cin>>n;
   int a[10]={1,2,3,4,5};
   for(int i=0; i<9; i++)
   {  if (a[i]==n)
     {  switch(a[i])
       { case 1: cout<<"Split peas"<<endl;   
              break;
        case 2:  cout<<"Green gram"<<endl;
             break;
        case 3:  cout<<"Black gram"<<endl;
            break;
        case 4:  cout<<"Chickpea"<<endl;
             break;
        case 5:  cout<<"Chana"<<endl;     
             break;                          
        
        default :
           cout<<"Please enter correct number";
       }  
    }
   }
   if(n==1)
     {
        cout<<"enter the number of (cups) Split peas (1cup=100gram) you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*pul[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==2)
     {
        cout<<"enter the number of (cups) Green gram(100gram) you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*pul[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==3)
     {
        cout<<"enter the number of (cups) Black gram(100gram) you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*pul[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==4)
     {
        cout<<"enter the number of (cups) Chickpea(100gram) you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*pul[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==5)
     {
        cout<<"enter the number of (cups) Chana(100gram) you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*pul[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }


}

int Fiber:: Grains(void)
{  cout<<"Grains which are abundant in fiber are shown in this list"<<endl;
   cout<<"1)Whole wheat \n 2)Barley \n 3)Rice \n 4)Maize"<<endl;
   cout<<"Enter the number associated with the Grain"<<endl;
   int n;
   cin>>n;
   int a[10]={1,2,3,4};
   for(int i=0; i<9; i++)
   {  if (a[i]==n)
     {  switch(a[i])
       { case 1: cout<<"Whole wheat \n";   
              break;
        case 2:  cout<<"Barley \n";
             break;
        case 3:  cout<<"Rice \n";
            break;
        case 4:  cout<<"Maize \n";
             break;                           
        
        default :
           cout<<"Please enter correct number";
       }  
    }
   }
   if(n==1)
     {
        cout<<"enter the number of Whole wheat(Roti) you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*g[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==2)
     {
        cout<<"enter the number of (cups) Barley(1 cup=100gram) you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*g[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==3)
     {
        cout<<"enter the number of (cups) Rice(1 cup=100gram) you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*g[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }
     if(n==4)
     {
        cout<<"enter the number of (cups) Maize(1 cup=100gram) you ate"<<endl;
        cin>>q;
        cout<<"you will get "<< (q*g[n-1])<<"grams of fiber" <<endl;
        exit(0);
     }

}

int main()
{    Fiber p1,p2,p3,p4;
    //p1.Fruits();

    cout<<"\n*******************WELCOME******************"<<endl;
    cout<<"Which category do you choose to know about fiber content?"<<endl;
    cout<<"WE HAVE 4 CATEGORIES "<<"\n 1)Vegetables \n 2)Fruits \n 3)Pulses \n 4)Grains "<<endl;
    cout<<"\n If you are interested  to search any of category just type the first letter of that category in block letter"<<endl;
    char z;
    cin>>z;
    switch(z)
       { case 'V':
        
            cout<<"Your chosen category is Vegetables \n";   
            break;
        
        case 'F':
        
            cout<<"Your chosen category is Fruits \n";
            break;
        
        case 'G':
        
            cout<<"Your chosen category is Grains \n";
            break;
        
        case 'P':
        
            cout<<"Your chosen category is Pulses \n";
            break;
        default :
           cout<<"Please enter correct Category";
       }
       if (z=='F')
       {
          p1.Fruits();
          exit(0);

       }
       if (z=='V')
       {
          p1.Vegetables();
          exit(0);

       }
       if (z=='P')
       {
          p1.Pulses();
          exit(0);

       }
       if (z=='G')
       {
          p1.Grains();
          exit(0);

       }


       
    return 0;
}