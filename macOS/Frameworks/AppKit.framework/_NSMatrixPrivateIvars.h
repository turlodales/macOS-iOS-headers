//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCell, NSColor;

__attribute__((visibility("hidden")))
@interface _NSMatrixPrivateIvars : NSObject
{
    long long _keyCol;
    NSColor *_cellBackgroundColor;
    long long _drawingRow;
    long long _drawingCol;
    long long _matrixMDFlags;
    struct __MFlags2 {
        unsigned int RESERVED:32;
    } _mFlags2;
    long long _keyRow;
    long long _getRowColumnOfCellLastFoundIndexCache;
    NSCell *_clickedCell;
}

@end

