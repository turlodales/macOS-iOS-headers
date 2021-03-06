//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXNewMagazineGrid : NSObject
{
    long long *_table;
    unsigned long long _tableSizeInBytes;
    long long _maxRows;
    unsigned long long _numberOfColumns;
}

@property(readonly, nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (BOOL)_isEmptyGrid;
- (unsigned long long)_rowsUsed;
@property(readonly, nonatomic) unsigned long long endingType;
- (long long)_numberOfEmptyTilesAtTheEnd;
- (BOOL)_hasAnyEmptyTilesInArea:(struct PXMagazineRect)arg1;
- (long long)_numberOfEmptyTilesInArea:(struct PXMagazineRect)arg1;
- (BOOL)_hasAnyTilesUsedInArea:(struct PXMagazineRect)arg1;
- (BOOL)isGoodEnding;
- (BOOL)isPerfectEnding;
- (BOOL)nextEmptyTileX:(long long *)arg1 Y:(long long *)arg2 maxWidth:(long long *)arg3;
- (void)clearArea:(struct PXMagazineRect)arg1;
- (void)setTileIdentifier:(unsigned long long)arg1 forArea:(struct PXMagazineRect)arg2;
- (void)enlargeTable;
- (void)resetWithSize:(unsigned long long)arg1;
- (void)reset;
@property(readonly, nonatomic) unsigned long long currentRowsUsed;
- (void)setNumberOfColumns:(long long)arg1;
- (void)dealloc;
- (id)initWithNumberOfColumns:(long long)arg1 size:(unsigned long long)arg2;
- (id)init;

@end

