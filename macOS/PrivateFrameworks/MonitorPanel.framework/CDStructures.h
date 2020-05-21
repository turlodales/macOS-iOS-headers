//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct _CGSDisplayModeDescription {
    int displayModeNumber;
    int flags;
    int width;
    int height;
    int depth;
    int rowBytes;
    int bitsPerPixel;
    int bitsPerSample;
    int samplesPerPixel;
    int refreshRate;
    int horizontalResolution;
    int verticalResolution;
    char encoding[129];
    int version;
    int length;
    int fixPtRefreshRate;
    int ioModeInfoFlags;
    int ioDisplayModeNumber;
    int pixelsWide;
    int pixelsHigh;
    float resolution;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

