//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import "CNCDGroupPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNCDGroupPredicate : CNPredicate <CNCDGroupPredicate>
{
}

+ (id)predicateForGroupsWithNameMatching:(id)arg1;
- (id)cn_coreDataPredicate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

