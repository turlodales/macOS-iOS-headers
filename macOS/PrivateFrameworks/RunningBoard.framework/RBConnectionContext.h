//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RBProcess;

__attribute__((visibility("hidden")))
@interface RBConnectionContext : NSObject
{
    id <RBAssertionManaging> _assertionManager;
    id <RBEntitlementManaging> _entitlementManager;
    id <RBProcessManaging> _processManager;
    id <RBProcessMonitoring> _processMonitor;
    id <RBStateCaptureManaging> _stateCaptureManager;
    RBProcess *_process;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) RBProcess *process; // @synthesize process=_process;
@property(readonly, nonatomic) id <RBStateCaptureManaging> stateCaptureManager; // @synthesize stateCaptureManager=_stateCaptureManager;
@property(readonly, nonatomic) id <RBProcessMonitoring> processMonitor; // @synthesize processMonitor=_processMonitor;
@property(readonly, nonatomic) id <RBProcessManaging> processManager; // @synthesize processManager=_processManager;
@property(readonly, nonatomic) id <RBEntitlementManaging> entitlementManager; // @synthesize entitlementManager=_entitlementManager;
@property(readonly, nonatomic) id <RBAssertionManaging> assertionManager; // @synthesize assertionManager=_assertionManager;
- (id)initWithAssertionManager:(id)arg1 entitlementManager:(id)arg2 processManager:(id)arg3 processMonitor:(id)arg4 stateCaptureManager:(id)arg5 process:(id)arg6;

@end

