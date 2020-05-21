//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface PXPlacesMapLayoutDiffer : NSObject
{
    NSMutableArray *_changes;
    id <PXPlacesMapLayoutResult> _sourceLayoutResult;
    id <PXPlacesMapLayoutResult> _targetLayoutResult;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PXPlacesMapLayoutResult> targetLayoutResult; // @synthesize targetLayoutResult=_targetLayoutResult;
@property(readonly, nonatomic) id <PXPlacesMapLayoutResult> sourceLayoutResult; // @synthesize sourceLayoutResult=_sourceLayoutResult;
- (void)_relateSourceLayoutItem:(id)arg1 withTargetLayoutItem:(id)arg2;
- (void)_removeSourceLayoutItem:(id)arg1;
- (void)_addTargetLayoutItem:(id)arg1;
- (void)_computeChanges;
- (id)computeChanges;
- (id)initWithSourceLayoutResult:(id)arg1 targetLayoutResult:(id)arg2;

@end

