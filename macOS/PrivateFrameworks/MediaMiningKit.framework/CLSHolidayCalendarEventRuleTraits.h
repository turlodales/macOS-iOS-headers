//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface CLSHolidayCalendarEventRuleTraits : NSObject
{
    BOOL _containsMePerson;
    unsigned long long _numberOfPeople;
    unsigned long long _peopleTrait;
    unsigned long long _locationTrait;
    NSSet *_categories;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *categories; // @synthesize categories=_categories;
@property(nonatomic) unsigned long long locationTrait; // @synthesize locationTrait=_locationTrait;
@property(nonatomic) unsigned long long peopleTrait; // @synthesize peopleTrait=_peopleTrait;
@property(nonatomic) unsigned long long numberOfPeople; // @synthesize numberOfPeople=_numberOfPeople;
@property(nonatomic) BOOL containsMePerson; // @synthesize containsMePerson=_containsMePerson;
- (id)description;
- (id)init;

@end

