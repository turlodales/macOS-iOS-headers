//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (NSComboBoxCellDataSource)
- (unsigned long long)comboBoxCell:(id)arg1 indexOfItemWithStringValue:(id)arg2;
- (id)comboBoxCell:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBoxCell:(id)arg1;
- (void)replaceRangeAtIndex:(unsigned long long)arg1 withRange:(struct _NSRange)arg2;
- (void)removeLastRange;
- (void)addRange:(struct _NSRange)arg1;
- (void)removeRangeAtIndex:(unsigned long long)arg1;
- (void)insertRange:(struct _NSRange)arg1 atIndex:(unsigned long long)arg2;
@end

