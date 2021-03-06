//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, _CPError;

@protocol _CPErrorFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _CPError *underlyingError;
@property(retain, nonatomic) _CPError *error;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

