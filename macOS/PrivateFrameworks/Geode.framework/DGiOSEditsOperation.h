//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Geode/DGOperation.h>

@class NSArray, NSNumber, NSString;

@interface DGiOSEditsOperation : DGOperation
{
    NSNumber *_inputStrength;
    NSNumber *_inputWarmth;
    NSNumber *_inputOrigI;
    NSNumber *_inputOrigQ;
    NSNumber *_inputShadows;
    NSNumber *_inputHighlights;
    NSNumber *_inputVibrancy;
    NSArray *_inputCurvePoints;
}

+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (id)_stringsTableName;
- (void).cxx_destruct;
@property(copy) NSArray *inputCurvePoints; // @synthesize inputCurvePoints=_inputCurvePoints;
@property(copy) NSNumber *inputVibrancy; // @synthesize inputVibrancy=_inputVibrancy;
@property(copy) NSNumber *inputHighlights; // @synthesize inputHighlights=_inputHighlights;
@property(copy) NSNumber *inputShadows; // @synthesize inputShadows=_inputShadows;
@property(copy) NSNumber *inputOrigQ; // @synthesize inputOrigQ=_inputOrigQ;
@property(copy) NSNumber *inputOrigI; // @synthesize inputOrigI=_inputOrigI;
@property(copy) NSNumber *inputWarmth; // @synthesize inputWarmth=_inputWarmth;
@property(copy) NSNumber *inputStrength; // @synthesize inputStrength=_inputStrength;
@property(readonly) NSString *editSummary;
- (BOOL)allowDough;
- (id)initWithOperation:(id)arg1;
- (id)init;

@end

