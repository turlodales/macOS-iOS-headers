//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

#import "EFSQLBindable.h"
#import "EFSQLExpressable.h"
#import "EFSQLNumericValueExpressable.h"

@class EFSQLBinding, NSString;

@interface NSDate (EmailFoundationAdditions) <EFSQLBindable, EFSQLExpressable, EFSQLNumericValueExpressable>
+ (id)_ef_gregorianCalendarForTimeZone:(id)arg1;
+ (id)_ef_morningDateComponents;
+ (id)_ef_nightDateComponents;
+ (id)ef_nextWeekMorning;
+ (id)ef_tomorrowMorning;
+ (id)_ef_tonight:(id)arg1;
+ (id)ef_tonight;
+ (BOOL)ef_isPastTonight;
- (double)ef_timeIntervalSinceDate:(id)arg1;
- (BOOL)ef_isLaterThanDate:(id)arg1;
- (BOOL)ef_isEarlierThanDate:(id)arg1;
@property(readonly, nonatomic) EFSQLBinding *ef_SQLBinding;
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

