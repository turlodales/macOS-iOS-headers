//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookCore/ABRecord.h>

@interface ABMailRecent : ABRecord
{
}

- (id)remoteLocation;
- (BOOL)isSubscribed;
- (id)parentGroupsIncludingSubscriptions;
- (id)parentGroups;
- (id)account;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 error:(id *)arg3 account:(id)arg4;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 error:(id *)arg3;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 addressBook:(id)arg2;
- (id)description;

@end

