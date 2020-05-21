//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSFastEnumeration.h"

@class NSMutableArray, NSObject<SpeedRangeDelegate>;

__attribute__((visibility("hidden")))
@interface SpeedRanges : NSObject <NSFastEnumeration, NSCopying>
{
    int _editCount;
    int _mediaDuration;
    NSObject<SpeedRangeDelegate> *_delegate;
    SpeedRanges *_ramped;
    NSMutableArray *_array;
    SpeedRanges *_old;
}

+ (id)objectFromPlist:(id)arg1;
+ (void)rangesFromSloMoAsset:(id)arg1 userAdjustedOnly:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) int mediaDuration; // @synthesize mediaDuration=_mediaDuration;
@property int editCount; // @synthesize editCount=_editCount;
@property(retain, nonatomic) SpeedRanges *old; // @synthesize old=_old;
@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
@property(retain, nonatomic) SpeedRanges *ramped; // @synthesize ramped=_ramped;
@property(nonatomic) __weak NSObject<SpeedRangeDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)testUberRamp;
- (void)testRamps;
- (id)generateRamps;
- (unsigned long long)count;
- (unsigned long long)indexOfObject:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (id)lastObject;
- (id)firstObject;
- (void)removeObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (void)addObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeShortRanges;
- (void)_removeBackToBackFreezes;
- (void)updateLinks;
- (void)didChange;
- (void)willChange;
- (id)plistRepresentation;
- (id)speedRangeAtClipTime:(int)arg1;
@property(readonly, nonatomic) BOOL isEdited;
- (int)mapClipTime:(int)arg1 fromMap:(id)arg2;
- (int)clipTimeForMediaTime:(int)arg1;
- (float)mediaTimeFloatForClipTime:(int)arg1;
- (int)mediaTimeForClipTime:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)setFromAdjustmentData:(id)arg1;
- (id)initWithDuration:(int)arg1;
- (id)init;

@end

