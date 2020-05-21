//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCSecureCoding.h"
#import "NSCopying.h"
#import "RBSProcessMonitorConfiguring.h"

@class NSArray, NSHashTable, NSString, RBSProcessStateDescriptor;

@interface RBSProcessMonitorConfiguration : NSObject <RBSProcessMonitorConfiguring, NSCopying, BSXPCSecureCoding>
{
    NSHashTable *_matchedHandles;
    NSString *_desc;
    int _clientPid;
    unsigned int _serviceClass;
    unsigned long long _identifier;
    NSArray *_predicates;
    RBSProcessStateDescriptor *_stateDescriptor;
    CDUnknownBlockType _updateHandler;
}

+ (BOOL)supportsBSXPCSecureCoding;
+ (unsigned long long)_nextIdentifier;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(nonatomic) unsigned int serviceClass; // @synthesize serviceClass=_serviceClass;
@property(copy, nonatomic) RBSProcessStateDescriptor *stateDescriptor; // @synthesize stateDescriptor=_stateDescriptor;
@property(copy, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
@property(readonly, nonatomic) int clientPid; // @synthesize clientPid=_clientPid;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)fullDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)_validate;
- (id)matchedProcesses;
- (BOOL)matchesProcess:(id)arg1;
- (id)_initWithIdentifier:(unsigned long long)arg1 andPid:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

