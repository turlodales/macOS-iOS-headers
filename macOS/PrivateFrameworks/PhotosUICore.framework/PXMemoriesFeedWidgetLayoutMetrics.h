//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXMemoriesFeedLayoutMetrics.h>

@interface PXMemoriesFeedWidgetLayoutMetrics : PXMemoriesFeedLayoutMetrics
{
    unsigned long long _numberOfColumns;
    unsigned long long _numberOfRows;
    long long _layoutAxis;
    struct CGSize _interitemSpacing;
}

@property(nonatomic) long long layoutAxis; // @synthesize layoutAxis=_layoutAxis;
@property(nonatomic) struct CGSize interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

