//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#include <MuQt5/qtUtils.h>
#include <MuQt5/QQmlApplicationEngineType.h>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtSvg/QtSvg>
#include <QtNetwork/QtNetwork>
#include <MuQt5/QWidgetType.h>
#include <MuQt5/QActionType.h>
#include <MuQt5/QIconType.h>
#include <Mu/BaseFunctions.h>
#include <Mu/Thread.h>
#include <Mu/Alias.h>
#include <Mu/SymbolicConstant.h>
#include <Mu/ClassInstance.h>
#include <Mu/Function.h>
#include <Mu/MemberFunction.h>
#include <Mu/MemberVariable.h>
#include <Mu/Node.h>
#include <Mu/Exception.h>
#include <Mu/ParameterVariable.h>
#include <Mu/ReferenceType.h>
#include <Mu/Value.h>
#include <MuLang/MuLangContext.h>
#include <MuLang/StringType.h>
#include <MuQt5/QUrlType.h>
#include <MuQt5/QEventType.h>

//
//  NOTE: this file was automatically generated by qt2mu.py
//

namespace Mu {
using namespace std;

//----------------------------------------------------------------------
//  INHERITABLE TYPE IMPLEMENTATION

// destructor
MuQt_QQmlApplicationEngine::~MuQt_QQmlApplicationEngine()
{
    if (_obj)
    {
        *_obj->data<Pointer>() = Pointer(0);
        _obj->releaseExternal();
    }
    _obj = 0;
    _env = 0;
    _baseType = 0;
}

MuQt_QQmlApplicationEngine::MuQt_QQmlApplicationEngine(Pointer muobj, const CallEnvironment* ce, QObject * parent) 
 : QQmlApplicationEngine(parent)
{
    _env = ce;
    _obj = reinterpret_cast<ClassInstance*>(muobj);
    _obj->retainExternal();
    MuLangContext* c = (MuLangContext*)_env->context();
    _baseType = c->findSymbolOfTypeByQualifiedName<QQmlApplicationEngineType>(c->internName("qt.QQmlApplicationEngine"));
}

MuQt_QQmlApplicationEngine::MuQt_QQmlApplicationEngine(Pointer muobj, const CallEnvironment* ce, const QUrl & url, QObject * parent) 
 : QQmlApplicationEngine(url, parent)
{
    _env = ce;
    _obj = reinterpret_cast<ClassInstance*>(muobj);
    _obj->retainExternal();
    MuLangContext* c = (MuLangContext*)_env->context();
    _baseType = c->findSymbolOfTypeByQualifiedName<QQmlApplicationEngineType>(c->internName("qt.QQmlApplicationEngine"));
}

MuQt_QQmlApplicationEngine::MuQt_QQmlApplicationEngine(Pointer muobj, const CallEnvironment* ce, const QString & filePath, QObject * parent) 
 : QQmlApplicationEngine(filePath, parent)
{
    _env = ce;
    _obj = reinterpret_cast<ClassInstance*>(muobj);
    _obj->retainExternal();
    MuLangContext* c = (MuLangContext*)_env->context();
    _baseType = c->findSymbolOfTypeByQualifiedName<QQmlApplicationEngineType>(c->internName("qt.QQmlApplicationEngine"));
}

bool MuQt_QQmlApplicationEngine::event(QEvent * e) 
{
    if (!_env) return QQmlApplicationEngine::event(e);
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[0];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeqpointer<QEventType>(c,e,"qt.QEvent"));
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QQmlApplicationEngine::event(e);
    }
}



//----------------------------------------------------------------------
//  Mu Type CONSTRUCTORS

QQmlApplicationEngineType::QQmlApplicationEngineType(Context* c, const char* name, Class* super, Class* super2)
: Class(c, name, vectorOf2(super, super2))
{
}

QQmlApplicationEngineType::~QQmlApplicationEngineType()
{
}

//----------------------------------------------------------------------
//  PRE-COMPILED FUNCTIONS

static Pointer
QQmlApplicationEngine_QQmlApplicationEngine_QObject(Thread& NODE_THREAD, Pointer obj)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    ClassInstance* widget = reinterpret_cast<ClassInstance*>(obj);

    if (!widget)
    {
        return 0;
    }
    else if (QQmlApplicationEngine* w = object<QQmlApplicationEngine>(widget))
    {
        QQmlApplicationEngineType* type = 
            c->findSymbolOfTypeByQualifiedName<QQmlApplicationEngineType>(c->internName("qt.QQmlApplicationEngine"), false);
        ClassInstance* o = ClassInstance::allocate(type);
        setobject(o, w);
        return o;
    }
    else
    {
        throw BadCastException();
    }
}

static NODE_IMPLEMENTATION(castFromObject, Pointer)
{
    NODE_RETURN( QQmlApplicationEngine_QQmlApplicationEngine_QObject(NODE_THREAD, NODE_ARG(0, Pointer)) );
}

Pointer qt_QQmlApplicationEngine_QQmlApplicationEngine_QQmlApplicationEngine_QQmlApplicationEngine_QObject(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_parent)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QObject * arg1 = object<QObject>(param_parent);
    setobject(param_this, new MuQt_QQmlApplicationEngine(param_this, NODE_THREAD.process()->callEnv(), arg1));
    return param_this;
}

Pointer qt_QQmlApplicationEngine_QQmlApplicationEngine_QQmlApplicationEngine_QQmlApplicationEngine_QUrl_QObject(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_url, Pointer param_parent)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QUrl  arg1 = getqtype<QUrlType>(param_url);
    QObject * arg2 = object<QObject>(param_parent);
    setobject(param_this, new MuQt_QQmlApplicationEngine(param_this, NODE_THREAD.process()->callEnv(), arg1, arg2));
    return param_this;
}

Pointer qt_QQmlApplicationEngine_QQmlApplicationEngine_QQmlApplicationEngine_QQmlApplicationEngine_string_QObject(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_filePath, Pointer param_parent)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QString  arg1 = qstring(param_filePath);
    QObject * arg2 = object<QObject>(param_parent);
    setobject(param_this, new MuQt_QQmlApplicationEngine(param_this, NODE_THREAD.process()->callEnv(), arg1, arg2));
    return param_this;
}

bool qt_QQmlApplicationEngine_event_bool_QQmlApplicationEngine_QEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_e)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QQmlApplicationEngine* arg0 = object<QQmlApplicationEngine>(param_this);
    QEvent * arg1 = getqpointer<QEventType>(param_e);
    return isMuQtObject(arg0) ? ((MuQt_QQmlApplicationEngine*)arg0)->event_pub_parent(arg1) : ((MuQt_QQmlApplicationEngine*)arg0)->event_pub(arg1);
}


static NODE_IMPLEMENTATION(_n_QQmlApplicationEngine0, Pointer)
{
    NODE_RETURN(qt_QQmlApplicationEngine_QQmlApplicationEngine_QQmlApplicationEngine_QQmlApplicationEngine_QObject(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
}

static NODE_IMPLEMENTATION(_n_QQmlApplicationEngine1, Pointer)
{
    NODE_RETURN(qt_QQmlApplicationEngine_QQmlApplicationEngine_QQmlApplicationEngine_QQmlApplicationEngine_QUrl_QObject(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer), NODE_ARG(2, Pointer)));
}

static NODE_IMPLEMENTATION(_n_QQmlApplicationEngine2, Pointer)
{
    NODE_RETURN(qt_QQmlApplicationEngine_QQmlApplicationEngine_QQmlApplicationEngine_QQmlApplicationEngine_string_QObject(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer), NODE_ARG(2, Pointer)));
}

static NODE_IMPLEMENTATION(_n_event0, bool)
{
    NODE_RETURN(qt_QQmlApplicationEngine_event_bool_QQmlApplicationEngine_QEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
}



void
QQmlApplicationEngineType::load()
{
    USING_MU_FUNCTION_SYMBOLS;
    MuLangContext* c = static_cast<MuLangContext*>(context());
    Module* global = globalModule();
    
    const string typeName        = name();
    const string refTypeName     = typeName + "&";
    const string fullTypeName    = fullyQualifiedName();
    const string fullRefTypeName = fullTypeName + "&";
    const char*  tn              = typeName.c_str();
    const char*  ftn             = fullTypeName.c_str();
    const char*  rtn             = refTypeName.c_str();
    const char*  frtn            = fullRefTypeName.c_str();

    scope()->addSymbols(new ReferenceType(c, rtn, this),

                        new Function(c, tn, BaseFunctions::dereference, Cast,
                                     Return, ftn,
                                     Args, frtn, End),

                        EndArguments);
    
    addSymbols(new Function(c, "__allocate", BaseFunctions::classAllocate, None,
                            Return, ftn,
                            End),


               new Function(c, tn, castFromObject, Cast,
                            Compiled, QQmlApplicationEngine_QQmlApplicationEngine_QObject,
                            Return, ftn,
                            Parameters,
                            new Param(c, "object", "qt.QObject"),
                            End),

               EndArguments );

addSymbols(
    // enums
    // member functions
    new Function(c, "QQmlApplicationEngine", _n_QQmlApplicationEngine0, None, Compiled, qt_QQmlApplicationEngine_QQmlApplicationEngine_QQmlApplicationEngine_QQmlApplicationEngine_QObject, Return, "qt.QQmlApplicationEngine", Parameters, new Param(c, "this", "qt.QQmlApplicationEngine"), new Param(c, "parent", "qt.QObject"), End),
    new Function(c, "QQmlApplicationEngine", _n_QQmlApplicationEngine1, None, Compiled, qt_QQmlApplicationEngine_QQmlApplicationEngine_QQmlApplicationEngine_QQmlApplicationEngine_QUrl_QObject, Return, "qt.QQmlApplicationEngine", Parameters, new Param(c, "this", "qt.QQmlApplicationEngine"), new Param(c, "url", "qt.QUrl"), new Param(c, "parent", "qt.QObject"), End),
    new Function(c, "QQmlApplicationEngine", _n_QQmlApplicationEngine2, None, Compiled, qt_QQmlApplicationEngine_QQmlApplicationEngine_QQmlApplicationEngine_QQmlApplicationEngine_string_QObject, Return, "qt.QQmlApplicationEngine", Parameters, new Param(c, "this", "qt.QQmlApplicationEngine"), new Param(c, "filePath", "string"), new Param(c, "parent", "qt.QObject"), End),
    // MISSING: rootObjects ("QList<QObject * >"; QQmlApplicationEngine this)
    _func[0] = new MemberFunction(c, "event", _n_event0, None, Compiled, qt_QQmlApplicationEngine_event_bool_QQmlApplicationEngine_QEvent, Return, "bool", Parameters, new Param(c, "this", "qt.QQmlApplicationEngine"), new Param(c, "e", "qt.QEvent"), End),
    // static functions
    EndArguments);
globalScope()->addSymbols(
    EndArguments);
scope()->addSymbols(
    EndArguments);


    const char** propExclusions = 0;

    populate(this, QQmlApplicationEngine::staticMetaObject, propExclusions);
}

} // Mu