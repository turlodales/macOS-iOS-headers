//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSSecureCoding.h"

@class HMDUser, NSDate;

@interface HMDRemovedUser : HMFObject <NSSecureCoding>
{
    BOOL _removalInProgress;
    HMDUser *_user;
    NSDate *_expirationDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)removedUserWithUser:(id)arg1;
- (void).cxx_destruct;
@property(getter=isRemovalInProgress) BOOL removalInProgress; // @synthesize removalInProgress=_removalInProgress;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToUser:(id)arg1;
- (BOOL)isEqualToUserID:(id)arg1;
- (BOOL)isExpired;
- (id)description;
- (id)initWithUser:(id)arg1 expiration:(id)arg2;

@end

