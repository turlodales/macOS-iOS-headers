//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AnnotationKit/AKAnnotation.h>

#import "AKFilledAnnotationProtocol.h"
#import "AKRectangularAnnotationProtocol.h"

@class NSColor, NSString;

@interface AKBorderMaskAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKFilledAnnotationProtocol>
{
    NSColor *_fillColor;
    struct CGRect _rectangle;
}

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
- (void).cxx_destruct;
@property(retain) NSColor *fillColor; // @synthesize fillColor=_fillColor;
@property struct CGRect rectangle; // @synthesize rectangle=_rectangle;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)translateBy:(struct CGPoint)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;
- (void)adjustModelToCompensateForOriginalExif;
- (struct CGRect)hitTestBounds;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

