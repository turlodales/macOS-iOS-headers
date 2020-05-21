//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCSecureCoding.h"
#import "NSCopying.h"

@class NSArray, NSSet, NSString;

@interface RBSTerminateContext : NSObject <BSXPCSecureCoding, NSCopying>
{
    unsigned char _maximumTerminationResistance;
    BOOL _graceful;
    unsigned char _maximumRole;
    BOOL _preventIfBeingDebugged;
    unsigned int _exceptionDomain;
    NSString *_explanation;
    unsigned long long _reportType;
    unsigned long long _exceptionCode;
    NSArray *_attributes;
    NSSet *_preventingEndowmentNamespaces;
}

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)defaultContext;
- (void).cxx_destruct;
@property(nonatomic) BOOL preventIfBeingDebugged; // @synthesize preventIfBeingDebugged=_preventIfBeingDebugged;
@property(retain, nonatomic) NSSet *preventingEndowmentNamespaces; // @synthesize preventingEndowmentNamespaces=_preventingEndowmentNamespaces;
@property(nonatomic) unsigned char maximumRole; // @synthesize maximumRole=_maximumRole;
@property(nonatomic) BOOL graceful; // @synthesize graceful=_graceful;
@property(copy, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) unsigned char maximumTerminationResistance; // @synthesize maximumTerminationResistance=_maximumTerminationResistance;
@property(nonatomic) unsigned long long exceptionCode; // @synthesize exceptionCode=_exceptionCode;
@property(nonatomic) unsigned int exceptionDomain; // @synthesize exceptionDomain=_exceptionDomain;
@property(nonatomic) unsigned long long reportType; // @synthesize reportType=_reportType;
@property(copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, nonatomic) BOOL shouldTerminatePlugIns;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

