//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSImage.h>

@class NSColor;

__attribute__((visibility("hidden")))
@interface SGTLabelSwatchColorImage : NSImage
{
    NSColor *color;
}

- (void).cxx_destruct;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 respectFlipped:(BOOL)arg5 hints:(id)arg6;
- (struct CGSize)size;
- (id)initWithColor:(id)arg1;

@end

