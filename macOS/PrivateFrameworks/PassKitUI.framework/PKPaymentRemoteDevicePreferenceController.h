//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentPreferenceController.h>

@class NSMutableDictionary, PKPaymentPreferenceContact;

@interface PKPaymentRemoteDevicePreferenceController : PKPaymentPreferenceController
{
    PKPaymentPreferenceContact *_billingPreference;
    NSMutableDictionary *_instrumentToCardEntryMap;
    NSMutableDictionary *_instrumentToAcceptedPaymentApplicationsMap;
    NSMutableDictionary *_instrumentToUnavailablePaymentApplicationsMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *instrumentToUnavailablePaymentApplicationsMap; // @synthesize instrumentToUnavailablePaymentApplicationsMap=_instrumentToUnavailablePaymentApplicationsMap;
@property(retain, nonatomic) NSMutableDictionary *instrumentToAcceptedPaymentApplicationsMap; // @synthesize instrumentToAcceptedPaymentApplicationsMap=_instrumentToAcceptedPaymentApplicationsMap;
@property(retain, nonatomic) NSMutableDictionary *instrumentToCardEntryMap; // @synthesize instrumentToCardEntryMap=_instrumentToCardEntryMap;
@property(retain, nonatomic) PKPaymentPreferenceContact *billingPreference; // @synthesize billingPreference=_billingPreference;
- (BOOL)_shouldDisplayPaymentApplicationWithAcceptedApplicationsCount:(long long)arg1 unavailableApplicationsCount:(long long)arg2;
- (id)_unavailablePaymentApplicationsForRemoteInstrument:(id)arg1;
- (id)_acceptedPaymentApplicationsForRemoteInstrument:(id)arg1;
- (BOOL)canSelectPreference:(id)arg1 preferenceIndex:(unsigned long long)arg2 subItemIndex:(unsigned long long)arg3;
- (BOOL)_isPaymentPassApplicationStateDeactivated:(long long)arg1;
- (id)_unavailableReasonForInstrument:(id)arg1;
- (id)_cardPreferenceForAcceptedInstrumentsInRemoteDevice:(id)arg1;
- (id)_cardPreferenceForAllUnavailableInstruments;
- (void)_setupPreferences;
- (id)cardEntryForRemotePaymentInstrument:(id)arg1;
- (BOOL)shouldEnableSubItemInPreference:(id)arg1 preferenceIndex:(long long)arg2 subItemIndex:(long long)arg3;
- (id)titleForSubItemInPreference:(id)arg1 preferenceIndex:(long long)arg2 subItemIndex:(long long)arg3;
- (long long)numberOfSubItemInPreference:(id)arg1 preferenceIndex:(long long)arg2;
- (long long)numberOfMenuItemsInSection:(long long)arg1;
- (void)updatePreferences;
- (void)setModel:(id)arg1;

@end

