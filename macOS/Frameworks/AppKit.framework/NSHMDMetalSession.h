//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCache, NSColorSpace, NSHMDDevice, NSHMDIOSurfaceSession, NSMapTable;
@protocol MTLDevice;

@interface NSHMDMetalSession : NSObject
{
    NSHMDIOSurfaceSession *_session;
    struct _opaque_pthread_mutex_t _textureMutex;
    NSCache *_strongTextures;
    NSMapTable *_weakTextures;
}

+ (id)keyPathsForValuesAffectingValid;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 error:(id *)arg2;
- (void)invalidate;
@property(readonly, getter=isValid) BOOL valid;
- (id)displayLinkWithHandler:(CDUnknownBlockType)arg1;
@property(readonly) id <MTLDevice> metalDevice;
@property(readonly) unsigned long long preferredDrawablePixelFormat;
@property(readonly, copy) NSArray *supportedDrawablePixelFormats;
@property(readonly) struct CGSize maxDrawableSize;
@property(readonly) struct CGSize minDrawableSize;
@property(readonly) struct CGSize preferredDrawableSize;
- (id)nextDrawable;
@property(retain) NSColorSpace *drawableColorSpace;
@property unsigned long long drawablePixelFormat;
@property struct CGSize drawableSize;
@property(readonly) NSHMDDevice *device;

@end

