# Android NDK Test Repro

Minimal repro project for CMake + Android shared library to test NDK bug.

## Quick Start
1. Create `CMakeUserPresets.json` to set ANDROID_NDK_HOME directory:
```json
{
  "version": 3,
  "configurePresets": [
    {
      "name": "LocalAndroid",
      "inherits": "android-arm64-v8a",
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

2. Build:
```bash
cmake --preset LocalAndroid
cmake --build --preset LocalAndroid
```