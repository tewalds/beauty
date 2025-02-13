#ifndef BEAUTY_EXPORT_HPP
#define BEAUTY_EXPORT_HPP

// Check if we are compiling on Windows
#ifdef _WIN32
  #ifdef beauty_EXPORTS
    // Export symbols when building the library
    #define BEAUTY_EXPORT __declspec(dllexport)
  #else
    // Import symbols when using the library
    #define BEAUTY_EXPORT __declspec(dllimport)
  #endif
#else
  // On non-Windows (Linux/macOS), use visibility attributes
  #define BEAUTY_EXPORT __attribute__((visibility("default")))
#endif

#endif // BEAUTY_EXPORT_HPP
