//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DeviceManagement/DMFAppRequest.h>

@class NSNumber;

@interface DMFInstallAppRequest : DMFAppRequest
{
    BOOL _allowFreePurchases;
    unsigned long long _licenseType;
    NSNumber *_accountIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) BOOL allowFreePurchases; // @synthesize allowFreePurchases=_allowFreePurchases;
@property(nonatomic) unsigned long long licenseType; // @synthesize licenseType=_licenseType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

