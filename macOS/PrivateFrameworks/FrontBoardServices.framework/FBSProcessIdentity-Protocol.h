//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSProcess.h"

@class BSMachPortTaskNameRight, BSProcessHandle, RBSProcessIdentity;

@protocol FBSProcessIdentity <FBSProcess>
@property(readonly, retain, nonatomic) RBSProcessIdentity *identity;
@property(readonly, retain, nonatomic) BSMachPortTaskNameRight *taskNameRight;
@property(readonly, retain, nonatomic) BSProcessHandle *handle;
@end

