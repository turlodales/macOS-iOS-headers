//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPProvisioningManager : NSObject
{
}

+ (id)sharedProvisioningManager:(id)arg1;
+ (id)sharedProvisioningManager;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)removeProvisioningStore;
- (id)removeAllProvisioningProfiles;
- (id)uninstallProvisioningProfileByUUID:(id)arg1;
- (id)uninstallProvisioningProfileByApplicationIdentifier:(id)arg1 andUUID:(id)arg2;
- (id)uninstallProvisioningProfiles:(id)arg1;
- (id)validateAndCopyProfileFromData:(id)arg1 error:(id *)arg2;
- (id)installCombinedProvisioningDictionary:(id)arg1;
- (id)installProvisioningProfile:(id)arg1;
- (id)installProvisioningProfile:(id)arg1 withUserData:(id)arg2;
- (void)postNotification;
- (id)combinedProvisioningDictionaryFromData:(id)arg1 withUserData:(id)arg2 error:(id *)arg3;
- (id)provisioningDictionaryForUUID:(id)arg1 error:(id *)arg2;
- (id)provisioningDictionaryForApplicationIdentifier:(id)arg1 andUUID:(id)arg2 error:(id *)arg3;
- (id)provisioningDictionariesForApplicationIdentifier:(id)arg1 error:(id *)arg2;
- (id)allProvisioningDictionaries:(id *)arg1;
- (BOOL)profilesAreInstalled;

@end

