//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class HMDAccountHandle, HMDAccountIdentifier, NSArray, NSDictionary, NSNumber, NSString;

@interface HMDUserModel : HMDBackingStoreModelObject
{
}

+ (id)properties;

// Remaining properties
@property(retain, nonatomic) HMDAccountHandle *accountHandle; // @dynamic accountHandle;
@property(retain, nonatomic) HMDAccountIdentifier *accountIdentifier; // @dynamic accountIdentifier;
@property(retain, nonatomic) NSNumber *camerasAccessLevel; // @dynamic camerasAccessLevel;
@property(retain, nonatomic) NSString *changeTag; // @dynamic changeTag;
@property(retain, nonatomic) NSDictionary *pairingIdentity; // @dynamic pairingIdentity;
@property(retain, nonatomic) NSNumber *presenceAuthorizationStatus; // @dynamic presenceAuthorizationStatus;
@property(retain, nonatomic) NSNumber *privilege; // @dynamic privilege;
@property(retain, nonatomic) NSArray *relayAccessTokens; // @dynamic relayAccessTokens;
@property(retain, nonatomic) NSString *relayIdentifier; // @dynamic relayIdentifier;
@property(retain, nonatomic) NSNumber *remoteAccessAllowed; // @dynamic remoteAccessAllowed;
@property(retain, nonatomic) NSString *userID; // @dynamic userID;

@end

