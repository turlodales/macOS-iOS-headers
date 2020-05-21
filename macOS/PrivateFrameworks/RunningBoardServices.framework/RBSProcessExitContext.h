//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCSecureCoding.h"

@class NSDate, NSString, RBSProcessExitStatus, RBSTerminateContext;

@interface RBSProcessExitContext : NSObject <BSXPCSecureCoding>
{
    NSDate *_timestamp;
    long long _type;
    RBSProcessExitStatus *_status;
    RBSTerminateContext *_terminationContext;
}

+ (BOOL)supportsBSXPCSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) RBSTerminateContext *terminationContext; // @synthesize terminationContext=_terminationContext;
@property(retain, nonatomic) RBSProcessExitStatus *status; // @synthesize status=_status;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

