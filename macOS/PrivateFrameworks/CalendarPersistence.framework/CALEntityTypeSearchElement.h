//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CALSearchElement.h>

@class CALTimeRange;

@interface CALEntityTypeSearchElement : CALSearchElement
{
    int _type;
    CALTimeRange *_range;
}

+ (id)searchWithEntityType:(int)arg1 withinTimeRange:(id)arg2;
+ (id)searchWithEntityType:(int)arg1;
+ (id)allEntitiesSearchElement;
- (void).cxx_destruct;
- (BOOL)matchesEntity:(id)arg1;
- (void)setTimeRange:(id)arg1;
- (id)timeRange;
- (int)entityType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEntityType:(int)arg1 withinTimeRange:(id)arg2;

@end

