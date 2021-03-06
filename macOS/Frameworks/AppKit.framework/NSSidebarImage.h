//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSImage.h>

__attribute__((visibility("hidden")))
@interface NSSidebarImage : NSImage
{
    NSImage *_sourceImage;
    BOOL _emphasized;
    BOOL _selected;
    BOOL _active;
}

@property(retain) NSImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(getter=isActive) BOOL active; // @synthesize active=_active;
@property(getter=isEmphasized) BOOL emphasized; // @synthesize emphasized=_emphasized;
@property(getter=isSelected) BOOL selected; // @synthesize selected=_selected;
- (id)name;
- (void)_drawMappingAlignmentRectToRect:(struct CGRect)arg1 withState:(unsigned long long)arg2 backgroundStyle:(int)arg3 tintColor:(id)arg4 operation:(unsigned long long)arg5 fraction:(double)arg6 flip:(BOOL)arg7 hints:(id)arg8;
- (BOOL)isTemplate;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 respectFlipped:(BOOL)arg5 hints:(id)arg6;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4;
- (void)drawAtPoint:(struct CGPoint)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4;
- (struct CGImage *)CGImageForProposedRect:(struct CGRect *)arg1 context:(id)arg2 hints:(id)arg3;
- (struct CGRect)alignmentRect;
- (struct CGSize)size;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSourceImage:(id)arg1;

@end

