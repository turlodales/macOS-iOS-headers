//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "TUPubliclyAccessibleCopying.h"

@class NSData, NSString, NSURL;

@interface TUCTCapabilityInfo : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>
{
    BOOL _canEnable;
    BOOL _enabled;
    BOOL _canEnableRoaming;
    BOOL _roamingEnabled;
    int _provisioningStatus;
    NSURL *_provisioningURL;
    NSData *_provisioningPostData;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, getter=isRoamingEnabled) BOOL roamingEnabled; // @synthesize roamingEnabled=_roamingEnabled;
@property(nonatomic) BOOL canEnableRoaming; // @synthesize canEnableRoaming=_canEnableRoaming;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL canEnable; // @synthesize canEnable=_canEnable;
@property(copy, nonatomic) NSData *provisioningPostData; // @synthesize provisioningPostData=_provisioningPostData;
@property(copy, nonatomic) NSURL *provisioningURL; // @synthesize provisioningURL=_provisioningURL;
@property(nonatomic) int provisioningStatus; // @synthesize provisioningStatus=_provisioningStatus;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg1;
- (id)publiclyAccessibleCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)invalidateProvisioningURL;
@property(readonly, nonatomic, getter=isProvisioningURLInvalid) BOOL provisioningURLInvalid;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

