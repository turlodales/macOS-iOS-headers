//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Contacts/CNPropertyDescription.h>

#import "CNAbstractPropertyDescription.h"

@class NSString;

@interface CNExternalModificationTagDescription : CNPropertyDescription <CNAbstractPropertyDescription>
{
}

- (void)resetGuardianManagedValueOnContact:(id)arg1;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (id)CNValueForContact:(id)arg1;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (BOOL)isEqualForContact:(id)arg1 other:(id)arg2;
- (id)init;
- (id)coreDataKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

