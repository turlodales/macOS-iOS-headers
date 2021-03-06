//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSUserVoiceProfileStore : NSObject
{
    unsigned long long _numberOfBaseProfileUtterancesToUpload;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) unsigned long long numberOfBaseProfileUtterancesToUpload; // @synthesize numberOfBaseProfileUtterancesToUpload=_numberOfBaseProfileUtterancesToUpload;
- (void)logVoiceProfileConfusionWithCleanup:(BOOL)arg1;
- (void)_logVoiceProfileConfusionForAsset:(id)arg1 withCleanup:(BOOL)arg2;
- (id)cleanupInvalidCloudOnBoardedProfilesWithDryRun:(BOOL)arg1;
- (void)addiTunesAccountForVoiceProfile:(id)arg1 withMultiUserToken:(id)arg2 withDsid:(id)arg3 withAltDsid:(id)arg4 withHomeId:(id)arg5 withHomeUserId:(id)arg6 withCompletionBlock:(CDUnknownBlockType)arg7;
- (void)resyncVoiceProfilesOnboardedThroughCloud;
- (id)userVoiceProfileForSiriProfileId:(id)arg1;
- (id)userVoiceProfileForSharedSiriDebugID:(id)arg1;
- (id)userVoiceProfileForVoiceProfileID:(id)arg1;
- (id)userVoiceProfilesForLocale:(id)arg1;
- (void)addImplicitUtterance:(id)arg1 toVoiceProfile:(id)arg2 withTriggerSource:(id)arg3 withAudioInput:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)retrainVoiceProfilesForLanguage:(id)arg1 withForceRetrain:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)checkIfVoiceProfile:(id)arg1 needsUpdatedWith:(id)arg2 withCategory:(unsigned long long)arg3;
- (id)deleteUserVoiceProfile:(id)arg1;
- (void)addUserVoiceProfile:(id)arg1 fromUtteranceCache:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end

