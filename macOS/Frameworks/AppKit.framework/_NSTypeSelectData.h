//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSTypeSelectPanel, NSView;

__attribute__((visibility("hidden")))
@interface _NSTypeSelectData : NSObject
{
    NSString *_currentSearch;
    long long _currentSearchRow;
    long long _currentSearchCol;
    long long _initialSearchRow;
    long long _totalRows;
    NSView *_view;
    NSTypeSelectPanel *_typeSelectPanel;
    unsigned int _foundMatch:1;
    unsigned int _reserved:31;
}

+ (BOOL)ignoreTypos;
- (BOOL)foundMatch;
- (void)setFoundMatch:(BOOL)arg1;
- (void)_typeSelectEndCurrentSearch;
- (void)cancelScheduledEndOfSearch;
- (void)scheduleEndOfSearch;
- (long long)initialSearchRow;
- (void)setCurrentSearchCol:(long long)arg1;
- (long long)currentSearchCol;
- (void)setCurrentSearchRow:(long long)arg1;
- (long long)currentSearchRow;
- (id)nextSearchStringForNewValue:(id)arg1;
- (void)setCurrentSearchRect:(struct CGRect)arg1;
- (void)_orderFrontTypeSelectPanel;
- (void)setCurrentSearch:(id)arg1;
- (id)currentSearch;
- (void)clearView;
- (void)dealloc;
- (id)initWithInitialSearchRow:(long long)arg1 totalRows:(long long)arg2 forView:(id)arg3;
- (void)_resetCurrentSearchRow;

@end

