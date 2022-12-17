#include<iostream>
using namespace std; 

// Virtual function example and creation rules in c++

class Ankesh{
    protected:
        string title;
        float rating;
    public:
        Ankesh(string s, float r){
            title = s;
            rating = r;
        }

        virtual void display(){}

};

class AnkeshVideo : public Ankesh {
    float video_length;
    public:
        AnkeshVideo(string s , float r , float vl) : Ankesh (s,r){
            video_length = vl;

        }
        void display(){
            cout<<"The title of this amazoing video is "<<title <<endl;
            cout<<"The length of this Amazing video is "<<video_length<<" minutes. "<<endl;
            cout<<"The Ratings :" <<rating << " out of five stars."<<endl;
        }
};

class AnkeshText : public Ankesh{
    int words;
    public:
        AnkeshText(string s , float r, int w) : Ankesh(s,r){
            words = w;
        }
        void display(){
            cout<<"The title of this beautiful text content is "<<title<<"."<<endl;
            cout<<"The rating of this amazing content is "<< rating <<" out of 5 stars ."<<endl;
            cout<<"The total count of words to this beautiful content is "<<words<<" words."<<endl;
        }
};
 
int main(){

    string title;
    float rating , video_length;
    int words ;


    //  for AnkeshVideo output and its object 
    title = "Ankesh Andragogy Startup";
    rating = 4.55;
    video_length = 23.59;
    AnkeshVideo AVideo(title,rating,video_length);
    // AVideo.display();   

    // for AnkeshText output and its object
    title =" Ankesh Analytical Blog";
    rating = 4.88;
    words = 455;
    AnkeshText Atext(title,rating,words);
    // Atext.display();

    Ankesh* anii[2]; // Here we have declared 2 pointers which points the object of two different derived class inherited from base Ankesh.
    anii[0] = &AVideo;
    anii[1] = &Atext;
    // Ankesh *a;
    // Ankesh *b;
    // a = &AVideo;
    // b = &Atext;

    // a->display(); // This is used here to call the functioin using pointer 
    // b->display();
    anii[0]->display();
    anii[1]->display();
    return 0;
}


/*
Rules for Virtual function :- 
1. They cannot be static 
2.They are accessed by object pointers.
3. Virual function can be friend of another class .
4. A virtual function in base class might not be used as in this given above program.
5. If a virtual function is defined in base class then there is no necessity of redefining it in derived class again.
6. If we didn't define any function of same name in derived class  then bydefault base class virtual function is called and no error occured .

*/