//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest
{
    NSString *_bundleID;
    long long _discoverableTrinary;
}

- (void).cxx_destruct;
@property(nonatomic) long long discoverableTrinary; // @synthesize discoverableTrinary=_discoverableTrinary;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (BOOL)requiresTokenRegistration;
- (id)requestOperationClasses;
- (int)operationType;
- (long long)databaseScope;
- (void)setDiscoverable:(BOOL)arg1;
- (id)init;

@end

