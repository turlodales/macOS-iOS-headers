//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDateInterval, NSNumber;

@protocol SPConnectionMaterial <NSObject>
@property(readonly, copy, nonatomic) NSNumber *secondaryIndex;
@property(readonly, copy, nonatomic) NSNumber *primaryIndex;
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property(readonly, copy, nonatomic) NSData *connectionToken;
@property(readonly, copy, nonatomic) NSData *address;
@end

