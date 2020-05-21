//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreMediaStream/MSDaemon.h>

@class NSCountedSet;

@interface MSMediaStreamDaemon : MSDaemon
{
    id <MSMediaStreamDaemonDelegate> _delegate;
    NSCountedSet *_retainedObjects;
}

- (void).cxx_destruct;
@property(nonatomic) id <MSMediaStreamDaemonDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)mayDownloadPersonID:(id)arg1;
- (void)didReceivePushNotificationForPersonID:(id)arg1;
- (void)didReceiveGlobalResetSyncForPersonID:(id)arg1;
- (void)didExceedPublishQuotaForPersonID:(id)arg1 retryDate:(id)arg2;
- (void)didReceiveAuthenticationSuccessForPersonID:(id)arg1;
- (void)didReceiveAuthenticationFailureForPersonID:(id)arg1;
- (void)showInvitationFailureAlertForPersonID:(id)arg1 failures:(id)arg2;
- (void)didReceiveNewShareState:(id)arg1 oldShareState:(id)arg2 forPersonID:(id)arg3;
- (void)stop;
- (void)start;
- (void)deleteAssetCollections:(id)arg1 forPersonID:(id)arg2;
- (void)didReceiveNewServerSideConfigurationForPersonID:(id)arg1;
- (void)refreshServerSideConfigurationForPersonID:(id)arg1;
- (void)didReceiveServerSideConfigurationVersion:(id)arg1 forPersonID:(id)arg2;
- (id)serverSideConfigurationForPersonID:(id)arg1;
- (id)ownSubscribedStreamForPersonID:(id)arg1;
- (id)subscribedStreamsForPersonID:(id)arg1;
- (void)computeHashForAsset:(id)arg1 personID:(id)arg2;
- (void)resetSubscriberSyncForPersonID:(id)arg1;
- (void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)arg1;
- (void)pollForSubscriptionUpdatesForPersonID:(id)arg1;
- (BOOL)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 outError:(id *)arg3;
- (BOOL)enqueueAssetCollection:(id)arg1 personID:(id)arg2 outError:(id *)arg3;
- (void)forgetPersonID:(id)arg1;
- (void)stopAllActivities;
- (void)abortAllActivityForPersonID:(id)arg1;
- (void)reenqueueQuarantinedActivitiesWithReason:(id)arg1;
- (void)retryOutstandingActivities;
- (id)_boundServerSideConfigManagerForPersonID:(id)arg1;
- (id)_boundDeleterForPersonID:(id)arg1;
- (id)_boundSubscriberForPersonID:(id)arg1;
- (id)_boundPublisherForPersonID:(id)arg1;
- (void)didUnidle;
- (void)didIdle;
- (BOOL)isInRetryState;
- (BOOL)personIDHasOutstandingPublications:(id)arg1;
- (BOOL)hasOutstandingActivity;
- (id)nextActivityDate;
- (id)init;

@end

