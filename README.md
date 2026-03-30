# libass Android Test Project

Minimal repro project for vcpkg + CMake + Android shared library with libass.

## Quick Start

1. Set environment variables:
```bash
$env:VCPKG_ROOT = "C:\path\to\vcpkg"
```

2. Create `CMakeUserPresets.json` to set ANDROID_NDK_HOME directory:
Also set VCPKG_HOST_TRIPLET if on windows to get pkgconfig paths
```json
{
  "version": 3,
  "configurePresets": [
    {
      "name": "LocalAndroid",
      "inherits": "android-arm64-v8a",
      "cacheVariables": {
        "VCPKG_HOST_TRIPLET": "x64-windows"
      },
      "environment": {
        "ANDROID_NDK_HOME": "$env{ANDROID_HOME}/ndk/<VERSION>"
      }
    }
  ],
  "buildPresets": [
    {
      "name": "LocalAndroid",
      "configurePreset": "LocalAndroid",
      "inherits": "android-arm64-v8a"
    }
  ]
}
```

3. Build:
```bash
cmake --preset LocalAndroid
cmake --build --preset LocalAndroid
```