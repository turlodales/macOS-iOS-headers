//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol _INPBRecurrenceValue <NSObject>
@property(nonatomic) BOOL hasOrdinal;
@property(nonatomic) long long ordinal;
@property(nonatomic) BOOL hasInterval;
@property(nonatomic) unsigned long long interval;
@property(nonatomic) BOOL hasFrequency;
@property(nonatomic) int frequency;
- (int)StringAsFrequency:(NSString *)arg1;
- (NSString *)frequencyAsString:(int)arg1;
@end

