# include <stdio.h>
# include <stdlib.h>

using namespace std;


struct Image {  // image struct 
    int width, height;
    unsigned char* pixel;
    unsigned char* Get_Pixel(int x, int y) {return data[y * width + x]; }  // getting pixel with x,y cords
    void Set_Pixel(int x, int y, unsigned char value) {data[y * width + x] = value;} // setting value to pixel
}



class ImageSegment {  // creating a Class for images
    
public:
    ImageSegment() {m_width = m_height = m_data = 0 ;}  // Constructor initialize to 0
    ImageSegment(int w, int h){    // constructor initialize Width and Height
    m_width = w;
    m_height = h;
    m_data =  (unsigned char*) malloc(m_width * m_height * sizeof(unsigned char));  // malloc returns void pointer --> typecasted to unsigned char pointer. Store in m_data
    }
    unsigned char Get_Pixel(int x, int y,) {return data[y * width + x]}
    void Set_Pixel(int x, int y, unsigned char value) {data[y * width + x] = value}

private:
    int m_width, m_height;
    unsigned char* m_data;
}




void main() {

}
