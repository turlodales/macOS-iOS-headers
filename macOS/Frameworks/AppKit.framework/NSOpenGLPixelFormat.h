//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>

@interface NSOpenGLPixelFormat : NSObject <NSCoding>
{
    struct _CGLPixelFormatObject *_CGLPixelFormat;
}

+ (void)initialize;
+ (id)openGLPixelFormatWithCGLPixelFormatObj:(struct _CGLPixelFormatObject *)arg1;
- (void)setAttributes:(id)arg1;
- (id)attributes;
- (id)initWithData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) int numberOfVirtualScreens;
- (void)getValues:(int *)arg1 forAttribute:(unsigned int)arg2 forVirtualScreen:(int)arg3;
- (void)dealloc;
@property(readonly) struct _CGLPixelFormatObject *CGLPixelFormatObj;
- (id)initWithCGLPixelFormatObj:(struct _CGLPixelFormatObject *)arg1;
- (id)initWithAttributes:(const unsigned int *)arg1;
- (id)init;
- (id)_fallbackInitializer;

@end

