//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TDPackerNode : NSObject
{
    BOOL _used;
    BOOL _fit;
    _TDPackerNode *_down;
    _TDPackerNode *_right;
    void *_node;
    struct CGSize _size;
    struct CGPoint _origin;
}

@property(nonatomic) void *node; // @synthesize node=_node;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) BOOL fit; // @synthesize fit=_fit;
@property(retain, nonatomic) _TDPackerNode *right; // @synthesize right=_right;
@property(retain, nonatomic) _TDPackerNode *down; // @synthesize down=_down;
@property(nonatomic) BOOL used; // @synthesize used=_used;
- (void)dealloc;

@end

