/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.14.2
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

  // F:/desktop/management_system/res/qss/style-1.qss
  
  
  
static const unsigned char qt_resource_data[588] = { 'Q', 'R', 'C', '_', 'D', 'A', 'T', 'A' };

static const unsigned char qt_resource_name[] = {
  // res
  0x0,0x3,
  0x0,0x0,0x78,0xc3,
  0x0,0x72,
  0x0,0x65,0x0,0x73,
    // qss
  0x0,0x3,
  0x0,0x0,0x78,0xa3,
  0x0,0x71,
  0x0,0x73,0x0,0x73,
    // style-1.qss
  0x0,0xb,
  0x8,0xf9,0xd8,0xe3,
  0x0,0x73,
  0x0,0x74,0x0,0x79,0x0,0x6c,0x0,0x65,0x0,0x2d,0x0,0x31,0x0,0x2e,0x0,0x71,0x0,0x73,0x0,0x73,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/res
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/res/qss
  0x0,0x0,0x0,0xc,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x3,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/res/qss/style-1.qss
  0x0,0x0,0x0,0x18,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x85,0x68,0x9e,0x8a,0x88,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#if defined(__ELF__) || defined(__APPLE__)
static inline unsigned char qResourceFeatureZlib()
{
    extern const unsigned char qt_resourceFeatureZlib;
    return qt_resourceFeatureZlib;
}
#else
unsigned char qResourceFeatureZlib();
#endif

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_qss)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_qss)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_qss)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_qss)()
{
    int version = 3;
    version += QT_RCC_PREPEND_NAMESPACE(qResourceFeatureZlib());
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_qss)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_qss)(); }
   } dummy;
}
