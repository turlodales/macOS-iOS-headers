//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCNPredicate.h>

@class ABCNGroupIdentifier;

__attribute__((visibility("hidden")))
@interface ABCNGroupMembershipPredicate : ABCNPredicate
{
    ABCNGroupIdentifier *_groupIdentifier;
}

@property(readonly, copy) ABCNGroupIdentifier *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void)dealloc;
- (id)initWithGroupIdentifier:(id)arg1;
- (id)cn_coreDataPredicate;

@end

