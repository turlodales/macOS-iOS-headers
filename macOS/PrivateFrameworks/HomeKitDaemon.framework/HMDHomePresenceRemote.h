//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDHomePresenceCheck.h"

@class NSDictionary;

@interface HMDHomePresenceRemote : HMFObject <HMDHomePresenceCheck>
{
    NSDictionary *_userPresenceMap;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *userPresenceMap; // @synthesize userPresenceMap=_userPresenceMap;
- (BOOL)isAnyUserAtHome;
- (BOOL)isNoUserAtHome;
- (BOOL)areUsersNotAtHome:(id)arg1;
- (BOOL)areUsersAtHome:(id)arg1;
- (BOOL)isUserNotAtHome:(id)arg1;
- (BOOL)isUserAtHome:(id)arg1;
- (id)regionForUser:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithPresenceByPairingIdentity:(id)arg1;
- (id)initWithPresenceByUserId:(id)arg1;

@end

