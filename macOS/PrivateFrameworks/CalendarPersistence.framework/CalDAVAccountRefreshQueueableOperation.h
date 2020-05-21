//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVQueueableOperation.h>

@interface CalDAVAccountRefreshQueueableOperation : CalDAVQueueableOperation
{
    BOOL _refreshHadChanges;
    BOOL _notifyOnChanges;
    BOOL _fromFullRefresh;
    BOOL _shouldTakePowerAssertion;
    unsigned int _powerAssertionID;
    unsigned long long _numberOfInboxEntriesAffected;
    unsigned long long _numberOfEventsAffected;
    unsigned long long _numberOfNotificationsAffected;
    BOOL fromUserInitiatedRefresh;
}

+ (BOOL)updateLastABCReportTimeAndAllowReport;
+ (void)reportRefreshExceptionToABC:(id)arg1;
@property(nonatomic) BOOL fromUserInitiatedRefresh; // @synthesize fromUserInitiatedRefresh;
@property(nonatomic) BOOL fromFullRefresh; // @synthesize fromFullRefresh=_fromFullRefresh;
@property(nonatomic) BOOL notifyOnChanges; // @synthesize notifyOnChanges=_notifyOnChanges;
@property(nonatomic) unsigned long long numberOfNotificationsAffected; // @synthesize numberOfNotificationsAffected=_numberOfNotificationsAffected;
@property(nonatomic) unsigned long long numberOfEventsAffected; // @synthesize numberOfEventsAffected=_numberOfEventsAffected;
@property(nonatomic) unsigned long long numberOfInboxEntriesAffected; // @synthesize numberOfInboxEntriesAffected=_numberOfInboxEntriesAffected;
@property unsigned int powerAssertionID; // @synthesize powerAssertionID=_powerAssertionID;
@property(nonatomic) BOOL shouldTakePowerAssertion; // @synthesize shouldTakePowerAssertion=_shouldTakePowerAssertion;
- (void)sendStatistics;
- (void)resetStatisticsGatheringCounters;
- (BOOL)holdingPowerAssertion;
- (void)dropPowerAssertion;
- (void)takePowerAssertion;
- (BOOL)suppressErrorDialog;
- (BOOL)refreshHadChanges;
- (void)finishOperation;
- (void)refreshWithExceptionHandling;
- (void)performOperation;
- (id)readableDescription;
- (void)tearDown;
- (void)finalize;
- (void)dealloc;
- (id)initWithSession:(id)arg1 takePowerAssertion:(BOOL)arg2;
- (id)extraUserInfoForRebuiltError;
- (BOOL)_isSameTypeOfRefreshAs:(id)arg1;
- (BOOL)_shouldCoalesceWithOperations:(id)arg1;
- (BOOL)deleteRemovedCalendarsForPrincipal:(id)arg1 withURLs:(id)arg2 error:(id *)arg3;
- (void)updateSharees:(id)arg1 forCalendar:(id)arg2 context:(id)arg3;
- (BOOL)updateAndRefreshCalendarsForPrincipal:(id)arg1 forCalendarContainers:(id)arg2 inboxURL:(id)arg3 inboxContainer:(id)arg4 isDeepRefresh:(BOOL)arg5 deleteMissingCalendars:(BOOL)arg6 error:(id *)arg7;
- (BOOL)updateNotificationsForPrincipal:(id)arg1 forNotificationContainer:(id)arg2 error:(id *)arg3;
- (BOOL)updateOutboxForPrincipal:(id)arg1 forOutboxContainer:(id)arg2 error:(id *)arg3;
- (BOOL)updateInboxForPrincipal:(id)arg1 forInboxContainer:(id)arg2 error:(id *)arg3;
- (BOOL)updatePrincipal:(id)arg1 forCalendarHome:(id)arg2 error:(id *)arg3;
- (BOOL)_regularRefreshCalendarsForPrincipalCoreDAV:(id)arg1 isDeepRefresh:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_syncReportForPrincipalCoreDAV:(id)arg1 error:(id *)arg2;
- (BOOL)_shouldFallBackToRegularRefreshForPrincipalCoreDAV:(id)arg1 forError:(id)arg2;
- (BOOL)_refreshCalendarsForPrincipalCoreDAV:(id)arg1 error:(id *)arg2;
- (BOOL)refreshCalendarsForPrincipalCoreDAV:(id)arg1 error:(id *)arg2;
- (void)_propPatchWithNoErrorHandlingStringValue:(id)arg1 nameSpace:(id)arg2 name:(id)arg3 accountInfoProvider:(id)arg4 url:(id)arg5;
- (int)_sharingStatusForContainer:(id)arg1;
- (void)updateCurrentAddresses:(id)arg1 newAddresses:(id)arg2 principal:(id)arg3 calendar:(id)arg4 context:(id)arg5;
- (BOOL)refreshPropertiesForPrincipalCoreDAV:(id)arg1 error:(id *)arg2;
- (BOOL)_accountExistsWithHost:(id)arg1 principalPath:(id)arg2 inManagedObjectContext:(id)arg3;
- (void)updatePrincipal:(id)arg1 newPrincipalPath:(id)arg2;
- (BOOL)rectifyPrincipalPathForPrincipal:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
- (void)_markLastAttachmentForPrincipal:(id)arg1 account:(id)arg2 inManagedObjectContext:(id)arg3 error:(id *)arg4;
- (void)refresh;
- (BOOL)_refreshPropertiesAndCalendarsForPrincipal:(id)arg1 error:(id *)arg2;

@end

