//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXGAnimationDelegate.h"

@class NSString;

@interface PXGDefaultAnimationDelegate : NSObject <PXGAnimationDelegate>
{
}

+ (void)adjustGeometry:(inout CDStruct_ac168a83 *)arg1 style:(inout CDStruct_506f5052 *)arg2 info:(inout CDStruct_9d1ebe49 *)arg3 forTextSpriteAnimatingFromAttributes:(const CDStruct_366bba6a *)arg4 toAttributes:(const CDStruct_366bba6a *)arg5 inRootLayout:(id)arg6;
+ (id)sharedInstance;
- (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_ac168a83 *)arg2 styles:(inout CDStruct_506f5052 *)arg3 infos:(inout CDStruct_9d1ebe49 *)arg4 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange)arg5;
- (void)animation:(id)arg1 adjustGeometries:(inout CDStruct_ac168a83 *)arg2 styles:(inout CDStruct_506f5052 *)arg3 infos:(inout CDStruct_9d1ebe49 *)arg4 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange)arg5;
- (void)animation:(id)arg1 prepareWithRootLayout:(id)arg2 viewportShift:(struct CGPoint)arg3;
- (id)animation:(id)arg1 doubleSidedAnimatedSpriteIndexesForModifiedSpriteIndexes:(id)arg2 rootLayout:(id)arg3 presentedGeometries:(const CDStruct_ac168a83 *)arg4 styles:(const CDStruct_506f5052 *)arg5 infos:(const CDStruct_9d1ebe49 *)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

