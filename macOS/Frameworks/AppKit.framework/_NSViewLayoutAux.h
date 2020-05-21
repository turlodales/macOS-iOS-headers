//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSISEngine, NSISVariable, NSLayoutDimension, NSLayoutGuide, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSMutableArray, NSNumber, NSObservation, _NSViewLayoutInvalidator;

__attribute__((visibility("hidden")))
@interface _NSViewLayoutAux : NSObject
{
    NSISEngine *_engine;
    NSISVariable *_minXVariable;
    NSISVariable *_minYVariable;
    NSISVariable *_widthVariable;
    NSISVariable *_heightVariable;
    NSObservation *_minXVariableObservation;
    NSObservation *_minYVariableObservation;
    NSObservation *_widthVariableObservation;
    NSObservation *_heightVariableObservation;
    NSArray *_internalConstraints;
    NSArray *_hostingPreferredSizeConstraints;
    NSArray *_constraintsExceptingSubviewAutoresizingConstraints;
    NSMutableArray *_declaredConstraints;
    NSMutableArray *_allActiveRuleNodes;
    NSMutableArray *_childRuleNodes;
    NSMutableArray *_layoutGuides;
    struct CGSize _oldSizeDuringLayoutDescent;
    NSLayoutXAxisAnchor *_leadingAnchor;
    NSLayoutXAxisAnchor *_trailingAnchor;
    NSLayoutXAxisAnchor *_leftAnchor;
    NSLayoutXAxisAnchor *_rightAnchor;
    NSLayoutYAxisAnchor *_topAnchor;
    NSLayoutYAxisAnchor *_bottomAnchor;
    NSLayoutDimension *_widthAnchor;
    NSLayoutDimension *_heightAnchor;
    NSLayoutXAxisAnchor *_centerXAnchor;
    NSLayoutYAxisAnchor *_centerYAnchor;
    NSLayoutYAxisAnchor *_firstBaselineAnchor;
    NSLayoutYAxisAnchor *_lastBaselineAnchor;
    NSLayoutGuide *_safeAreaLayoutGuide;
    struct CGPoint _cachedRootOffset;
    unsigned long long _cachedOffsetChangeCount;
    NSISEngine *_cachedRootOffsetEngine;
    _NSViewLayoutInvalidator *_layoutInvalidator;
    unsigned long long _piercingToken;
    NSNumber *_layoutEngineWidth;
    double _firstPassWidth;
    unsigned char _updateConstraintsPassCounter;
    unsigned char _updateConstraintsInProgressCounter;
    struct {
        unsigned int _potentiallyHasDanglyConstraints:1;
        unsigned int _mightBePiercedByConstraint:1;
        unsigned int _doesNotTranslateAutoresizingMaskIntoConstraints:1;
        unsigned int _wantsToHostAutolayoutEngine:1;
        unsigned int _hostsAutolayoutEngine:1;
        unsigned int _resizingFromLayout:1;
        unsigned int _recursionGuard:1;
        unsigned int _baselineOffsetMayBeReferenced:1;
        unsigned int _constraintsReferencingBaselineOffsetNeedUpdating:1;
        unsigned int _onlyNeedsUpdateConstraintsBecauseDeclaredConstraintRemoved:1;
        unsigned int _preferredSizeConstraintsNeedUpdating:1;
        unsigned int _allowsEngineHostPreferredSizeConstraints:1;
        unsigned int _viewWasAdjustedToRetinaResolution:1;
        unsigned int _indexOfFinishedConstraintsUpdatePass:2;
    } _flags;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

