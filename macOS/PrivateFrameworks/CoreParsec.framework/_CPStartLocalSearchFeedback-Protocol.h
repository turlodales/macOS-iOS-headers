//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol _CPStartLocalSearchFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int indexType;
@property(nonatomic) unsigned long long queryId;
@property(nonatomic) int triggerEvent;
@property(copy, nonatomic) NSString *uuid;
@property(copy, nonatomic) NSString *input;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

