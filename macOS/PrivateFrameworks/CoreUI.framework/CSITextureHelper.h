//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CSITextureHelper : NSObject
{
    struct _csibitmap *bmp;
    struct CGColorSpace *colorspaceHint;
    unsigned long long sourceRowbytes;
    unsigned int width;
    unsigned int height;
    unsigned int imageBytes;
    int pixelFormat;
}

- (BOOL)expandIntoBuffer:(id)arg1 error:(id *)arg2;
- (void)dealloc;

@end

