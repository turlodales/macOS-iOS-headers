//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSSelectionBinderPlugin.h>

__attribute__((visibility("hidden")))
@interface _NSMatrixPlugin : _NSSelectionBinderPlugin
{
    struct __matrixPluginFlags {
        unsigned int _allowsEmptySelection:1;
        unsigned int _testedAllowsEmptySelection:1;
        unsigned int _invertedAllowsEmptySelection:1;
        unsigned int _reservedMatrixPlugin:29;
    } _matrixPluginFlags;
}

+ (BOOL)isUsableWithObject:(id)arg1;
- (id)shownValueInObject:(id)arg1;
- (void)showValue:(id)arg1 inObject:(id)arg2;
- (void)populateObject:(id)arg1 withContent:(id)arg2 valueKey:(id)arg3 objectKey:(id)arg4 insertsNullPlaceholder:(BOOL)arg5;
- (unsigned long long)allowedContentBindingMask;
- (unsigned long long)allowedValueBindingMask;
- (Class)valueClass:(id)arg1 forBinding:(id)arg2;
- (Class)_valueClass:(id)arg1;
- (id)objectMechanismsRequired;
- (void)connectionWasEstablished:(id)arg1;
- (id)initWithBinder:(id)arg1 object:(id)arg2;

@end

