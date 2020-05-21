//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InputMethodKit/IMKUIView.h>

@class NSColor;

@interface IMKCandidateUnitViewContentView : IMKUIView
{
    NSColor *_backgroundColor;
    BOOL _drawsBackgroundColor;
}

@property(nonatomic) BOOL drawsBackgroundColor; // @synthesize drawsBackgroundColor=_drawsBackgroundColor;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)shouldUpdateForPressAndHold:(id)arg1 position:(struct CGPoint)arg2 with:(long long)arg3;
- (void)touchesEnded:(id)arg1 position:(struct CGPoint)arg2;
- (void)scrubbed:(id)arg1 position:(struct CGPoint)arg2;
- (void)tapped:(id)arg1 position:(struct CGPoint)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)dealloc;

@end

