//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBDataString, _INPBIntentMetadata;

@protocol _INPBSetDefrosterSettingsInCarIntent <NSObject>
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) BOOL hasEnable;
@property(nonatomic) BOOL enable;
@property(nonatomic) BOOL hasDefroster;
@property(nonatomic) int defroster;
@property(readonly, nonatomic) BOOL hasCarName;
@property(retain, nonatomic) _INPBDataString *carName;
- (int)StringAsDefroster:(NSString *)arg1;
- (NSString *)defrosterAsString:(int)arg1;
@end

