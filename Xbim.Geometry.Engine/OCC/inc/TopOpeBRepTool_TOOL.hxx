// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_TOOL_HeaderFile
#define _TopOpeBRepTool_TOOL_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
class TopoDS_Shape;
class TopoDS_Edge;
class TopoDS_Vertex;
class TopoDS_Face;
class TopTools_Array1OfShape;
class gp_Pnt2d;
class TopOpeBRepTool_C2DF;
class gp_Vec;
class gp_Dir2d;
class BRepAdaptor_Curve;
class gp_Vec2d;
class gp_Dir;
class Geom2d_Curve;
class gp_Pnt;
class TopTools_ListOfShape;
class TopTools_DataMapOfShapeListOfShape;



class TopOpeBRepTool_TOOL  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  Standard_Integer OriinSor(const TopoDS_Shape& sub,const TopoDS_Shape& S,const Standard_Boolean checkclo = Standard_False) ;
  
  Standard_EXPORT   static  Standard_Integer OriinSorclosed(const TopoDS_Shape& sub,const TopoDS_Shape& S) ;
  
  Standard_EXPORT   static  Standard_Boolean ClosedE(const TopoDS_Edge& E,TopoDS_Vertex& vclo) ;
  
  Standard_EXPORT   static  Standard_Boolean ClosedS(const TopoDS_Face& F) ;
  
  Standard_EXPORT   static  Standard_Boolean IsClosingE(const TopoDS_Edge& E,const TopoDS_Face& F) ;
  
  Standard_EXPORT   static  Standard_Boolean IsClosingE(const TopoDS_Edge& E,const TopoDS_Shape& W,const TopoDS_Face& F) ;
  
  Standard_EXPORT   static  void Vertices(const TopoDS_Edge& E,TopTools_Array1OfShape& Vces) ;
  
  Standard_EXPORT   static  TopoDS_Vertex Vertex(const Standard_Integer Iv,const TopoDS_Edge& E) ;
  
  Standard_EXPORT   static  Standard_Real ParE(const Standard_Integer Iv,const TopoDS_Edge& E) ;
  
  Standard_EXPORT   static  Standard_Integer OnBoundary(const Standard_Real par,const TopoDS_Edge& E) ;
  
  Standard_EXPORT   static  gp_Pnt2d UVF(const Standard_Real par,const TopOpeBRepTool_C2DF& C2DF) ;
  
  Standard_EXPORT   static  Standard_Boolean ParISO(const gp_Pnt2d& p2d,const TopoDS_Edge& e,const TopoDS_Face& f,Standard_Real& pare) ;
  
  Standard_EXPORT   static  Standard_Boolean ParE2d(const gp_Pnt2d& p2d,const TopoDS_Edge& e,const TopoDS_Face& f,Standard_Real& par,Standard_Real& dist) ;
  
  Standard_EXPORT   static  Standard_Boolean Getduv(const TopoDS_Face& f,const gp_Pnt2d& uv,const gp_Vec& dir,const Standard_Real factor,gp_Dir2d& duv) ;
  
  Standard_EXPORT   static  Standard_Boolean uvApp(const TopoDS_Face& f,const TopoDS_Edge& e,const Standard_Real par,const Standard_Real eps,gp_Pnt2d& uvapp) ;
  
  Standard_EXPORT   static  Standard_Real TolUV(const TopoDS_Face& F,const Standard_Real tol3d) ;
  
  Standard_EXPORT   static  Standard_Real TolP(const TopoDS_Edge& E,const TopoDS_Face& F) ;
  
  Standard_EXPORT   static  Standard_Real minDUV(const TopoDS_Face& F) ;
  
  Standard_EXPORT   static  Standard_Boolean outUVbounds(const gp_Pnt2d& uv,const TopoDS_Face& F) ;
  
  Standard_EXPORT   static  void stuvF(const gp_Pnt2d& uv,const TopoDS_Face& F,Standard_Integer& onU,Standard_Integer& onV) ;
  
  Standard_EXPORT   static  Standard_Boolean TggeomE(const Standard_Real par,const BRepAdaptor_Curve& BC,gp_Vec& Tg) ;
  
  Standard_EXPORT   static  Standard_Boolean TggeomE(const Standard_Real par,const TopoDS_Edge& E,gp_Vec& Tg) ;
  
  Standard_EXPORT   static  Standard_Boolean TgINSIDE(const TopoDS_Vertex& v,const TopoDS_Edge& E,gp_Vec& Tg,Standard_Integer& OvinE) ;
  
  Standard_EXPORT   static  gp_Vec2d Tg2d(const Standard_Integer iv,const TopoDS_Edge& E,const TopOpeBRepTool_C2DF& C2DF) ;
  
  Standard_EXPORT   static  gp_Vec2d Tg2dApp(const Standard_Integer iv,const TopoDS_Edge& E,const TopOpeBRepTool_C2DF& C2DF,const Standard_Real factor) ;
  
  Standard_EXPORT   static  gp_Vec2d tryTg2dApp(const Standard_Integer iv,const TopoDS_Edge& E,const TopOpeBRepTool_C2DF& C2DF,const Standard_Real factor) ;
  
  Standard_EXPORT   static  Standard_Boolean XX(const gp_Pnt2d& uv,const TopoDS_Face& f,const Standard_Real par,const TopoDS_Edge& e,gp_Dir& xx) ;
  
  Standard_EXPORT   static  Standard_Boolean Nt(const gp_Pnt2d& uv,const TopoDS_Face& f,gp_Dir& normt) ;
  
  Standard_EXPORT   static  Standard_Boolean NggeomF(const gp_Pnt2d& uv,const TopoDS_Face& F,gp_Vec& ng) ;
  
  Standard_EXPORT   static  Standard_Boolean NgApp(const Standard_Real par,const TopoDS_Edge& E,const TopoDS_Face& F,const Standard_Real tola,gp_Dir& ngApp) ;
  
  Standard_EXPORT   static  Standard_Boolean tryNgApp(const Standard_Real par,const TopoDS_Edge& E,const TopoDS_Face& F,const Standard_Real tola,gp_Dir& ng) ;
  
  Standard_EXPORT   static  Standard_Integer tryOriEinF(const Standard_Real par,const TopoDS_Edge& E,const TopoDS_Face& F) ;
  
  Standard_EXPORT   static  Standard_Boolean IsQuad(const TopoDS_Edge& E) ;
  
  Standard_EXPORT   static  Standard_Boolean IsQuad(const TopoDS_Face& F) ;
  
  Standard_EXPORT   static  Standard_Boolean CurvE(const TopoDS_Edge& E,const Standard_Real par,const gp_Dir& tg0,Standard_Real& Curv) ;
  
  Standard_EXPORT   static  Standard_Boolean CurvF(const TopoDS_Face& F,const gp_Pnt2d& uv,const gp_Dir& tg0,Standard_Real& Curv,Standard_Boolean& direct) ;
  
  Standard_EXPORT   static  Standard_Boolean UVISO(const Handle(Geom2d_Curve)& PC,Standard_Boolean& isou,Standard_Boolean& isov,gp_Dir2d& d2d,gp_Pnt2d& o2d) ;
  
  Standard_EXPORT   static  Standard_Boolean UVISO(const TopOpeBRepTool_C2DF& C2DF,Standard_Boolean& isou,Standard_Boolean& isov,gp_Dir2d& d2d,gp_Pnt2d& o2d) ;
  
  Standard_EXPORT   static  Standard_Boolean UVISO(const TopoDS_Edge& E,const TopoDS_Face& F,Standard_Boolean& isou,Standard_Boolean& isov,gp_Dir2d& d2d,gp_Pnt2d& o2d) ;
  
  Standard_EXPORT   static  Standard_Boolean IsonCLO(const Handle(Geom2d_Curve)& PC,const Standard_Boolean onU,const Standard_Real xfirst,const Standard_Real xperiod,const Standard_Real xtol) ;
  
  Standard_EXPORT   static  Standard_Boolean IsonCLO(const TopOpeBRepTool_C2DF& C2DF,const Standard_Boolean onU,const Standard_Real xfirst,const Standard_Real xperiod,const Standard_Real xtol) ;
  
  Standard_EXPORT   static  void TrslUV(const gp_Vec2d& t2d,TopOpeBRepTool_C2DF& C2DF) ;
  
  Standard_EXPORT   static  Standard_Boolean TrslUVModifE(const gp_Vec2d& t2d,const TopoDS_Face& F,TopoDS_Edge& E) ;
  
  Standard_EXPORT   static  Standard_Real Matter(const gp_Vec& d1,const gp_Vec& d2,const gp_Vec& ref) ;
  
  Standard_EXPORT   static  Standard_Real Matter(const gp_Vec2d& d1,const gp_Vec2d& d2) ;
  
  Standard_EXPORT   static  Standard_Boolean Matter(const gp_Dir& xx1,const gp_Dir& nt1,const gp_Dir& xx2,const gp_Dir& nt2,const Standard_Real tola,Standard_Real& Ang) ;
  
  Standard_EXPORT   static  Standard_Boolean Matter(const TopoDS_Face& f1,const TopoDS_Face& f2,const TopoDS_Edge& e,const Standard_Real pare,const Standard_Real tola,Standard_Real& Ang) ;
  
  Standard_EXPORT   static  Standard_Boolean MatterKPtg(const TopoDS_Face& f1,const TopoDS_Face& f2,const TopoDS_Edge& e,Standard_Real& Ang) ;
  
  Standard_EXPORT   static  Standard_Boolean Getstp3dF(const gp_Pnt& p,const TopoDS_Face& f,gp_Pnt2d& uv,TopAbs_State& st) ;
  
  Standard_EXPORT   static  Standard_Boolean SplitE(const TopoDS_Edge& Eanc,TopTools_ListOfShape& Splits) ;
  
  Standard_EXPORT   static  void MkShell(const TopTools_ListOfShape& lF,TopoDS_Shape& She) ;
  
  Standard_EXPORT   static  Standard_Boolean Remove(TopTools_ListOfShape& loS,const TopoDS_Shape& toremove) ;
  
  Standard_EXPORT   static  Standard_Boolean WireToFace(const TopoDS_Face& Fref,const TopTools_DataMapOfShapeListOfShape& mapWlow,TopTools_ListOfShape& lFs) ;
  
  Standard_EXPORT   static  Standard_Boolean EdgeONFace(const Standard_Real par,const TopoDS_Edge& ed,const gp_Pnt2d& uv,const TopoDS_Face& fa,Standard_Boolean& isonfa) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif