//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSKeyValueProperty.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueUnnestedProperty : NSKeyValueProperty
{
    NSArray *_affectingProperties;
    BOOL _cachedIsaForAutonotifyingIsValid;
    Class _cachedIsaForAutonotifying;
}

- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)arg1;
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(CDStruct_a70f6672)arg5;
- (BOOL)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(CDStruct_a70f6672 *)arg5;
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(BOOL)arg3;
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(BOOL)arg3;
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;
- (id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(char *)arg2;
- (id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(char *)arg2;
- (Class)isaForAutonotifying;
- (Class)_isaForAutonotifying;
- (void)_addDependentValueKey:(id)arg1;
- (void)_givenPropertiesBeingInitialized:(struct __CFSet *)arg1 getAffectingProperties:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)_initWithContainerClass:(id)arg1 key:(id)arg2 propertiesBeingInitialized:(struct __CFSet *)arg3;

@end

