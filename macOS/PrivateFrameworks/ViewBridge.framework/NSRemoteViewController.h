//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSRemoteViewControllerAuxiliary, NSString, NSUUID, NSXPCListenerEndpoint;

@interface NSRemoteViewController : NSViewController
{
    NSRemoteViewControllerAuxiliary *_aux;
}

+ (BOOL)shouldLayerBackRemoteView:(id)arg1;
+ (BOOL)inhibitFirstResponder;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (void)requestViewController:(id)arg1 fromServiceListenerEndpoint:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (void)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (void)requestViewControllerForExtensionWithIdentifier:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (void)requestViewControllerForExtensionWithIdentifier:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 serviceInstanceIdentifier:(id)arg3 connectionHandler:(CDUnknownBlockType)arg4;
+ (void)requestViewController:(id)arg1 withServiceViewControllerIdentifier:(id)arg2 forRemoteView:(id)arg3 connectionHandler:(CDUnknownBlockType)arg4;
+ (void)requestViewController:(id)arg1 withServiceViewControllerIdentifier:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3 withBlock:(CDUnknownBlockType)arg4;
- (BOOL)shouldLayerBackRemoteView:(id)arg1;
- (BOOL)inhibitFirstResponder;
- (void)setInhibitFirstResponder:(BOOL)arg1;
- (void)_viewDidMoveToSuperview;
- (id)_viewWithoutLoad;
- (void)synchronizeAnimationsInActions:(CDUnknownBlockType)arg1;
- (void)disconnect;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)exportedObject;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (id)serviceViewControllerProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)serviceViewControllerProxy;
- (void)setView:(id)arg1;
@property(readonly) CDStruct_6ad76789 serviceAuditToken;
@property(readonly) int serviceProcessIdentifier;
@property(readonly) NSString *serviceViewControllerClassName;
@property(readonly) NSUUID *serviceInstanceIdentifier;
@property(readonly) NSString *serviceBundleIdentifier;
@property(readonly) NSString *remoteViewIdentifier;
@property(readonly) NSXPCListenerEndpoint *serviceListenerEndpoint;
- (void)setServiceViewControllerClassName:(id)arg1;
- (void)setServiceBundleIdentifier:(id)arg1;
- (void)setServiceListenerEndpoint:(id)arg1;
- (double)fauxSynchronousIPCPatience;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_initAux;
- (void)dealloc;
- (oneway void)release;
- (void)__vbSuperRelease;
- (id)retain;
- (void)__vbWithLockPerform:(CDUnknownBlockType)arg1;
- (struct os_unfair_lock_s *)retainReleaseLock;

@end

