//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSServicesMonitorObserver.h"

@class NSMutableDictionary, NSString;

@interface AMServicesController : NSObject <NSServicesMonitorObserver>
{
    NSMutableDictionary *__servicesMonitorsByURL;
    NSMutableDictionary *__completionHandlersByURL;
    NSMutableDictionary *__timersByURL;
}

+ (id)sharedServicesController;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *_timersByURL; // @synthesize _timersByURL=__timersByURL;
@property(retain, nonatomic) NSMutableDictionary *_completionHandlersByURL; // @synthesize _completionHandlersByURL=__completionHandlersByURL;
@property(retain, nonatomic) NSMutableDictionary *_servicesMonitorsByURL; // @synthesize _servicesMonitorsByURL=__servicesMonitorsByURL;
- (void)servicesDidChange;
- (void)_serviceFoundForServicesMonitor:(id)arg1 url:(id)arg2;
- (BOOL)_activateServiceAction:(id)arg1 error:(id *)arg2;
- (void)_timeoutTimerFired:(id)arg1;
- (BOOL)activateServiceAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_clearServiceActivationStateAtURL:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

