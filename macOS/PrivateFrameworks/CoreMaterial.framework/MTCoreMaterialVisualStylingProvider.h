//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPointerArray, NSString;

@interface MTCoreMaterialVisualStylingProvider : NSObject
{
    id <MTVisualStyleSetProviding> _visualStyleSet;
    NSPointerArray *_observers;
}

+ (BOOL)canGenerateVisualStyleSetFromRecipe:(id)arg1;
+ (id)coreMaterialVisualStylingProviderForStyleSetNamed:(id)arg1 inBundle:(id)arg2;
+ (id)coreMaterialVisualStylingProviderForRecipe:(id)arg1 andCategory:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic, getter=_observers) NSPointerArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic, getter=_visualStyleSet, setter=_setVisualStyleSet:) id <MTVisualStyleSetProviding> visualStyleSet; // @synthesize visualStyleSet=_visualStyleSet;
- (id)description;
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)visualStylingForStyle:(id)arg1;
- (void)updateVisualStyleSetGeneratedFromRecipe:(id)arg1;
- (void)updateVisualStyleSetFromRecipe:(id)arg1 andCategory:(id)arg2;
@property(readonly, copy, nonatomic) NSString *visualStyleSetName;

@end

