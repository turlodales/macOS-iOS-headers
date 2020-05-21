//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PXCompositeEditorialLayoutTemplate : NSObject
{
    struct CGRect *_rects;
    double *_rectWeights;
    BOOL _shouldIgnoreWeights;
    long long _identifier;
    long long _numberOfRects;
    long long _numberOfColumns;
    double _tileAspectRatio;
}

@property(readonly, nonatomic) double tileAspectRatio; // @synthesize tileAspectRatio=_tileAspectRatio;
@property(readonly, nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(readonly, nonatomic) long long numberOfRects; // @synthesize numberOfRects=_numberOfRects;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (double)costForFittingLayoutItemInputs:(id)arg1 inRange:(struct _NSRange)arg2 ofTotalItemCount:(long long)arg3 normalizedWeights:(in double *)arg4 useSaliency:(BOOL)arg5;
- (void)getComputedRects:(out struct CGRect *)arg1 contentSize:(out struct CGSize *)arg2 forReferenceSize:(struct CGSize)arg3 interTileSpacing:(double)arg4;
- (void)_enumerateRectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)_initRectsStorageWithDescriptors:(id)arg1;
- (id)initWithDescriptorDictionary:(id)arg1;
- (id)init;

@end

