//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CHRecognitionSessionResult, NSArray, NSDictionary;

@interface CHStrokeGroupingManager : NSObject
{
    BOOL _isInlineContinuousMode;
    id <CHStrokeProvider> _strokeProvider;
    CHRecognitionSessionResult *_sessionLastResult;
    NSArray *_locales;
    NSDictionary *_groupingStrategiesByIdentifier;
}

@property(readonly, retain, nonatomic) NSDictionary *groupingStrategiesByIdentifier; // @synthesize groupingStrategiesByIdentifier=_groupingStrategiesByIdentifier;
@property(readonly, nonatomic) BOOL isInlineContinuousMode; // @synthesize isInlineContinuousMode=_isInlineContinuousMode;
@property(readonly, retain, nonatomic) NSArray *locales; // @synthesize locales=_locales;
@property(readonly, retain, nonatomic) CHRecognitionSessionResult *sessionLastResult; // @synthesize sessionLastResult=_sessionLastResult;
@property(readonly, retain, nonatomic) id <CHStrokeProvider> strokeProvider; // @synthesize strokeProvider=_strokeProvider;
- (id)strokesForIdentifiers:(id)arg1;
- (id)_simpleDrawingForStrokeGroup:(id)arg1 originalDrawing:(id *)arg2 orderedStrokeIDs:(id *)arg3;
- (id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(struct CGVector)arg2 originalDrawing:(id *)arg3 orderedStrokesIDs:(id *)arg4 rescalingFactor:(double *)arg5;
- (id)_greedyCombinationOfGroupingResults:(id)arg1 stableStrokeIdentifiers:(id)arg2 withCancellationBlock:(CDUnknownBlockType)arg3;
- (id)updatedGroupingResultByAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 orderedStrokeIdentifiers:(id)arg3 strokeClassificationResult:(id)arg4 cancellationBlock:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithStrokeProvider:(id)arg1 sessionLastResult:(id)arg2 locales:(id)arg3 isInlineContinuousMode:(BOOL)arg4 inlineContinuousModeTargets:(id)arg5;

@end

