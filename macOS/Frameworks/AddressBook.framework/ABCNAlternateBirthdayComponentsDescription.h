//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCNPropertyDescription.h>

#import "ABCNAbstractPropertyDescription.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ABCNAlternateBirthdayComponentsDescription : ABCNPropertyDescription <ABCNAbstractPropertyDescription>
{
}

- (BOOL)isValue:(id)arg1 preferredToEquivalentValue:(id)arg2;
- (BOOL)isValue:(id)arg1 equivalentToValue:(id)arg2;
- (void)setValue:(id)arg1 onCoreDataContact:(id)arg2;
- (id)valueFromCoreDataContact:(id)arg1;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)copyFromContact:(id)arg1 to:(id)arg2;
- (BOOL)isEqualForContact:(id)arg1 other:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

