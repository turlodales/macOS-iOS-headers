//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Contacts/CNPolicy.h>

@interface CNPermissivePolicy : CNPolicy
{
}

+ (id)sharedPermissivePolicy;
- (BOOL)isContactPropertySupported:(id)arg1;
- (BOOL)shouldSetValue:(id)arg1 ofProperty:(id)arg2 onContact:(id)arg3 replacementValue:(id *)arg4;
- (BOOL)shouldRemoveContact:(id)arg1;
- (BOOL)shouldAddContact:(id)arg1;
- (id)unsupportedKeyPathsForContactProperty:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;
- (id)unsupportedAttributesForLableledContactProperty:(id)arg1;
- (id)supportedLabelsForContactProperty:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;
- (BOOL)isReadonly;

@end

