//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import "CNCDContactPredicate.h"
#import "CNCDContainerScopedContactPredicate.h"
#import "CNCDUnscopedContactPredicate.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNCDContactsInGroupsOrContainersWithIdentifiersPredicate : CNPredicate <CNCDContactPredicate, CNCDContainerScopedContactPredicate, CNCDUnscopedContactPredicate>
{
    NSArray *_containerIdentifiers;
    NSArray *_groupIdentifiers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
@property(readonly, nonatomic) NSArray *containerIdentifiers; // @synthesize containerIdentifiers=_containerIdentifiers;
- (id)cn_coreDataExchangePredicate;
- (id)cn_unscopedFetchCoreDataPredicate;
- (id)cn_coreDataPredicate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerIdentifiers:(id)arg1 groupIdentifiers:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

