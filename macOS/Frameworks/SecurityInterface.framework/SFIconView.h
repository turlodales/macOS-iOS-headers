//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

@class NSImage;

__attribute__((visibility("hidden")))
@interface SFIconView : NSImageView
{
    NSImage *_badge;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)setImage:(id)arg1 badge:(id)arg2;
- (BOOL)acceptsFirstResponder;
- (void)dealloc;

@end

