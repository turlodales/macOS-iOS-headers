//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BridgeOSInstallController;

@interface SUBridgeOSUpdateManager : NSObject
{
    BOOL _currentHardwareHasBridgeOS;
    BridgeOSInstallController *_controller;
}

+ (id)sharedManager;
@property(retain) BridgeOSInstallController *controller; // @synthesize controller=_controller;
@property BOOL currentHardwareHasBridgeOS; // @synthesize currentHardwareHasBridgeOS=_currentHardwareHasBridgeOS;
- (BOOL)_prepareProduct:(id)arg1 error:(id *)arg2 apply:(BOOL)arg3 inForeground:(BOOL)arg4 progressHandler:(CDUnknownBlockType)arg5;
- (id)_localPackageSpecifiersForProduct:(id)arg1;
- (BOOL)updateIsPrepared;
- (BOOL)cancelPendingUpdate;
- (BOOL)updateIsPending;
- (BOOL)applyUpdateForProduct:(id)arg1 inForeground:(BOOL)arg2 error:(id *)arg3 progressHandler:(CDUnknownBlockType)arg4;
- (BOOL)prepareUpdateForProduct:(id)arg1 inForeground:(BOOL)arg2 error:(id *)arg3 progressHandler:(CDUnknownBlockType)arg4;
- (id)productWithAvailableUpdate:(id)arg1 isUpdatePrepared:(char *)arg2;
- (BOOL)bridgeOSUpdateEnabled;
- (void)dealloc;
- (id)init;

@end

