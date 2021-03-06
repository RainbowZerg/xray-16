#pragma once

// XXX: Add remaining defines
// XXX: Get rid of NO_ENGINE_API
// XXX: Get rid of DLL_API (maybe)

#ifdef XRAPI_EXPORTS
#define XRAPI_API XR_EXPORT
#else
#define XRAPI_API XR_IMPORT
#endif

#ifdef XRAICORE_EXPORTS
#define XRAICORE_API XR_EXPORT
#else
#define XRAICORE_API XR_IMPORT
#endif

#ifdef XRCDB_EXPORTS
#define XRCDB_API XR_EXPORT
#define NO_ENGINE_API
#else
#define XRCDB_API XR_IMPORT
#endif

#ifdef XRCORE_EXPORTS
#define XRCORE_API XR_EXPORT
#else
#define XRCORE_API XR_IMPORT
#endif

#ifdef XRECORE_EXPORTS
#define XRECORE_API XR_EXPORT
#else
#define XRECORE_API XR_IMPORT
#endif

#ifdef XRGAMESPY_EXPORTS
#define XRGAMESPY_API XR_EXPORT
#else
#define XRGAMESPY_API XR_IMPORT
#endif

#ifdef XR_NETSERVER_EXPORTS
#define XRNETSERVER_API XR_EXPORT
#else
#define XRNETSERVER_API XR_IMPORT
#endif

#ifdef XR_PARTICLES_EXPORTS
#define PARTICLES_API XR_EXPORT
#else
#define PARTICLES_API XR_IMPORT
#endif

#ifdef XRPHYSICS_EXPORTS
#define XRPHYSICS_API XR_EXPORT
#define NO_ENGINE_API
#else
#define XRPHYSICS_API XR_IMPORT
#endif

#ifdef XRSCRIPTENGINE_EXPORTS
#define XRSCRIPTENGINE_API XR_EXPORT
#else
#define XRSCRIPTENGINE_API XR_IMPORT
#endif

#ifdef XRSOUND_EXPORTS
#define XRSOUND_API XR_EXPORT
#else
#define XRSOUND_API XR_IMPORT
#endif

#ifndef ENGINE_API
#ifndef NO_ENGINE_API
#ifdef ENGINE_BUILD
#define DLL_API XR_IMPORT
#define ENGINE_API XR_EXPORT
#else
#define DLL_API XR_EXPORT
#define ENGINE_API XR_IMPORT
#endif
#else
#define ENGINE_API
#define DLL_API
#endif // !NO_ENGINE_API
#endif // !ENGINE_API
