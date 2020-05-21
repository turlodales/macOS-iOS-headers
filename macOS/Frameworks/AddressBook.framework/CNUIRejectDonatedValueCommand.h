//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/CNUIUndoableCommand.h>

@class CNDonationStore, CNLabeledValue;

@interface CNUIRejectDonatedValueCommand : CNUIUndoableCommand
{
    CNDonationStore *_donationStore;
    CNLabeledValue *_donatedValueToReject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNLabeledValue *donatedValueToReject; // @synthesize donatedValueToReject=_donatedValueToReject;
@property(retain, nonatomic) CNDonationStore *donationStore; // @synthesize donationStore=_donationStore;
- (void)executeWithCNSaveRequest:(id)arg1;
- (id)initWithContactStore:(id)arg1 donationStore:(id)arg2 donatedValueToReject:(id)arg3 ignoresGuardianRestrictions:(BOOL)arg4;
- (id)initWithContactStore:(id)arg1 ignoresGuardianRestrictions:(BOOL)arg2;

@end

