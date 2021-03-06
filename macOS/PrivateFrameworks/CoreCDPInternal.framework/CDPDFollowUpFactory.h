//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CDPDFollowUpFactory : NSObject
{
}

+ (id)contextToIdentifierMap;
- (BOOL)_supportsFaceID;
- (BOOL)_isBiometricCapable;
- (BOOL)_isBiometricAuthEnrolled;
- (id)_userInfoForPrefPaneWithCommandKey:(id)arg1;
- (id)_localizedStringForKey:(id)arg1;
- (unsigned long long)secretType;
- (id)_baseFollowUpItemWithContext:(id)arg1;
- (id)_followUpForSettingUpBiometricsWithContext:(id)arg1;
- (id)_followUpActionForRecoveryKeyRepair;
- (id)_followUpForRecoveryKeyRepairWithContext:(id)arg1;
- (id)_followUpActionForRepair;
- (id)_followUpForRepairWithContext:(id)arg1;
- (id)_offlineSecretChangeFollowUpAction;
- (id)_followUpForOfflineSecretChangeWithContext:(id)arg1;
- (id)followUpItemWithContext:(id)arg1;
- (id)identifierForContext:(id)arg1;

@end

