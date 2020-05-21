//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import "PXMutableLabelTypesetter.h"

@class NSArray, NSAttributedString;

@interface PXLabelTypesetter : PXObservable <PXMutableLabelTypesetter>
{
    BOOL _adjustsFontSizeToFitWidth;
    BOOL _allowTruncation;
    struct CGContext *_context;
    NSAttributedString *_attributedString;
    long long _typesettingMode;
    unsigned long long _maximumNumberOfLines;
    double _minimumScaleFactor;
    double _minimumTruncatedScaleFactor;
    NSArray *_lines;
    struct CGRect _bounds;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *lines; // @synthesize lines=_lines;
@property(nonatomic) double minimumTruncatedScaleFactor; // @synthesize minimumTruncatedScaleFactor=_minimumTruncatedScaleFactor;
@property(nonatomic) BOOL allowTruncation; // @synthesize allowTruncation=_allowTruncation;
@property(nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(nonatomic) BOOL adjustsFontSizeToFitWidth; // @synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth;
@property(nonatomic) unsigned long long maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property(nonatomic) long long typesettingMode; // @synthesize typesettingMode=_typesettingMode;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) struct CGContext *context; // @synthesize context=_context;
- (void)_setLines:(id)arg1;
- (void)didPerformChanges;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (BOOL)_allowTextOverlapForFont:(id)arg1;
- (unsigned long long)_adjustCutoffLocation:(unsigned long long)arg1 forLineStartingAtIndex:(unsigned long long)arg2;
- (void)_updateLines;
- (void)shiftLinesVerticallyToAvoidOverlap:(id)arg1 referenceFont:(id)arg2;
- (id)initWithContext:(struct CGContext *)arg1;
- (id)init;

@end

