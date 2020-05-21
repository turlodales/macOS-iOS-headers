//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface IOSurface : NSObject <NSSecureCoding>
{
    void *_impl;
}

+ (BOOL)supportsSecureCoding;
- (unsigned long long)registryID;
- (unsigned long long)timestampAtIndex:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)supportsProtectionOptions:(unsigned long long)arg1;
- (unsigned long long)protectionOptions;
- (int)setPurgeable:(unsigned int)arg1 oldState:(unsigned int *)arg2;
@property(readonly) BOOL allowsPixelSizeCasting;
- (void)decrementUseCount;
- (void)incrementUseCount;
- (BOOL)isSysMemOnly;
- (BOOL)isDisplayable;
@property(readonly, getter=isInUse) BOOL inUse;
@property(readonly) int localUseCount;
- (void)removeAllAttachments;
- (id)allAttachments;
- (void)setAllAttachments:(id)arg1;
- (void)removeAttachmentForKey:(id)arg1;
- (id)attachmentForKey:(id)arg1;
- (void)setAttachment:(id)arg1 forKey:(id)arg2;
- (void *)baseAddressOfPlaneAtIndex:(unsigned long long)arg1;
- (long long)elementHeightOfPlaneAtIndex:(unsigned long long)arg1;
- (long long)elementWidthOfPlaneAtIndex:(unsigned long long)arg1;
- (long long)bytesPerElementOfPlaneAtIndex:(unsigned long long)arg1;
- (long long)bytesPerRowOfPlaneAtIndex:(unsigned long long)arg1;
- (long long)heightOfPlaneAtIndex:(unsigned long long)arg1;
- (long long)widthOfPlaneAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long planeCount;
@property(readonly) unsigned int seed;
@property(readonly) unsigned int pixelFormat;
@property(readonly) void *baseAddress;
@property(readonly) long long elementHeight;
@property(readonly) long long elementWidth;
@property(readonly) long long bytesPerElement;
@property(readonly) long long bytesPerRow;
@property(readonly) long long height;
@property(readonly) long long width;
@property(readonly) long long allocationSize;
- (int)unlockWithOptions:(unsigned int)arg1 seed:(unsigned int *)arg2;
- (int)lockWithOptions:(unsigned int)arg1 seed:(unsigned int *)arg2;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)_cfTypeID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientBuffer:(struct __IOSurfaceClient *)arg1;
- (id)initWithMachPort:(unsigned int)arg1;
- (id)initWithSurfaceID:(unsigned int)arg1;
- (id)initWithProperties:(id)arg1;

@end

