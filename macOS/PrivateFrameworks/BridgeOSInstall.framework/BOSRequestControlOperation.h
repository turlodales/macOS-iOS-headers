//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BridgeOSInstall/BOSOperation.h>

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface BOSRequestControlOperation : BOSOperation
{
    NSObject<OS_dispatch_semaphore> *_doneWaitingForUpdateControl;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_semaphore> *doneWaitingForUpdateControl; // @synthesize doneWaitingForUpdateControl=_doneWaitingForUpdateControl;
- (void)bridgeOSSoftwareUpdateController:(id)arg1 updateControlGranted:(BOOL)arg2 error:(id)arg3;
- (void)cancel;
- (id)description;
- (void)main;
- (id)initWithRequest:(id)arg1 controller:(id)arg2;

@end

