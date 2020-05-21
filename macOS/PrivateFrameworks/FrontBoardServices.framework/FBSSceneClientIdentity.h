//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "NSCopying.h"

@class NSString, RBSProcessIdentity;

@interface FBSSceneClientIdentity : NSObject <NSCopying, BSDescriptionProviding>
{
    BOOL _local;
    RBSProcessIdentity *_processIdentity;
}

+ (id)identityForProcessIdentity:(id)arg1;
+ (id)identityForBundleID:(id)arg1;
+ (id)localIdentity;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) RBSProcessIdentity *processIdentity; // @synthesize processIdentity=_processIdentity;
@property(readonly, nonatomic, getter=isLocal) BOOL local; // @synthesize local=_local;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

