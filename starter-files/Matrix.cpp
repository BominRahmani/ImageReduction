// Project UID af1f95f547e44c8ea88730dfb185559ds

#include <cassert>
#include "Matrix.h"

// REQUIRES: mat points to a Matrix
//           0 < width && width <= MAX_MATRIX_WIDTH
//           0 < height && height <= MAX_MATRIX_HEIGHT
// MODIFIES: *mat
// EFFECTS:  Initializes *mat as a Matrix with the given width and height.
// NOTE:     Do NOT use new or delete here.
void Matrix_init(Matrix* mat, int width, int height) {
    assert(0 <= row);
    assert(0 <= column);
    mat->height = height;
    mat->width = width;
  // TODO Replace with your implementation!
}

// REQUIRES: mat points to a valid Matrix
// MODIFIES: os
// EFFECTS:  First, prints the width and height for the Matrix to os:
//             WIDTH [space] HEIGHT [newline]
//           Then prints the rows of the Matrix to os with one row per line.
//           Each element is followed by a space and each row is followed
//           by a newline. This means there will be an "extra" space at
//           the end of each line.
void Matrix_print(const Matrix* mat, std::ostream& os) {
    std::cout << mat->width << " " << mat->height << endl;
    for(int i = 0; i < mat->height * mat->width; ++i){
    if( i % mat->width == 0){
        std::cout << mat[i].data << " " << endl;
    }
    else{
        std::cout << mat[i].data << " ";
    }
    }
  // TODO Replace with your implementation!
}

// REQUIRES: mat points to an valid Matrix
// EFFECTS:  Returns the width of the Matrix.
int Matrix_width(const Matrix* mat) {
    return mat->width;
  // TODO Replace with your implementation!
}

// REQUIRES: mat points to a valid Matrix
// EFFECTS:  Returns the height of the Matrix.
int Matrix_height(const Matrix* mat) {
    return mat->height;
  // TODO Replace with your implementation!
}

// REQUIRES: mat points to a valid Matrix
//           ptr points to an element in the Matrix
// EFFECTS:  Returns the row of the element pointed to by ptr.
int Matrix_row(const Matrix* mat, const int* ptr) {
    // TODO Replace with your implementation!
    // index would be represented as index = y * Width + x where its (x,y)
    for(int i = 0; i < mat->height * mat->width; ++i){
        // (x,y) where x is x = index % width
        // where y is y = index / width
        if(mat[i].data == ptr){
            return i / mat->width;
        }
    }
}

// REQUIRES: mat points to a valid Matrix
//           ptr point to an element in the Matrix
// EFFECTS:  Returns the column of the element pointed to by ptr.
int Matrix_column(const Matrix* mat, const int* ptr) {
    // TODO Replace with your implementation!
    for(int i = 0; i < mat->height * mat->width; ++i){
        // (x,y) where x is x = index % width
        // where y is y = index / width
        if(mat[i] == ptr){
            return i % mat->width;
        }
    }
}
// REQUIRES: mat points to a valid Matrix
//           0 <= row && row < Matrix_height(mat)
//           0 <= column && column < Matrix_width(mat)
//
// MODIFIES: (The returned pointer may be used to modify an
//            element in the Matrix.)
// EFFECTS:  Returns a pointer to the element in the Matrix
//           at the given row and column.
int* Matrix_at(Matrix* mat, int row, int column) {
    // index would be represented as index = y * Width + x where its (x,y)
    assert(0 <= row && row < mat->height);
    assert(0 <= column && column < mat->width);
    assert( row * col == mat->width * mat->height); // this might be an incorrect way of checking whether it points to valid matrix
    int index = row * mat->width + column;
    int* ptr = mat[index];
    return ptr;
}

// REQUIRES: mat points to a valid Matrix
//           0 <= row && row < Matrix_height(mat)
//           0 <= column && column < Matrix_width(mat)
//
// EFFECTS:  Returns a pointer-to-const to the element in
//           the Matrix at the given row and column.
const int* Matrix_at(const Matrix* mat, int row, int column) {
    // index would be represented as index = y * Width + x where its (x,y)
    assert(0 <= row && row < mat->height);
    assert(0 <= column && column < mat->width);
    assert( row * col == mat->width * mat->height); // this might be an incorrect way of checking whether it points to valid matrix
    int index = row * mat->width + column;
    const int* ptr = mat[index];
    return ptr;
}

// REQUIRES: mat points to a valid Matrix
// MODIFIES: *mat
// EFFECTS:  Sets each element of the Matrix to the given value.
void Matrix_fill(Matrix* mat, int value) {
 // TODO Replace with your implementation!
  for(int i = 0; i < mat->width * mat->height; ++i){
      mat[i] = value;
  }
}

// REQUIRES: mat points to a valid Matrix
// MODIFIES: *mat
// EFFECTS:  Sets each element on the border of the Matrix to
//           the given value. These are all elements in the first/last
//           row or the first/last column.
void Matrix_fill_border(Matrix* mat, int value) {
    // TODO Replace with your implementation!
  //brute force fast approach (can change later if faster way is thought of)
  //top row
  for(int i = 0; i < mat->width; ++i){
      mat[i] = value;
  }
  //bottom row
  for(int i = (mat->width * mat->height) - mat->width; i < (mat->width * mat->height); ++i){
      mat[i] = value;
  }
  //first column
  for(int i = 0; i <= (mat->width * mat->height) - mat->width; i += width){
    mat[i] = value;
  }
  //last column
    for(int i = mat->width - 1; i < (mat->width * mat->height); i += width){
        mat[i] = value;
    }
}

// REQUIRES: mat points to a valid Matrix
// EFFECTS:  Returns the value of the maximum element in the Matrix
int Matrix_max(const Matrix* mat) {
 // TODO Replace with your implementation!
  int max = mat[0].data;
    for(int i = 1; i < mat->width * mat->height; ++i){
        if(mat[i].data > max){
            max = mat[i];
        }
    }
    return max;
}

// REQUIRES: mat points to a valid Matrix
//           0 <= row && row < Matrix_height(mat)
//           0 <= column_start && column_end <= Matrix_width(mat)
//           column_start < column_end
// EFFECTS:  Returns the column of the element with the minimal value
//           in a particular region. The region is defined as elements
//           in the given row and between column_start (inclusive) and
//           column_end (exclusive).
//           If multiple elements are minimal, returns the column of
//           the leftmost one.
int Matrix_column_of_min_value_in_row(const Matrix* mat, int row,
                                      int column_start, int column_end) {
    assert(0 <= row && row < mat->height);
    assert(0 <= column && column < mat->width);
    // assert column_start < column_end

  assert(false); // TODO Replace with your implementation!
}


// REQUIRES: mat points to a valid Matrix
//           0 <= row && row < Matrix_height(mat)
//           0 <= column_start && column_end <= Matrix_width(mat)
//           column_start < column_end
// EFFECTS:  Returns the minimal value in a particular region. The region
//           is defined as elements in the given row and between
//           column_start (inclusive) and column_end (exclusive).
int Matrix_min_value_in_row(const Matrix* mat, int row,
                            int column_start, int column_end) {
  assert(false); // TODO Replace with your implementation!
}
