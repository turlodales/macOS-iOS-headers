//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookCore/ABGroup.h>

@interface ABSubscribedGroup : ABGroup
{
}

+ (BOOL)_isPublicRecord;
+ (id)nts_Groups;
+ (id)nts_GroupsWithAddressBook:(id)arg1;
+ (id)nts_GroupsAtRemoteLocation:(id)arg1;
+ (id)nts_GroupsAtRemoteLocation:(id)arg1 withAddressBook:(id)arg2;
+ (id)builtInProperties;
+ (id)searchElementForProperty:(id)arg1 label:(id)arg2 key:(id)arg3 value:(id)arg4 comparison:(long long)arg5;
- (void)markRecordWithGroupSubscription:(id)arg1;
- (BOOL)isSubscribed;
- (BOOL)isPublishable;
- (id)init;

@end

