//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject
{
    NSDate *_date;
}

+ (BOOL)prekeyShouldBeRolled:(id)arg1;
+ (BOOL)prekeyCanBeDeleted:(id)arg1;
+ (BOOL)validateFetchedPrekeyTimestamp:(double)arg1 forEvaluationType:(unsigned long long)arg2;
+ (id)debugDescriptionForAction:(unsigned long long)arg1;
+ (double)timeIntervalAllowedForAction:(unsigned long long)arg1;
+ (id)oldestDateAllowedToSendTo;
+ (void)setNowDate:(id)arg1;
+ (id)nowDate;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain) NSDate *date; // @synthesize date=_date;

@end

