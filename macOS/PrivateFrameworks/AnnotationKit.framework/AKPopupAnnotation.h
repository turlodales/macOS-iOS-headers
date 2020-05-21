//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AnnotationKit/AKAnnotation.h>

#import "AKChildAnnotationProtocol.h"
#import "AKRectangularAnnotationProtocol.h"

@class NSString;

@interface AKPopupAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKChildAnnotationProtocol>
{
    unsigned long long _visualStyle;
    AKAnnotation *_parentAnnotation;
    NSString *_contents;
    struct CGRect _rectangle;
    struct CGRect _openRectangle;
}

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingHitTestBounds;
- (void).cxx_destruct;
@property(copy) NSString *contents; // @synthesize contents=_contents;
@property __weak AKAnnotation *parentAnnotation; // @synthesize parentAnnotation=_parentAnnotation;
@property struct CGRect openRectangle; // @synthesize openRectangle=_openRectangle;
@property struct CGRect rectangle; // @synthesize rectangle=_rectangle;
@property unsigned long long visualStyle; // @synthesize visualStyle=_visualStyle;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)translateBy:(struct CGPoint)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;
- (struct CGRect)hitTestBounds;
- (id)displayName;
- (id)keysForValuesToObserveForUndo;
- (id)keysForValuesToObserveForAdornments;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

