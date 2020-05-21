//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLSHolidayCalendarEventRuleRequiredTraits, NSArray, NSString;

@interface CLSHolidayCalendarEventRule : NSObject
{
    BOOL _checkWeekends;
    NSString *_uuid;
    NSString *_name;
    NSArray *_dateRules;
    CLSHolidayCalendarEventRuleRequiredTraits *_requiredTraits;
    id <CLSHolidayCalendarEventDateRuleDelegate> _dateRuleDelegate;
    NSString *_localizedName;
    unsigned long long _category;
}

+ (id)localizedNameForName:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL checkWeekends; // @synthesize checkWeekends=_checkWeekends;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(nonatomic) __weak id <CLSHolidayCalendarEventDateRuleDelegate> dateRuleDelegate; // @synthesize dateRuleDelegate=_dateRuleDelegate;
@property(readonly, nonatomic) CLSHolidayCalendarEventRuleRequiredTraits *requiredTraits; // @synthesize requiredTraits=_requiredTraits;
@property(readonly, nonatomic) NSArray *dateRules; // @synthesize dateRules=_dateRules;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_isMatchingOnlyLocalDate:(id)arg1;
@property(readonly, nonatomic) BOOL allowSceneClassificationBasedEvaluation;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, nonatomic) BOOL isCelebration;
- (BOOL)evaluateOnlyTraits:(id)arg1;
- (id)_dateRuleForYear:(long long)arg1;
- (id)_datesFromWeekendWithStartDate:(id)arg1 withDuration:(double)arg2;
- (id)localDatesByEvaluatingRuleForYear:(long long)arg1;
- (BOOL)evaluateWithLocalDate:(id)arg1 traits:(id)arg2;
- (id)initWithEventDescription:(id)arg1;

@end

