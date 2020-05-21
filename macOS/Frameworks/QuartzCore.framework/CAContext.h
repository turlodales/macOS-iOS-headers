//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSDictionary, NSString;

@interface CAContext : NSObject
{
}

+ (id)objectForSlot:(unsigned int)arg1;
+ (BOOL)allowsCGSConnections;
+ (void)setAllowsCGSConnections:(BOOL)arg1;
+ (id)contextWithCGSConnection:(unsigned int)arg1 options:(id)arg2;
+ (void)setClientPort:(unsigned int)arg1;
+ (id)remoteContextWithOptions:(id)arg1;
+ (id)remoteContext;
+ (id)localContextWithOptions:(id)arg1;
+ (id)localContext;
+ (id)currentContext;
+ (id)allContexts;
- (unsigned int)hitTestContext:(struct CGPoint)arg1;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;
- (void)deleteSlot:(unsigned int)arg1;
- (unsigned int)createImageSlot:(struct CGSize)arg1 hasAlpha:(BOOL)arg2 extendedColors:(BOOL)arg3;
- (unsigned int)createImageSlot:(struct CGSize)arg1 hasAlpha:(BOOL)arg2;
- (unsigned int)createSlot;
- (void)invalidateFences;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)setFencePort:(unsigned int)arg1 commitHandler:(CDUnknownBlockType)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (unsigned int)createFencePort;
- (void)orderBelow:(unsigned int)arg1;
- (void)orderAbove:(unsigned int)arg1;
- (void)invalidate;

// Remaining properties
@property unsigned long long GPURegistryID; // @dynamic GPURegistryID;
@property(copy) NSString *annotation; // @dynamic annotation;
@property BOOL colorMatchUntaggedContent; // @dynamic colorMatchUntaggedContent;
@property struct CGColorSpace *colorSpace; // @dynamic colorSpace;
@property unsigned int commitPriority; // @dynamic commitPriority;
@property(copy) NSString *contentsFormat; // @dynamic contentsFormat;
@property(readonly) unsigned int contextId; // @dynamic contextId;
@property float desiredDynamicRange; // @dynamic desiredDynamicRange;
@property(readonly) unsigned int displayId; // @dynamic displayId;
@property unsigned int displayMask; // @dynamic displayMask;
@property unsigned int displayNumber; // @dynamic displayNumber;
@property unsigned int eventMask; // @dynamic eventMask;
@property(retain) CALayer *layer; // @dynamic layer;
@property float level; // @dynamic level;
@property(readonly) NSDictionary *options; // @dynamic options;
@property int restrictedHostProcessId; // @dynamic restrictedHostProcessId;
@property(getter=isSecure) BOOL secure; // @dynamic secure;
@property struct CGRect unobscuredRegionOfInterest; // @dynamic unobscuredRegionOfInterest;
@property(readonly) BOOL valid; // @dynamic valid;

@end

