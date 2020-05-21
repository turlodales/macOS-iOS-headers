//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSValueBinderPlugin.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _NSDateValueBinderPlugin : _NSValueBinderPlugin
{
    NSDate *_originalMinValue;
    NSDate *_originalMaxValue;
}

- (id)objectMechanismsRequired;
- (id)editingColorAdjustableObject:(id)arg1;
- (id)shownValueInObject:(id)arg1;
- (void)showValue:(id)arg1 inObject:(id)arg2;
- (BOOL)updateCellOrControl:(id)arg1 forMaxValue:(id)arg2;
- (BOOL)updateCellOrControl:(id)arg1 forMinValue:(id)arg2;
- (void)storeMin:(BOOL)arg1 andMax:(BOOL)arg2 ofObject:(id)arg3;
- (BOOL)canSupportMinAndMaxForObject:(id)arg1;
- (BOOL)canIgnoreSettingMinAndMaxForObject:(id)arg1;
- (Class)_valueClass:(id)arg1;
- (void)dealloc;
- (id)initWithBinder:(id)arg1 object:(id)arg2;

@end

