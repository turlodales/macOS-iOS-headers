//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSScrubberLayoutAttributes;

__attribute__((visibility("hidden")))
@interface NSScrubberChangeTransition : NSObject
{
    id _view;
    NSScrubberLayoutAttributes *_fromAttr;
    NSScrubberLayoutAttributes *_toAttr;
    BOOL _isExiting;
}

@property(getter=isExiting) BOOL exiting; // @synthesize exiting=_isExiting;
@property(retain) id view; // @synthesize view=_view;
@property(retain) NSScrubberLayoutAttributes *toAttr; // @synthesize toAttr=_toAttr;
@property(retain) NSScrubberLayoutAttributes *fromAttr; // @synthesize fromAttr=_fromAttr;
- (id)description;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

