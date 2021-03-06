//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoServicesConfiguration/CPSStatusInformation-Protocol.h>

@class NSDictionary, NSString;

@interface CPSStatusInformation : NSObject <CPSStatusInformation>
{
    NSDictionary *_statusInformation;
    long long _serviceDataVersion;
}

- (void).cxx_destruct;
@property long long serviceDataVersion; // @synthesize serviceDataVersion=_serviceDataVersion;
@property(retain) NSDictionary *statusInformation; // @synthesize statusInformation=_statusInformation;
- (BOOL)isLegacySharedPhotoStreamEnabled;
- (BOOL)isLegacyMyPhotoStreamEnabled;
- (id)legacyStreamApplicationPrefix;
- (id)legacyMyPhotoStreamLibraryIdentifier;
- (id)legacyApplicationItemsToImport;
- (BOOL)legacyApplicationHasUnimportedAssets;
- (id)rawLegacyStatusInformation;
- (id)countOfItemsImportedByReference;
- (unsigned long long)photosApplicationState;
- (BOOL)canEnableCloudPhotoLibraryForSystemPhotoLibrary;
- (BOOL)systemPhotoLibraryIsAvailable;
- (id)myPhotoStreamURL;
- (id)sharedStreamsURL;
- (id)sharedStreamsPushServiceEnvironment;
- (id)preferencesValueForKey:(id)arg1 serviceIdentifier:(id)arg2;
- (id)availabilityBaseURL;
- (id)loggedIniCloudAccountQuotaInformation;
- (id)loggedIniCloudAccountDisplayNameInformation;
- (long long)accountStatus;
- (id)authToken;
- (id)loggedInPersonId;
- (id)loggedInAppleId;
- (BOOL)hasStatusProperty:(id)arg1;
- (long long)rampStateForServiceIdentifier:(id)arg1;
- (long long)targetStateForServiceIdentifier:(id)arg1;
- (BOOL)shouldStartServiceWithTargetState:(long long)arg1;
- (void)validateDataVersion;
- (id)initWithInformationDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

