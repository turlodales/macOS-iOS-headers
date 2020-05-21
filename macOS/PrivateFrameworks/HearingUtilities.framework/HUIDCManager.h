//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUIDCRemoteControllerDelegate.h"
#import "NSNetServiceBrowserDelegate.h"

@class HUIDCSlaveController, NSMutableArray, NSNetServiceBrowser, NSString;

@interface HUIDCManager : NSObject <NSNetServiceBrowserDelegate, HUIDCRemoteControllerDelegate>
{
    Class _slaveClass;
    Class _remoteClass;
    id <AXIDCControllerBrowserDelegateProtocol> _delegate;
    id <HUIDCManagerSecurityDelegate> _securityDelegate;
    long long _state;
    HUIDCSlaveController *_slaveController;
    NSString *_serviceType;
    NSNetServiceBrowser *_browser;
    NSMutableArray *_remoteControllers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *remoteControllers; // @synthesize remoteControllers=_remoteControllers;
@property(retain, nonatomic) NSNetServiceBrowser *browser; // @synthesize browser=_browser;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) HUIDCSlaveController *slaveController; // @synthesize slaveController=_slaveController;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <HUIDCManagerSecurityDelegate> securityDelegate; // @synthesize securityDelegate=_securityDelegate;
@property(nonatomic) __weak id <AXIDCControllerBrowserDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)controller:(id)arg1 didCloseConnectionWithError:(id)arg2;
- (void)controllerDidFinishConnecting:(id)arg1;
- (void)controller:(id)arg1 didFinishSendingData:(id)arg2;
- (void)controller:(id)arg1 didReceiveData:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (void)stop;
- (id)remoteControllerForHostname:(id)arg1;
- (void)transitionToSlaveWithCompletion:(CDUnknownBlockType)arg1;
- (void)resolveMasterWithCompletion:(CDUnknownBlockType)arg1;
- (void)becomeMaster;
- (BOOL)shouldBecomeMaster;
- (void)sendObject:(id)arg1 toController:(id)arg2 withSendCompletion:(CDUnknownBlockType)arg3;
- (void)sendObject:(id)arg1 toAllControllersExcept:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)clearControllers;
- (id)availableRemoteControllers;
- (id)availableControllers;
- (id)initWithServiceType:(id)arg1 remoteClass:(Class)arg2 andSlaveClass:(Class)arg3;
- (id)initWithServiceType:(id)arg1;
- (Class)validateClass:(Class)arg1 isKindOfClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

