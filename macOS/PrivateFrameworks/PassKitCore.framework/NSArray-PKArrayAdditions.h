//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (PKArrayAdditions)
+ (id)pk_FilteredCardErrors:(id)arg1;
+ (id)pk_FilteredShippingErrorsForContactFields:(id)arg1 errors:(id)arg2;
+ (id)pk_FilteredBillingErrorsForContactFields:(id)arg1 errors:(id)arg2;
+ (id)paymentShippingAddressUnserviceableErrorWithLocalizedDescription:(id)arg1;
+ (id)paymentBillingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2;
+ (id)paymentShippingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2;
+ (id)paymentContactInvalidErrorWithContactField:(id)arg1 localizedDescription:(id)arg2;
- (BOOL)pk_containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)pk_objectsPassingTest:(CDUnknownBlockType)arg1;
- (id)pk_shuffledArray;
- (id)pk_arrayByApplyingBlock:(CDUnknownBlockType)arg1;
- (id)pk_arrayByRemovingObjectsInArray:(id)arg1;
- (id)pk_arrayByRemovingObject:(id)arg1;
@end

