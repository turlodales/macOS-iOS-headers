//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, SMSystem_Daemon, SMUIDGIDTranslator;

@interface SMMigrationRequest : NSObject <NSCoding, NSSecureCoding>
{
    BOOL _disableSaving;
    BOOL _rebootOccurred;
    BOOL _systemDefenseTriggered;
    BOOL _activateFilevault;
    BOOL _shouldEnableFastUserSwitching;
    BOOL _copiesNetworkSettings;
    BOOL _copiesTimeZoneSettings;
    BOOL _copiesMachineSettings;
    BOOL _copiesPrinterSettings;
    BOOL _copiesHomeDirectories;
    BOOL _copiesUsers;
    BOOL _predeterminedUIDs;
    BOOL _shouldMigrateGuest;
    BOOL _guestWasOn;
    BOOL _hasFatalError;
    unsigned long long _state;
    unsigned long long _type;
    NSString *_uuid;
    SMSystem_Daemon *_sourceSystem;
    SMSystem_Daemon *_targetSystem;
    NSDictionary *_sourceSystemLongTermIdentifier;
    NSDictionary *_targetSystemLongTermIdentifier;
    NSMutableArray *_messages;
    SMUIDGIDTranslator *_uidgidTranslator;
    NSString *_secureTokenUser;
    NSString *_secureTokenPassword;
    NSDictionary *_iCloudBag;
    NSMutableArray *_usersToTransfer;
    NSMutableArray *_fileGroupingPaths;
    NSArray *_incompatibleApps;
    NSString *_autoLoginUser;
    NSMutableSet *_faultFiles;
    NSDictionary *_failureRequests;
    NSMutableSet *_completedPaths;
    NSMutableDictionary *_stepProgress;
    struct timeval _bootTime;
}

+ (id)propertiesToMonitorForSave;
+ (id)keyPathsForValuesAffectingBootTimeDisplay;
+ (id)keyPathsForValuesAffectingOsInstall;
+ (void)restoreSecurityState:(id)arg1;
+ (void)saveSecurityState:(id)arg1;
+ (void)performSecurityOperation:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *stepProgress; // @synthesize stepProgress=_stepProgress;
@property struct timeval bootTime; // @synthesize bootTime=_bootTime;
@property(retain) NSMutableSet *completedPaths; // @synthesize completedPaths=_completedPaths;
@property(retain) NSDictionary *failureRequests; // @synthesize failureRequests=_failureRequests;
@property BOOL hasFatalError; // @synthesize hasFatalError=_hasFatalError;
@property(retain) NSMutableSet *faultFiles; // @synthesize faultFiles=_faultFiles;
@property BOOL guestWasOn; // @synthesize guestWasOn=_guestWasOn;
@property BOOL shouldMigrateGuest; // @synthesize shouldMigrateGuest=_shouldMigrateGuest;
@property(retain) NSString *autoLoginUser; // @synthesize autoLoginUser=_autoLoginUser;
@property BOOL predeterminedUIDs; // @synthesize predeterminedUIDs=_predeterminedUIDs;
@property BOOL copiesUsers; // @synthesize copiesUsers=_copiesUsers;
@property(retain) NSArray *incompatibleApps; // @synthesize incompatibleApps=_incompatibleApps;
@property BOOL copiesHomeDirectories; // @synthesize copiesHomeDirectories=_copiesHomeDirectories;
@property BOOL copiesPrinterSettings; // @synthesize copiesPrinterSettings=_copiesPrinterSettings;
@property BOOL copiesMachineSettings; // @synthesize copiesMachineSettings=_copiesMachineSettings;
@property BOOL copiesTimeZoneSettings; // @synthesize copiesTimeZoneSettings=_copiesTimeZoneSettings;
@property BOOL copiesNetworkSettings; // @synthesize copiesNetworkSettings=_copiesNetworkSettings;
@property(retain) NSMutableArray *fileGroupingPaths; // @synthesize fileGroupingPaths=_fileGroupingPaths;
@property BOOL shouldEnableFastUserSwitching; // @synthesize shouldEnableFastUserSwitching=_shouldEnableFastUserSwitching;
@property(retain) NSMutableArray *usersToTransfer; // @synthesize usersToTransfer=_usersToTransfer;
@property(retain) NSDictionary *iCloudBag; // @synthesize iCloudBag=_iCloudBag;
@property BOOL activateFilevault; // @synthesize activateFilevault=_activateFilevault;
@property(retain) NSString *secureTokenPassword; // @synthesize secureTokenPassword=_secureTokenPassword;
@property(retain) NSString *secureTokenUser; // @synthesize secureTokenUser=_secureTokenUser;
@property(retain) SMUIDGIDTranslator *uidgidTranslator; // @synthesize uidgidTranslator=_uidgidTranslator;
@property BOOL systemDefenseTriggered; // @synthesize systemDefenseTriggered=_systemDefenseTriggered;
@property(retain) NSMutableArray *messages; // @synthesize messages=_messages;
@property BOOL rebootOccurred; // @synthesize rebootOccurred=_rebootOccurred;
@property BOOL disableSaving; // @synthesize disableSaving=_disableSaving;
@property(retain) NSDictionary *targetSystemLongTermIdentifier; // @synthesize targetSystemLongTermIdentifier=_targetSystemLongTermIdentifier;
@property(retain) NSDictionary *sourceSystemLongTermIdentifier; // @synthesize sourceSystemLongTermIdentifier=_sourceSystemLongTermIdentifier;
@property(retain) SMSystem_Daemon *targetSystem; // @synthesize targetSystem=_targetSystem;
@property(retain) SMSystem_Daemon *sourceSystem; // @synthesize sourceSystem=_sourceSystem;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
@property unsigned long long type; // @synthesize type=_type;
@property unsigned long long state; // @synthesize state=_state;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly) BOOL shouldPersistNetworkKeys;
@property(readonly) BOOL currentlyBackgrounded;
@property(readonly) BOOL canRunInBackground;
- (void)setProgress:(id)arg1 forStep:(id)arg2;
- (id)progressForStep:(id)arg1;
@property(readonly) BOOL resumable;
@property(readonly) BOOL hasResumableSystems;
- (void)cancel;
@property(readonly) BOOL shouldSave;
- (void)detachSaveMonitors;
- (void)attachSaveMonitors;
@property(readonly) NSNumber *bootTimeDisplay;
@property(readonly) BOOL copiesApplicationSettings;
@property BOOL osInstall;
- (void)advanceToNextState;
- (void)sanitizeRequest;
@property(readonly) BOOL didReboot;
@property(readonly) BOOL requiresReboot;
- (void)nudgeBootTime;
- (void)updateBootTime;
- (void)getBootTime:(struct timeval *)arg1;
- (BOOL)copyWasCompletedForPath:(id)arg1;
- (void)copyCompletedForPaths:(id)arg1;
- (void)copyCompletedForPath:(id)arg1;
- (id)usersToReplaceOnDestinationSystem:(id)arg1;
- (id)description;
- (void)addFileGroupingPath:(unsigned long long)arg1;
- (void)removeUserToTransferWithOldShortName:(id)arg1;
- (void)addUserToTransfer:(id)arg1 excludedPaths:(id)arg2 overwriteTargetName:(id)arg3 additionalKeyValues:(id)arg4;
- (void)addMessages:(id)arg1;
- (void)addMessage:(id)arg1;
- (id)dictionaryDescription;
- (void)updateAutoLoginUser;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)securitySanitizedUsers;
- (id)sanitizedUsers;
- (id)sanitizedUsersForKeys:(id)arg1;
- (id)exportXPCDict;
- (id)initWithXPCDict:(id)arg1;
- (id)init;
- (void)_initCollections;

@end

