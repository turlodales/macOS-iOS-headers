//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDLSkinDeformerComponent.h"
#import "NSCopying.h"

@class NSArray, NSData, NSString;

@interface MDLSkinDeformer : NSObject <NSCopying, MDLSkinDeformerComponent>
{
    NSArray *_jointPaths;
    NSData *_jointBindTransforms;
    // Error parsing type: {?="columns"[4]}, name: _meshBindTransform
}

- (void).cxx_destruct;
// Error parsing type for property meshBindTransform:
// Property attributes: T{?=[4]},R,N,V_meshBindTransform

@property(readonly, nonatomic) NSData *jointBindTransforms; // @synthesize jointBindTransforms=_jointBindTransforms;
@property(readonly, nonatomic) NSArray *jointPaths; // @synthesize jointPaths=_jointPaths;
-     // Error parsing type: Q32@0:8^{?=[4]}16Q24, name: copyJointBindTransformsInto:maxCount:
-     // Error parsing type: @104@0:8@16r^{?=[4]}24Q32{?=[4]}40, name: initWithJointPaths:jointBindTransforms:count:meshBindTransform:
-     // Error parsing type: @96@0:8@16@24{?=[4]}32, name: initWithJointPaths:jointBindTransforms:meshBindTransform:
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

