//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSString, PDIterate;

__attribute__((visibility("hidden")))
@interface PDTimeNode : NSObject
{
    NSMutableArray *mStartTimeConditions;
    NSMutableArray *mEndTimeConditions;
    NSMutableArray *mChildTimeNodeList;
    NSMutableArray *mSubTimeNodeList;
    PDIterate *mIterate;
    int mType;
    int mAnimationPresetClass;
    BOOL mHasPresetId;
    int mPresetId;
    BOOL mHasPresetSubType;
    int mPresetSubType;
    BOOL mHasRepeatCount;
    int mRepeatCount;
    BOOL mHasRepeatDuration;
    int mRepeatDuration;
    int mRestartType;
    BOOL mHasDuration;
    double mDuration;
    BOOL mHasSpeed;
    double mSpeed;
    BOOL mHasAcceleration;
    double mAcceleration;
    BOOL mHasDeceleration;
    double mDeceleration;
    BOOL mHasDisplay;
    BOOL mDisplay;
    BOOL mHasFillType;
    int mFillType;
    NSString *mGroupId;
    NSDictionary *attributeMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *attributeMap; // @synthesize attributeMap;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setDisplay:(BOOL)arg1;
- (BOOL)display;
- (BOOL)hasDisplay;
- (void)setGroupIdValue:(int)arg1;
- (void)setGroupId:(id)arg1;
- (id)groupId;
- (void)setFillType:(int)arg1;
- (int)fillType;
- (BOOL)hasFillType;
- (void)setDeceleration:(double)arg1;
- (double)deceleration;
- (BOOL)hasDeceleration;
- (void)setAcceleration:(double)arg1;
- (double)acceleration;
- (BOOL)hasAcceleration;
- (void)setSpeed:(double)arg1;
- (double)speed;
- (BOOL)hasSpeed;
- (void)setDuration:(double)arg1;
- (double)duration;
- (BOOL)hasDuration;
- (void)setRestartType:(int)arg1;
- (int)restartType;
- (BOOL)hasRestartType;
- (void)setRepeatDuration:(int)arg1;
- (int)repeatDuration;
- (BOOL)hasRepeatDuration;
- (void)setRepeatCount:(int)arg1;
- (int)repeatCount;
- (BOOL)hasRepeatCount;
- (void)setPresetId:(int)arg1;
- (int)presetId;
- (BOOL)hasPresetId;
- (void)setPresetSubType:(int)arg1;
- (int)presetSubType;
- (BOOL)hasPresetSubType;
- (void)setAnimationPresetClass:(int)arg1;
- (int)animationPresetClass;
- (BOOL)hasPresetClass;
- (void)setType:(int)arg1;
- (int)type;
- (BOOL)hasType;
- (void)setIterate:(id)arg1;
- (id)iterate;
- (void)setSubTimeNodeList:(id)arg1;
- (id)subTimeNodeList;
- (void)setChildTimeNodeList:(id)arg1;
- (id)childTimeNodeList;
- (void)setEndTimeConditions:(id)arg1;
- (id)endTimeConditions;
- (void)setStartTimeConditions:(id)arg1;
- (id)startTimeConditions;
- (id)init;
- (long long)writeRepeatCount;
- (long long)writeDuration;

@end

