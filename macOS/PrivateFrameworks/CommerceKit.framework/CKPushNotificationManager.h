//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKStoreClient;

@interface CKPushNotificationManager : NSObject
{
    id _delegate;
    CKStoreClient *_storeClient;
}

+ (id)pushNotificationManagerForStoreClient:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) CKStoreClient *storeClient; // @synthesize storeClient=_storeClient;
@property __weak id <CKPushNotificationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_sendChangedToDelegate;
- (void)_sendSuccessToDelegate;
- (void)_sendErrorToDelegate:(id)arg1;
- (BOOL)isRegisteredForAccount:(id)arg1 andMask:(long long)arg2;
- (BOOL)isRegisteredForAccount:(id)arg1;
- (BOOL)stopAtSignOut;
- (void)disableAutoDownloadAtSignOutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)startAtSignIn;
- (void)enableAutoDownloadAtSignInWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)stop;
- (void)disableAutoDownloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)start;
- (void)enableAutoDownloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)checkEnabledMediaTypes;
- (void)getEnabledMedaTypesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)registerPushToken;
- (void)registerDeviceTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithStoreClient:(id)arg1;

@end

