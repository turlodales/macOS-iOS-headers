//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommerceKit/CKServiceInterface.h>

@class NSArray, NSMutableArray, NSNumber;

@interface CKPurchaseController : CKServiceInterface
{
    NSMutableArray *_purchases;
    NSMutableArray *_rejectedPurchases;
    NSArray *_adoptionEligibleItems;
    NSNumber *_adoptionServerStatus;
    NSNumber *_adoptionErrorNumber;
    CDUnknownBlockType _dialogHandler;
}

+ (void)setNeedsSilentMachineAuthorization:(BOOL)arg1;
+ (id)sharedPurchaseController;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType dialogHandler; // @synthesize dialogHandler=_dialogHandler;
- (BOOL)adoptionCompletedForBundleID:(id)arg1;
- (void)_performVPPReceiptRenewal;
- (void)checkServerDownloadQueue;
- (id)purchaseInProgressForProductID:(id)arg1;
- (id)purchasesInProgress;
- (void)cancelPurchaseWithProductID:(id)arg1;
- (void)resumeDownloadForPurchasedProductID:(id)arg1;
- (void)startPurchases:(id)arg1 shouldStartDownloads:(BOOL)arg2 eventHandler:(CDUnknownBlockType)arg3;
- (void)startPurchases:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performPurchase:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

