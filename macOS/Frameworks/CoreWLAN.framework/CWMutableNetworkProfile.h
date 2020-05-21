//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreWLAN/CWNetworkProfile.h>

@class NSArray, NSData, NSDate, NSSet, NSString;

@interface CWMutableNetworkProfile : CWNetworkProfile
{
}


// Remaining properties
@property(copy) NSDate *addedAt;
@property unsigned long long addedBy; // @dynamic addedBy;
@property BOOL autoLogin; // @dynamic autoLogin;
@property(copy) NSArray *bssidList; // @dynamic bssidList;
@property BOOL captiveBypass; // @dynamic captiveBypass;
@property BOOL captiveNetwork; // @dynamic captiveNetwork;
@property long long captiveNetworkStatus; // @dynamic captiveNetworkStatus;
@property(copy) NSDate *captiveSheetTimestamp; // @dynamic captiveSheetTimestamp;
@property(copy) NSSet *channelHistory; // @dynamic channelHistory;
@property(copy) NSSet *collocatedGroup; // @dynamic collocatedGroup;
@property BOOL disabled; // @dynamic disabled;
@property(copy) NSString *displayName; // @dynamic displayName;
@property(copy) NSString *domainName; // @dynamic domainName;
@property BOOL hiddenNetwork; // @dynamic hiddenNetwork;
@property BOOL isPasspoint; // @dynamic isPasspoint;
@property BOOL isPersonalHotspot; // @dynamic isPersonalHotspot;
@property BOOL isServiceProviderRoamingEnabled; // @dynamic isServiceProviderRoamingEnabled;
@property(copy) NSDate *lastAutoJoinAt; // @dynamic lastAutoJoinAt;
@property(copy) NSDate *lastManualJoinAt; // @dynamic lastManualJoinAt;
@property(copy) NSArray *naiRealmList; // @dynamic naiRealmList;
@property(copy) NSString *payloadUUID;
@property BOOL possiblyHiddenNetwork; // @dynamic possiblyHiddenNetwork;
@property(copy) NSArray *roamingConsortiumList; // @dynamic roamingConsortiumList;
@property long long roamingProfileType; // @dynamic roamingProfileType;
@property long long security; // @dynamic security;
@property unsigned long long securityType; // @dynamic securityType;
@property long long shareMode; // @dynamic shareMode;
@property(copy) NSData *ssidData; // @dynamic ssidData;
@property BOOL systemMode; // @dynamic systemMode;
@property BOOL temporarilyDisabled; // @dynamic temporarilyDisabled;
@property long long userRole; // @dynamic userRole;
@property BOOL wasCaptiveNetwork; // @dynamic wasCaptiveNetwork;
@property(copy) NSDate *wasHiddenBefore; // @dynamic wasHiddenBefore;
@end

