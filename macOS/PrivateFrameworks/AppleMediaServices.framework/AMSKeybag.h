//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AMSKeybag : NSObject
{
    unsigned int _fairPlayContextID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property unsigned int fairPlayContextID; // @synthesize fairPlayContextID=_fairPlayContextID;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_validateFairPlayPath;
- (unsigned int)_getFairplayContext:(id *)arg1;
- (void)_destroyContext;
- (void)resetContext;
- (id)kybsyncData:(id)arg1 transationType:(unsigned int)arg2 error:(id *)arg3;
- (id)keybagSyncDataWithAccountID:(id)arg1 transactionType:(unsigned int)arg2 error:(id *)arg3;
- (id)keybagSyncData:(id)arg1 transactionType:(unsigned int)arg2 outError:(id *)arg3;
- (BOOL)importKeybagData:(id)arg1 outError:(id *)arg2;
- (BOOL)importKeybagWithData:(id)arg1 error:(id *)arg2;
- (unsigned int)fairplayContextWithError:(id *)arg1;
- (unsigned int)fairplayContext:(id *)arg1;
- (id)init;

@end

