//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface CDAttributeOccurrence : NSObject
{
    NSDate *_date;
    NSObject *_value;
}

+ (id)attributeOccurrenceWithValue:(id)arg1 date:(id)arg2;
- (void).cxx_destruct;
@property(readonly) NSObject *value; // @synthesize value=_value;
@property(readonly) NSDate *date; // @synthesize date=_date;
- (id)initWithValue:(id)arg1 date:(id)arg2;

@end

