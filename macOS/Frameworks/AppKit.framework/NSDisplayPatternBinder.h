//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSBinder.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSDisplayPatternBinder : NSBinder
{
    NSString *_displayPattern;
}

+ (BOOL)isUsableWithObject:(id)arg1;
+ (id)_cellOrControlForObject:(id)arg1;
+ (id)bindingsForObject:(id)arg1;
+ (id)_enumeratedDisplayPatternTitleBindings:(unsigned long long)arg1;
+ (id)objectMechanismsRequiredForObject:(id)arg1;
+ (id)bindingCategory;
- (void)updateTableColumnDataCell:(id)arg1 forDisplayAtIndex:(unsigned long long)arg2;
- (void)updateOutlineColumnDataCell:(id)arg1 forDisplayAtIndexPath:(id)arg2;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void *)arg3;
- (void)_adjustObject:(id)arg1 mode:(struct __NSKeyValueCodingControllerModeType)arg2 triggerRedisplay:(BOOL)arg3;
- (void)_setDisplayValue:(id)arg1 object:(id)arg2 triggerRedisplay:(BOOL)arg3;
- (id)_patternForBinding:(id)arg1;
- (id)displayPattern;
- (void)setDisplayPattern:(id)arg1;
- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (BOOL)_handleObservingRefresh;
- (id)_optionsForBinding:(id)arg1 specifyOnlyIfDifferentFromDefault:(BOOL)arg2;
- (void)_setParameter:(id)arg1 forOption:(id)arg2 withBindingInfo:(id)arg3;
- (void)removeBinding:(id)arg1;
- (id)availableBindings;
- (Class)valueClassForBinding:(id)arg1;
- (BOOL)isBindingReadOnly:(id)arg1;
- (void)_copyDetailsFromBinder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_dealloc;
- (void)_init;

@end

