//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol _PARSuggestion <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) float score;
@property(copy, nonatomic) NSString *topic;
@property(nonatomic) int type;
@property(copy, nonatomic) NSString *suggestion;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

