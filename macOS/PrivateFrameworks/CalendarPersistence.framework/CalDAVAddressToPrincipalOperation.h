//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalSingleSynchronousTask.h>

@class CalCalDAVTaskManager, CalDAVAccountInfoProvider, NSArray, NSMutableArray, NSOperationQueue;

@interface CalDAVAddressToPrincipalOperation : CalSingleSynchronousTask
{
    NSArray *_addresses;
    NSMutableArray *_principals;
    CalDAVAccountInfoProvider *_accountInfoProvider;
    NSOperationQueue *_opQueue;
    CalCalDAVTaskManager *_taskManager;
}

+ (void)checkHostForPrincipal:(id)arg1 matchesBaseURL:(id)arg2 inOperation:(id)arg3 goodMatchBlock:(CDUnknownBlockType)arg4 noMatchBlock:(CDUnknownBlockType)arg5;
+ (id)searchTaskForAddresses:(id)arg1 withMappings:(id)arg2 withMainAccountInfoProvider:(id)arg3;
+ (BOOL)_accountSupportsCUASetSearch:(id)arg1;
- (void).cxx_destruct;
@property(retain) CalCalDAVTaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(retain) NSArray *discoveredPrincipals; // @synthesize discoveredPrincipals=_principals;
@property(retain) NSArray *addresses; // @synthesize addresses=_addresses;
- (void)getPrincipalsSynchronously;
- (void)dealloc;
- (id)initWithAddresses:(id)arg1 forAccountInfoProvider:(id)arg2;

@end

