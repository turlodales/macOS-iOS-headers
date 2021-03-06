//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class PKLinedPaper;

@interface PKMacLinedPaperView : NSView
{
    BOOL _darkMode;
    PKLinedPaper *_linedPaper;
    double _yOrigin;
}

+ (void)renderLinedPaper:(id)arg1 color:(id)arg2 backingScale:(double)arg3 context:(struct CGContext *)arg4 frame:(struct CGRect)arg5 dirtyRect:(struct CGRect)arg6 yOrigin:(double)arg7;
- (void).cxx_destruct;
@property(nonatomic) BOOL darkMode; // @synthesize darkMode=_darkMode;
@property(nonatomic) double yOrigin; // @synthesize yOrigin=_yOrigin;
@property(retain, nonatomic) PKLinedPaper *linedPaper; // @synthesize linedPaper=_linedPaper;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;

@end

