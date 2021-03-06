//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKit/NSCopying-Protocol.h>
#import <StoreKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface SKCloudServiceSetupConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _targetsFinanceApplication;
    BOOL _forPublicSDK;
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL forPublicSDK; // @synthesize forPublicSDK=_forPublicSDK;
@property(nonatomic) BOOL targetsFinanceApplication; // @synthesize targetsFinanceApplication=_targetsFinanceApplication;
@property(copy, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)init;

@end

