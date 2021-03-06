/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICKeychainUtilities : NSObject

+ (id)DEPRECATED_faceIDUserDefaultsDisabled;
+ (id)DEPRECATED_touchIDUserDefaultsDisabled;
+ (id)_getItemForIdentifier:(id)arg1 accessGroupIdentifier:(id)arg2 alertTextForAuthentication:(id)arg3 error:(id*)arg4;
+ (id)_queryForIdentifier:(id)arg1 accessGroupIdentifier:(id)arg2 alertTextForAuthentication:(id)arg3 returnData:(bool)arg4;
+ (bool)_removeAllFromBiometricIDAssumeEncryptionKeyTypeIsUsed;
+ (bool)_removeItemForIdentifier:(id)arg1 accessGroupIdentifier:(id)arg2 itemType:(unsigned long long)arg3 accountIdentifier:(id)arg4 error:(id*)arg5;
+ (bool)_updateItemForIdentifier:(id)arg1 accessGroupIdentifier:(id)arg2 alertTextForAuthentication:(id)arg3 attributesToUpdate:(id)arg4 error:(id*)arg5;
+ (bool)addDevicePasscodeGuardedItem:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3;
+ (bool)addEncryptionKeyWithoutGuardianIfBiometricIDSupportedAndEnabled:(id)arg1 forIdentifier:(id)arg2 accountID:(id)arg3 error:(id*)arg4;
+ (bool)addItem:(id)arg1 forIdentifier:(id)arg2 secAccessControlObject:(id)arg3 itemType:(unsigned long long)arg4 acccountIdentifier:(id)arg5 error:(id*)arg6;
+ (void)beginEvaluatePolicyReplyBlock;
+ (bool)biometricIDHardwareIsAvailable;
+ (bool)biometricIDIsEnrolled;
+ (bool)biometricIDIsEnrolled:(id*)arg1 checkPolicyDomainState:(bool)arg2;
+ (bool)biometricIDSupportedAndEnabledForSharedPasswordForAccountID:(id)arg1;
+ (bool)biometricIDSupportedAndEnabledForSharedPasswordForAccountID:(id)arg1 checkPolicyDomainState:(bool)arg2;
+ (bool)biometricIDSupportedAndEnabledForSharedPasswordForAccountIDs:(id)arg1 strict:(bool)arg2;
+ (bool)biometricIDSupportedAndEnabledForSharedPasswordForAccountIDs:(id)arg1 strict:(bool)arg2 checkPolicyDomainState:(bool)arg3;
+ (void)bumpUpdatePolicyDomainStateAttemptCount;
+ (void)clearKeysAndUpdateDomainPolicyState;
+ (void)endEvaluatePolicyReplyBlock;
+ (bool)exceededMaxUpdatePolicyDomainStateAttemptCount;
+ (id)faceIDEnabledKeyForAccountID:(id)arg1;
+ (bool)faceIDIsEnrolled;
+ (bool)faceIDNotesSettingEnabledForAccountID:(id)arg1;
+ (bool)getBoolFromKeyChainForIdentifier:(id)arg1;
+ (id)getItemForIdentifier:(id)arg1 alertTextForAuthentication:(id)arg2 error:(id*)arg3;
+ (id)getItemFromAnyKeychainGroupForIdentifier:(id)arg1 error:(id*)arg2;
+ (unsigned long long)getUnsignedIntegerFromKeyChainForIdentifier:(id)arg1;
+ (bool)isControlVariableVersionMigratedToCurrent;
+ (bool)looselyAuthenticateWithDevicePasscodeWithAlertText:(id)arg1;
+ (void)migrateFromBioIDDisabledKeysToBioIDEnabledKeys;
+ (void)migrateKeysByMarkingWithEncryptionKeyTypeAndMovingIntoGroupContainer;
+ (void)moveAllEncryptionKeysToGroupContainerForAccountIdentifiers:(id)arg1 context:(id)arg2;
+ (id)policyStateNilData;
+ (void)removeAccountFromBiometricID:(id)arg1 andRemoveNotes:(bool)arg2;
+ (bool)removeAllFromBiometricID;
+ (bool)removeItemForIdentifier:(id)arg1 error:(id*)arg2;
+ (void)removeItemFromBiometricID:(id)arg1;
+ (void)removeNoteFromBiometricID:(id)arg1;
+ (void)resetUpdatePolicyDomainStateAttemptCount;
+ (id)secAccessControlObjectWithCreationFlag:(unsigned long long)arg1 error:(id*)arg2;
+ (void)setBool:(bool)arg1 forIdentifierInKeychain:(id)arg2;
+ (void)setControlVariableVersionToCurrent;
+ (void)setFaceIDEnabled:(bool)arg1 forAccountID:(id)arg2;
+ (void)setTouchIDEnabled:(bool)arg1 forAccountID:(id)arg2;
+ (void)setUnsignedInteger:(unsigned long long)arg1 forIdentifierInKeychain:(id)arg2;
+ (bool)touchIDEnabledForSharedPasswordForAccountIDs:(id)arg1 strict:(bool)arg2;
+ (id)touchIDEnabledKeyForAccountID:(id)arg1;
+ (bool)touchIDIsEnrolled;
+ (bool)touchIDNotesSettingEnabledForAccountID:(id)arg1;
+ (unsigned long long)unsignedIntegerFromData:(id)arg1;

@end
