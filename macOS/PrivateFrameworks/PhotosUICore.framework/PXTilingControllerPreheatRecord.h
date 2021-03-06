//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;
@protocol PXTilingControllerPreheatHandler;

@interface PXTilingControllerPreheatRecord : NSObject
{
    id <PXTilingControllerPreheatHandler> _preheatHandler;
    void *_context;
    unsigned long long _tileGroup;
    NSIndexSet *_preheatedTileIndexes;
    struct NSEdgeInsets _padding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexSet *preheatedTileIndexes; // @synthesize preheatedTileIndexes=_preheatedTileIndexes;
@property(nonatomic) struct NSEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) unsigned long long tileGroup; // @synthesize tileGroup=_tileGroup;
@property(readonly, nonatomic) void *context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak id <PXTilingControllerPreheatHandler> preheatHandler; // @synthesize preheatHandler=_preheatHandler;
- (id)initWithPreheatHandler:(id)arg1 context:(void *)arg2;

@end

