//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVVideoCompositionInstruction.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class AVVideoCompositionInstructionInternal, NSArray, NSString;

@interface AVVideoCompositionInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, AVVideoCompositionInstruction>
{
    AVVideoCompositionInstructionInternal *_instruction;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
@property(readonly, copy) NSString *description;
- (void)_setValuesFromDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setEnablePostProcessing:(BOOL)arg1;
@property(readonly, nonatomic) BOOL enablePostProcessing;
- (void)setLayerInstructions:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *layerInstructions;
- (void)setBackgroundColor:(struct CGColor *)arg1;
@property(readonly, retain, nonatomic) struct CGColor *backgroundColor;
- (void)setTimeRange:(CDStruct_e83c9415)arg1;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
@property(readonly, nonatomic) BOOL containsTweening;
@property(readonly, nonatomic) NSArray *requiredSourceTrackIDs;
@property(readonly, nonatomic) int passthroughTrackID;
- (void)finalize;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

