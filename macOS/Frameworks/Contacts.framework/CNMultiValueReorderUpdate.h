//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Contacts/CNMultiValueUpdate.h>

@class NSOrderedSet;

__attribute__((visibility("hidden")))
@interface CNMultiValueReorderUpdate : CNMultiValueUpdate
{
    NSOrderedSet *_values;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSOrderedSet *values; // @synthesize values=_values;
- (id)description;
- (long long)compareIndexOfIdentifier:(id)arg1 toIndexOfIdentifier:(id)arg2;
- (void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2;
- (id)initWithValues:(id)arg1;
- (void)applyToABCDContact:(id)arg1 orderedABCDOwnedObjects:(id)arg2 propertyDescription:(id)arg3;

@end

