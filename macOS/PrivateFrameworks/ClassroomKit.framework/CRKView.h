//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface CRKView : NSView
{
    BOOL _suppressMouseDown;
    NSColor *_crk_backgroundColor;
    NSColor *_crk_borderColor;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL suppressMouseDown; // @synthesize suppressMouseDown=_suppressMouseDown;
@property(retain, nonatomic) NSColor *crk_borderColor; // @synthesize crk_borderColor=_crk_borderColor;
@property(retain, nonatomic) NSColor *crk_backgroundColor; // @synthesize crk_backgroundColor=_crk_backgroundColor;
- (void)mouseDown:(id)arg1;
- (void)updateLayer;
- (void)buildView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

