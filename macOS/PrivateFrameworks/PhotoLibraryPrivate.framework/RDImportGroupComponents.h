//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RDImportGroupComponents : NSObject
{
    NSString *_year;
    NSString *_month;
    NSString *_day;
    NSString *_time;
}

+ (id)normalizeDate:(id)arg1;
@property(readonly) NSString *time; // @synthesize time=_time;
@property(readonly) NSString *day; // @synthesize day=_day;
@property(readonly) NSString *month; // @synthesize month=_month;
@property(readonly) NSString *year; // @synthesize year=_year;
- (void).cxx_destruct;
- (id)initWithDate:(id)arg1 calendar:(id)arg2;

@end

