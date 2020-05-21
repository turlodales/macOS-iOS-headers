//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface PKApplyWebServiceApplyStepInfo : NSObject
{
    NSString *_conversationIdentifier;
    unsigned long long _contextType;
    NSArray *_pages;
    NSString *_coreIDVSessionID;
    NSString *_coreIDVServiceProviderName;
    NSString *_coreIDVTier;
    NSArray *_encryptionCertificates;
    NSString *_encryptionVersion;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *encryptionVersion; // @synthesize encryptionVersion=_encryptionVersion;
@property(readonly, copy, nonatomic) NSArray *encryptionCertificates; // @synthesize encryptionCertificates=_encryptionCertificates;
@property(readonly, copy, nonatomic) NSString *coreIDVTier; // @synthesize coreIDVTier=_coreIDVTier;
@property(readonly, copy, nonatomic) NSString *coreIDVServiceProviderName; // @synthesize coreIDVServiceProviderName=_coreIDVServiceProviderName;
@property(readonly, copy, nonatomic) NSString *coreIDVSessionID; // @synthesize coreIDVSessionID=_coreIDVSessionID;
@property(readonly, copy, nonatomic) NSArray *pages; // @synthesize pages=_pages;
@property(readonly, nonatomic) unsigned long long contextType; // @synthesize contextType=_contextType;
@property(copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
- (void)_handleCertificates:(id)arg1;
- (id)initWithJSONObject:(id)arg1 featureApplication:(id)arg2;

@end

