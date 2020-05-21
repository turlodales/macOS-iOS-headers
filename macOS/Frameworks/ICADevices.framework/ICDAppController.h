//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, NSXPCListener;

__attribute__((visibility("hidden")))
@interface ICDAppController : NSObject <NSXPCListenerDelegate>
{
    NSXPCConnection *_clientConnection;
    NSXPCListener *_deviceObjectListener;
    NSXPCConnection *_icddConnection;
    NSObject<OS_dispatch_queue> *_sendMessageQueue;
}

+ (void)initialize;
@property(retain) NSObject<OS_dispatch_queue> *sendMessageQueue; // @synthesize sendMessageQueue=_sendMessageQueue;
@property NSXPCConnection *icddConnection; // @synthesize icddConnection=_icddConnection;
@property NSXPCListener *deviceObjectListener; // @synthesize deviceObjectListener=_deviceObjectListener;
- (void)quitWithReason:(id)arg1;
- (void)cancelOutstandingTransactions;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)setClientWithPID:(id)arg1 usingDevice:(BOOL)arg2;
- (id)clientUsingDevice;
- (int)numberOfClients;
- (void)removeClientWithPID:(id)arg1;
- (void)deviceIsServicingZeroClients;
- (void)sendMessage:(id)arg1 withConnection:(id)arg2;
- (void)queryLaunchParams;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)icddConnectionSuspended;
- (void)savePrefs;
- (void)dealloc;
- (void)messageFromClient:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)requestDeviceCancelOperation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestScannerDeviceDownloadObjectWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestScannerStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestScannerDeviceChangeScanAreaSelection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestScannerDeviceInitialize:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestScannerDeviceStart:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestScannerDeviceSetParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestScannerDeviceGetParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestScannerDeviceOpenSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestDeviceDownloadObjectWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestCameraDeviceUploadObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendCameraDevicePTPCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendDeviceMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyCameraObjectData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyCameraObjectThumbnail:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestCameraDeviceOpenSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestDeviceCloseSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestDeviceUnregisterClientNotifications:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestDeviceRegisterClientNotifications:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)commandName:(id)arg1;
- (void)copyDeviceObjectPropertyData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)copyDeviceObjectPropertyDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processResult:(id)arg1 onQueue:(id)arg2 sync:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processDirectResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)messageFromICDD:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)messageFromDevice:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (BOOL)checkTCCAccess:(CDStruct_6ad76789)arg1 clientPID:(int)arg2;
- (BOOL)checkPlatformBinary:(CDStruct_6ad76789)arg1 clientPID:(int)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)addSelectorToInterface:(id)arg1 selectorString:(id)arg2 origin:(BOOL)arg3;
- (void)disconnectDeviceWithDescription:(id)arg1;
- (short)connectDeviceWithDescription:(id)arg1;
- (BOOL)isRunningUnderDebugMode;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

