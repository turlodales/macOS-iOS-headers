//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface MSPBTimerContext : NSObject
{
    BOOL _isValid;
    NSDate *_date;
}

+ (id)contextWithDate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
- (id)init;

@end

