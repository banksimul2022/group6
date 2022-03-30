#ifndef DLLRFID_GLOBAL_H
#define DLLRFID_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DLLRFID_LIBRARY)
#  define DLLRFID_EXPORT Q_DECL_EXPORT
#else
#  define DLLRFID_EXPORT Q_DECL_IMPORT
#endif

#endif // DLLRFID_GLOBAL_H
