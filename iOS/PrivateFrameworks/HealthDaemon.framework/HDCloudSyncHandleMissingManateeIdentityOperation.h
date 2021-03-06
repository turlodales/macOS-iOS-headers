/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncHandleMissingManateeIdentityOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    HDSynchronousTaskGroup * _taskGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deleteZonesForLostManateeIdentitiesInZones:(id)arg1 container:(id)arg2 database:(id)arg3;
- (void)_handleLostManateeIdentitiesForZones:(id)arg1 container:(id)arg2;
- (void)_leaveSharesForLostManateeIdentitiesInZones:(id)arg1 container:(id)arg2 database:(id)arg3;
- (void)main;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(bool)arg2 errors:(id)arg3;

@end
