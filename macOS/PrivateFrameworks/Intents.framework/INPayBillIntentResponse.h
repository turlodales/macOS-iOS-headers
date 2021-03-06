//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResponse.h>

#import <Intents/INPayBillIntentResponseExport-Protocol.h>

@class INBillDetails, INDateComponentsRange, INPaymentAccount, INPaymentAmount, NSString;

@interface INPayBillIntentResponse : INIntentResponse <INPayBillIntentResponseExport>
{
}

+ (BOOL)_appLaunchRequestedFromCode:(long long)arg1;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3;
+ (BOOL)supportsSecureCoding;
- (void)setPropertiesByName:(id)arg1;
- (id)propertiesByName;
- (id)_dictionaryRepresentation;
@property(copy) NSString *transactionNote;
@property(copy) INDateComponentsRange *transactionScheduledDate;
@property(copy) INPaymentAmount *transactionAmount;
@property(copy) INBillDetails *billDetails;
@property(copy) INPaymentAccount *fromAccount;
- (long long)_codeWithName:(id)arg1;
- (long long)_intentResponseCode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) long long code;
- (id)initWithBackingStore:(id)arg1;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

