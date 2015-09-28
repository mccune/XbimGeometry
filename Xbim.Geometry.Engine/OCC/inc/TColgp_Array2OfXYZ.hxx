// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_Array2OfXYZ_HeaderFile
#define _TColgp_Array2OfXYZ_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class gp_XYZ;



class TColgp_Array2OfXYZ 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TColgp_Array2OfXYZ(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
  Standard_EXPORT TColgp_Array2OfXYZ(const gp_XYZ& Item, const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
  Standard_EXPORT   void Init (const gp_XYZ& V) ;
  
  Standard_EXPORT   void Destroy() ;
~TColgp_Array2OfXYZ()
{
  Destroy();
}
  
  Standard_EXPORT  const  TColgp_Array2OfXYZ& Assign (const TColgp_Array2OfXYZ& Other) ;
 const  TColgp_Array2OfXYZ& operator = (const TColgp_Array2OfXYZ& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer ColLength()  const;
  
      Standard_Integer RowLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
      void SetValue (const Standard_Integer Row, const Standard_Integer Col, const gp_XYZ& Value) ;
  
     const  gp_XYZ& Value (const Standard_Integer Row, const Standard_Integer Col)  const;
   const  gp_XYZ& operator() (const Standard_Integer Row, const Standard_Integer Col)  const
{
  return Value(Row,Col);
}
  
      gp_XYZ& ChangeValue (const Standard_Integer Row, const Standard_Integer Col) ;
    gp_XYZ& operator() (const Standard_Integer Row, const Standard_Integer Col) 
{
  return ChangeValue(Row,Col);
}




protected:





private:

  
  Standard_EXPORT TColgp_Array2OfXYZ(const TColgp_Array2OfXYZ& AnArray);
  
  Standard_EXPORT   void Allocate() ;


  Standard_Integer myLowerRow;
  Standard_Integer myLowerColumn;
  Standard_Integer myUpperRow;
  Standard_Integer myUpperColumn;
  Standard_Boolean myDeletable;
  Standard_Address myData;


};

#define Array2Item gp_XYZ
#define Array2Item_hxx <gp_XYZ.hxx>
#define TCollection_Array2 TColgp_Array2OfXYZ
#define TCollection_Array2_hxx <TColgp_Array2OfXYZ.hxx>

#include <TCollection_Array2.lxx>

#undef Array2Item
#undef Array2Item_hxx
#undef TCollection_Array2
#undef TCollection_Array2_hxx




#endif // _TColgp_Array2OfXYZ_HeaderFile
