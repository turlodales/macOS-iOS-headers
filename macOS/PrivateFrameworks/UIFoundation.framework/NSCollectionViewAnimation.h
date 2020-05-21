//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCollectionViewLayoutAttributes, NSMutableArray, NSView;

__attribute__((visibility("hidden")))
@interface NSCollectionViewAnimation : NSObject
{
    id <_NSCollectionViewItem> _item;
    NSView *_view;
    NSCollectionViewLayoutAttributes *_finalLayoutAttributes;
    double _startFraction;
    double _endFraction;
    long long _viewType;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_startupHandlers;
    CDUnknownBlockType _animationBlock;
    struct {
        unsigned int animateFromCurrentPosition:1;
        unsigned int deleteAfterAnimation:1;
        unsigned int rasterizeAfterAnimation:1;
        unsigned int resetRasterizationAfterAnimation:1;
        unsigned int updateZIndexAfterAnimation:1;
    } _collectionViewAnimationFlags;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double endFraction; // @synthesize endFraction=_endFraction;
@property(readonly, nonatomic) double startFraction; // @synthesize startFraction=_startFraction;
@property(readonly, nonatomic) NSCollectionViewLayoutAttributes *finalLayoutAttributes; // @synthesize finalLayoutAttributes=_finalLayoutAttributes;
@property(readonly, nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(readonly, nonatomic) NSView *view; // @synthesize view=_view;
@property(readonly, nonatomic) id <_NSCollectionViewItem> item; // @synthesize item=_item;
- (void)addStartupHandler:(CDUnknownBlockType)arg1;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startFromCollectionViewCore:(id)arg1;
@property(nonatomic) BOOL resetRasterizationAfterAnimation;
@property(nonatomic) BOOL rasterizeAfterAnimation;
@property(readonly, nonatomic) BOOL deleteAfterAnimation;
@property(readonly, nonatomic) BOOL animateFromCurrentPosition;
- (id)description;
- (id)initWithView:(id)arg1 viewType:(long long)arg2 finalLayoutAttributes:(id)arg3 startFraction:(double)arg4 endFraction:(double)arg5 animateFromCurrentPostion:(BOOL)arg6 deleteAfterAnimation:(BOOL)arg7 customAnimations:(CDUnknownBlockType)arg8;
- (void)setUpdateZIndexAfterAnimation:(BOOL)arg1;
@property(readonly, nonatomic) BOOL updateZIndexAfterAnimation;

@end

