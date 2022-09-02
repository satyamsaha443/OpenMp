template < typename T >
T **Allocate2DArray( int nRows, int nCols)
{
    T **ppi = (T **) malloc(sizeof(T *)*nRows);
    T *curPtr = (T *) malloc(sizeof(T) * nRows * nCols);
    for( int i = 0; i < nRows; ++i)
    {
        *(ppi + i) = curPtr;
         curPtr += nCols;
    }
    return ppi;
}

template < typename T >
void Free2DArray(T** Array)
{
    free(*Array);
    free(Array);
}
