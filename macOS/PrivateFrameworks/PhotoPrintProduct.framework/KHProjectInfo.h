//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KHThemeProviderConfig, NSArray, NSDictionary, NSMutableArray, NSString;

@interface KHProjectInfo : NSObject
{
    NSMutableArray *_photoInfos;
    NSMutableArray *_hydrationOperations;
    long long _type;
    NSString *_productCode;
    NSDictionary *_options;
    KHThemeProviderConfig *_themeProviderConfig;
    NSString *_name;
    long long _calendarStartingMonthIndex;
    long long _calendarStartingYear;
    long long _calendarNumberOfMonths;
}

- (void).cxx_destruct;
@property(nonatomic) long long calendarNumberOfMonths; // @synthesize calendarNumberOfMonths=_calendarNumberOfMonths;
@property(nonatomic) long long calendarStartingYear; // @synthesize calendarStartingYear=_calendarStartingYear;
@property(nonatomic) long long calendarStartingMonthIndex; // @synthesize calendarStartingMonthIndex=_calendarStartingMonthIndex;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) KHThemeProviderConfig *themeProviderConfig; // @synthesize themeProviderConfig=_themeProviderConfig;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *productCode; // @synthesize productCode=_productCode;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)clearHydrationOperations;
- (void)addHydrationOperation:(id)arg1;
@property(readonly, nonatomic) NSArray *hydrationOperations;
- (void)addPhotoInfo:(id)arg1;
@property(readonly, nonatomic) NSArray *photoInfos;
- (id)initWithType:(long long)arg1;

@end

