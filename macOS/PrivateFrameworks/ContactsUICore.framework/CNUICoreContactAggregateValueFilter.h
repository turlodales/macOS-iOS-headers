//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNUICoreContactPropertyValueFilter.h"

@class NSArray, NSString;

@interface CNUICoreContactAggregateValueFilter : NSObject <CNUICoreContactPropertyValueFilter>
{
    NSArray *_valueFilters;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *valueFilters; // @synthesize valueFilters=_valueFilters;
@property(readonly, copy) NSString *description;
- (void)filterPropertyValuesFromContact:(id)arg1;
- (id)contactByFilteringOutPropertyValueOfContact:(id)arg1;
- (id)initWithValueFilters:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

