//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASettingEntity.h>

@class NSNumber;

@interface SASettingBooleanEntity : SASettingEntity
{
}

+ (id)booleanEntityWithValue:(BOOL)arg1;
+ (id)booleanEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)booleanEntity;
@property(nonatomic) BOOL value;
@property(copy, nonatomic) NSNumber *previousValue;
- (id)initWithValue:(BOOL)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

