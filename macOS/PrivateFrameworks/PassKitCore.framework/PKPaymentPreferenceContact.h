//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentPreference.h>

@class NSOrderedSet, NSString, PKPaymentOptionsRecents;

@interface PKPaymentPreferenceContact : PKPaymentPreference
{
    BOOL _showPhoneticName;
    NSOrderedSet *_contactKeys;
    NSString *_addNewTitle;
    NSString *_addExistingTitle;
    NSString *_editExistingTitle;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL showPhoneticName; // @synthesize showPhoneticName=_showPhoneticName;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *editExistingTitle; // @synthesize editExistingTitle=_editExistingTitle;
@property(copy, nonatomic) NSString *addExistingTitle; // @synthesize addExistingTitle=_addExistingTitle;
@property(copy, nonatomic) NSString *addNewTitle; // @synthesize addNewTitle=_addNewTitle;
@property(copy, nonatomic) NSOrderedSet *contactKeys; // @synthesize contactKeys=_contactKeys;
- (BOOL)preferenceObject:(id)arg1 representsContact:(id)arg2;
- (id)errorsForPreference:(id)arg1;
- (void)setErrors:(id)arg1 forPreference:(id)arg2;
- (long long)indexOfContact:(id)arg1;
- (void)mergeRecentsAndMeCard;
- (BOOL)supportsDeletion;
- (void)_removeDuplicates;
@property(copy, nonatomic) NSString *contactKey;
- (id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(BOOL)arg4;
@property(retain, nonatomic) PKPaymentOptionsRecents *paymentOptionsRecents;

@end

