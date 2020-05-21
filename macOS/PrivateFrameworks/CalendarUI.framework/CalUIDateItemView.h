//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrubberItemView.h"

@class CalDateRange, NSDate, NSTextField;

@interface CalUIDateItemView : NSScrubberItemView
{
    BOOL _containsToday;
    id <CalUIDateItemViewDelegate> _delegate;
    unsigned long long _unit;
    NSDate *_date;
    CalDateRange *_dateRange;
    NSTextField *_dateText;
}

+ (id)dateRangeForDate:(id)arg1 unit:(unsigned long long)arg2 delegate:(id)arg3;
+ (id)titleForDelegate:(id)arg1 date:(id)arg2 unit:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(readonly) NSTextField *dateText; // @synthesize dateText=_dateText;
@property(readonly) BOOL containsToday; // @synthesize containsToday=_containsToday;
@property(readonly) CalDateRange *dateRange; // @synthesize dateRange=_dateRange;
@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) unsigned long long unit; // @synthesize unit=_unit;
@property(readonly) __weak id <CalUIDateItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_axTodayDescriptionForUnit:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1 date:(id)arg2 unit:(unsigned long long)arg3;

@end

