//
// File generated by rootcint at Sat Nov 26 23:23:28 2011

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME dOdIsrcdIJetColor_dict
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "JetColor_dict.h"

#include "TCollectionProxyInfo.h"
#include "TClass.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"

// START OF SHADOWS

namespace ROOT {
   namespace Shadow {
      #if !(defined(R__ACCESS_IN_SYMBOL) || defined(R__USE_SHADOW_CLASS))
      typedef pair< ::string, ::string > pairlEstringcOstringgR;
      #else
      class pairlEstringcOstringgR  {
         public:
         //friend XX;
         string first; //
         string second; //
      };
      #endif

   } // of namespace Shadow
} // of namespace ROOT
// END OF SHADOWS

namespace ROOT {
   void pairlEstringcOstringgR_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void pairlEstringcOstringgR_Dictionary();
   static void *new_pairlEstringcOstringgR(void *p = 0);
   static void *newArray_pairlEstringcOstringgR(Long_t size, void *p);
   static void delete_pairlEstringcOstringgR(void *p);
   static void deleteArray_pairlEstringcOstringgR(void *p);
   static void destruct_pairlEstringcOstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<string,string>*)
   {
      // Make sure the shadow class has the right sizeof
      R__ASSERT(sizeof(pair<string,string>) == sizeof(::ROOT::Shadow::pairlEstringcOstringgR));
      pair<string,string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<string,string>),0);
      static ::ROOT::TGenericClassInfo 
         instance("pair<string,string>", "/home/dave/root/cint/cint/lib/prec_stl/utility", 17,
                  typeid(pair<string,string>), DefineBehavior(ptr, ptr),
                  &pairlEstringcOstringgR_ShowMembers, &pairlEstringcOstringgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<string,string>) );
      instance.SetNew(&new_pairlEstringcOstringgR);
      instance.SetNewArray(&newArray_pairlEstringcOstringgR);
      instance.SetDelete(&delete_pairlEstringcOstringgR);
      instance.SetDeleteArray(&deleteArray_pairlEstringcOstringgR);
      instance.SetDestructor(&destruct_pairlEstringcOstringgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const pair<string,string>*)
   {
      return GenerateInitInstanceLocal((pair<string,string>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<string,string>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void pairlEstringcOstringgR_Dictionary() {
      ::ROOT::GenerateInitInstanceLocal((const pair<string,string>*)0x0)->GetClass();
   }

} // end of namespace ROOT

//______________________________________________________________________________
namespace ROOT {
   void pairlEstringcOstringgR_ShowMembers(void *obj, TMemberInspector &R__insp)
   {
      // Inspect the data members of an object of class pair<string,string>.
      typedef ::ROOT::Shadow::pairlEstringcOstringgR ShadowClass;
      ShadowClass *sobj = (ShadowClass*)obj;
      if (sobj) { } // Dummy usage just in case there is no datamember.

      TClass *R__cl  = ::ROOT::GenerateInitInstanceLocal((const pair<string,string>*)0x0)->GetClass();
      if (R__cl || R__insp.IsA()) { }
      R__insp.Inspect(R__cl, R__insp.GetParent(), "first", (void*)&sobj->first);
      R__insp.InspectMember("string", (void*)&sobj->first, "first.", false);
      R__insp.Inspect(R__cl, R__insp.GetParent(), "second", (void*)&sobj->second);
      R__insp.InspectMember("string", (void*)&sobj->second, "second.", false);
   }

}

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEstringcOstringgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<string,string> : new pair<string,string>;
   }
   static void *newArray_pairlEstringcOstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<string,string>[nElements] : new pair<string,string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEstringcOstringgR(void *p) {
      delete ((pair<string,string>*)p);
   }
   static void deleteArray_pairlEstringcOstringgR(void *p) {
      delete [] ((pair<string,string>*)p);
   }
   static void destruct_pairlEstringcOstringgR(void *p) {
      typedef pair<string,string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<string,string>

namespace ROOT {
   void vectorlEfloatgR_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void vectorlEfloatgR_Dictionary();
   static void *new_vectorlEfloatgR(void *p = 0);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>),0);
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector.dll", 0,
                  typeid(vector<float>), DefineBehavior(ptr, ptr),
                  0, &vectorlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<float>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void vectorlEfloatgR_Dictionary() {
      ::ROOT::GenerateInitInstanceLocal((const vector<float>*)0x0)->GetClass();
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

/********************************************************
* ./src/JetColor_dict.cxx
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#undef free
#endif

#if defined(__GNUC__) && __GNUC__ >= 4 && ((__GNUC_MINOR__ == 2 && __GNUC_PATCHLEVEL__ >= 1) || (__GNUC_MINOR__ >= 3))
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

extern "C" void G__cpp_reset_tagtableJetColor_dict();

extern "C" void G__set_cpp_environmentJetColor_dict() {
  G__cpp_reset_tagtableJetColor_dict();
}
#include <new>
extern "C" int G__cpp_dllrevJetColor_dict() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* pair<string,string> */
static int G__JetColor_dict_162_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   pair<string,string>* p = NULL;
   char* gvp = (char*) G__getgvp();
   int n = G__getaryconstruct();
   if (n) {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new pair<string,string>[n];
     } else {
       p = new((void*) gvp) pair<string,string>[n];
     }
   } else {
     if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
       p = new pair<string,string>;
     } else {
       p = new((void*) gvp) pair<string,string>;
     }
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__JetColor_dictLN_pairlEstringcOstringgR));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__JetColor_dict_162_0_2(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   pair<string,string>* p = NULL;
   char* gvp = (char*) G__getgvp();
   //m: 2
   if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
     p = new pair<string,string>(*(string*) libp->para[0].ref, *(string*) libp->para[1].ref);
   } else {
     p = new((void*) gvp) pair<string,string>(*(string*) libp->para[0].ref, *(string*) libp->para[1].ref);
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__JetColor_dictLN_pairlEstringcOstringgR));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__JetColor_dict_162_0_4(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)

{
   pair<string,string>* p;
   void* tmp = (void*) G__int(libp->para[0]);
   p = new pair<string,string>(*(pair<string,string>*) tmp);
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__JetColor_dictLN_pairlEstringcOstringgR));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef pair<string,string> G__TpairlEstringcOstringgR;
static int G__JetColor_dict_162_0_5(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   char* gvp = (char*) G__getgvp();
   long soff = G__getstructoffset();
   int n = G__getaryconstruct();
   //
   //has_a_delete: 0
   //has_own_delete1arg: 0
   //has_own_delete2arg: 0
   //
   if (!soff) {
     return(1);
   }
   if (n) {
     if (gvp == (char*)G__PVOID) {
       delete[] (pair<string,string>*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((pair<string,string>*) (soff+(sizeof(pair<string,string>)*i)))->~G__TpairlEstringcOstringgR();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (pair<string,string>*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((pair<string,string>*) (soff))->~G__TpairlEstringcOstringgR();
       G__setgvp((long)gvp);
     }
   }
   G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* pair<string,string> */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncJetColor_dict {
 public:
  G__Sizep2memfuncJetColor_dict(): p(&G__Sizep2memfuncJetColor_dict::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncJetColor_dict::*p)();
};

size_t G__get_sizep2memfuncJetColor_dict()
{
  G__Sizep2memfuncJetColor_dict a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritanceJetColor_dict() {

   /* Setting up class inheritance */
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableJetColor_dict() {

   /* Setting up typedef entry */
   G__search_typename2("value_type",102,-1,0,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("pointer",70,-1,0,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("const_pointer",70,-1,256,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reference",102,-1,1,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("const_reference",102,-1,257,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("size_type",107,-1,0,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("difference_type",108,-1,0,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("const_iterator",117,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgRcLcLiterator),256,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__JetColor_dictLN_reverse_iteratorlEvectorlEfloatcOallocatorlEfloatgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("const_reverse_iterator",117,G__get_linked_tagnum(&G__JetColor_dictLN_reverse_iteratorlEvectorlEfloatcOallocatorlEfloatgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__JetColor_dictLN_reverse_iteratorlEvectorlEfloatcOallocatorlEfloatgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator",117,G__get_linked_tagnum(&G__JetColor_dictLN_reverse_iteratorlEvectorlEfloatcOallocatorlEfloatgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__JetColor_dictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__JetColor_dictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__JetColor_dictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__JetColor_dictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__JetColor_dictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("pair<std::string,std::string>",117,G__get_linked_tagnum(&G__JetColor_dictLN_pairlEstringcOstringgR),0,-1);
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* pair<string,string> */
static void G__setup_memvarpairlEstringcOstringgR(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__JetColor_dictLN_pairlEstringcOstringgR));
   { pair<string,string> *p; p=(pair<string,string>*)0x1000; if (p) { }
   G__memvar_setup((void*)((long)(&p->first)-(long)(p)),117,0,0,G__get_linked_tagnum(&G__JetColor_dictLN_string),-1,-1,1,"first=",0,(char*)NULL);
   G__memvar_setup((void*)((long)(&p->second)-(long)(p)),117,0,0,G__get_linked_tagnum(&G__JetColor_dictLN_string),-1,-1,1,"second=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarJetColor_dict() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/
static void G__setup_memfuncpairlEstringcOstringgR(void) {
   /* pair<string,string> */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__JetColor_dictLN_pairlEstringcOstringgR));
   G__memfunc_setup("pair<string,string>",1920,G__JetColor_dict_162_0_1, 105, G__get_linked_tagnum(&G__JetColor_dictLN_pairlEstringcOstringgR), -1, 0, 0, 1, 1, 0, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("pair<string,string>",1920,G__JetColor_dict_162_0_2, 105, G__get_linked_tagnum(&G__JetColor_dictLN_pairlEstringcOstringgR), -1, 0, 2, 1, 1, 0, 
"u 'string' - 11 - a u 'string' - 11 - b", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("operator=",937,(G__InterfaceMethod) NULL, 117, G__get_linked_tagnum(&G__JetColor_dictLN_pairlEstringcOstringgR), -1, 1, 1, 1, 4, 0, "u 'pair<string,string>' - 11 - x", (char*)NULL, (void*) NULL, 0);
   // automatic copy constructor
   G__memfunc_setup("pair<string,string>", 1920, G__JetColor_dict_162_0_4, (int) ('i'), G__get_linked_tagnum(&G__JetColor_dictLN_pairlEstringcOstringgR), -1, 0, 1, 1, 1, 0, "u 'pair<string,string>' - 11 - -", (char*) NULL, (void*) NULL, 0);
   // automatic destructor
   G__memfunc_setup("~pair<string,string>", 2046, G__JetColor_dict_162_0_5, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncJetColor_dict() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalJetColor_dict() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
static void G__cpp_setup_func0() {
   G__lastifuncposition();

}

static void G__cpp_setup_func1() {
}

static void G__cpp_setup_func2() {
}

static void G__cpp_setup_func3() {
}

static void G__cpp_setup_func4() {
}

static void G__cpp_setup_func5() {
}

static void G__cpp_setup_func6() {
}

static void G__cpp_setup_func7() {
}

static void G__cpp_setup_func8() {
}

static void G__cpp_setup_func9() {
}

static void G__cpp_setup_func10() {
}

static void G__cpp_setup_func11() {
}

static void G__cpp_setup_func12() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcJetColor_dict() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
  G__cpp_setup_func2();
  G__cpp_setup_func3();
  G__cpp_setup_func4();
  G__cpp_setup_func5();
  G__cpp_setup_func6();
  G__cpp_setup_func7();
  G__cpp_setup_func8();
  G__cpp_setup_func9();
  G__cpp_setup_func10();
  G__cpp_setup_func11();
  G__cpp_setup_func12();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgR = { "vector<float,allocator<float> >" , 99 , -1 };
G__linked_taginfo G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgRcLcLiterator = { "vector<float,allocator<float> >::iterator" , 99 , -1 };
G__linked_taginfo G__JetColor_dictLN_reverse_iteratorlEvectorlEfloatcOallocatorlEfloatgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<float,allocator<float> >::iterator>" , 99 , -1 };
G__linked_taginfo G__JetColor_dictLN_string = { "string" , 99 , -1 };
G__linked_taginfo G__JetColor_dictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__JetColor_dictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__JetColor_dictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__JetColor_dictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__JetColor_dictLN_pairlEstringcOstringgR = { "pair<string,string>" , 115 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableJetColor_dict() {
  G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgR.tagnum = -1 ;
  G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgRcLcLiterator.tagnum = -1 ;
  G__JetColor_dictLN_reverse_iteratorlEvectorlEfloatcOallocatorlEfloatgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__JetColor_dictLN_string.tagnum = -1 ;
  G__JetColor_dictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__JetColor_dictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__JetColor_dictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__JetColor_dictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__JetColor_dictLN_pairlEstringcOstringgR.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableJetColor_dict() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgR),0,-1,298752,(char*)NULL,NULL,NULL);
   G__get_linked_tagnum_fwd(&G__JetColor_dictLN_vectorlEfloatcOallocatorlEfloatgRsPgRcLcLiterator);
   G__get_linked_tagnum_fwd(&G__JetColor_dictLN_reverse_iteratorlEvectorlEfloatcOallocatorlEfloatgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__JetColor_dictLN_string);
   G__get_linked_tagnum_fwd(&G__JetColor_dictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__JetColor_dictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__JetColor_dictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__JetColor_dictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__JetColor_dictLN_pairlEstringcOstringgR),sizeof(pair<string,string>),-1,297216,(char*)NULL,G__setup_memvarpairlEstringcOstringgR,G__setup_memfuncpairlEstringcOstringgR);
}
extern "C" void G__cpp_setupJetColor_dict(void) {
  G__check_setup_version(30051515,"G__cpp_setupJetColor_dict()");
  G__set_cpp_environmentJetColor_dict();
  G__cpp_setup_tagtableJetColor_dict();

  G__cpp_setup_inheritanceJetColor_dict();

  G__cpp_setup_typetableJetColor_dict();

  G__cpp_setup_memvarJetColor_dict();

  G__cpp_setup_memfuncJetColor_dict();
  G__cpp_setup_globalJetColor_dict();
  G__cpp_setup_funcJetColor_dict();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncJetColor_dict();
  return;
}
class G__cpp_setup_initJetColor_dict {
  public:
    G__cpp_setup_initJetColor_dict() { G__add_setup_func("JetColor_dict",(G__incsetup)(&G__cpp_setupJetColor_dict)); G__call_setup_funcs(); }
   ~G__cpp_setup_initJetColor_dict() { G__remove_setup_func("JetColor_dict"); }
};
G__cpp_setup_initJetColor_dict G__cpp_setup_initializerJetColor_dict;

