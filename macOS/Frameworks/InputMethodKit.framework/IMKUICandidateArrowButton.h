//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSImage;

@interface IMKUICandidateArrowButton : NSButton
{
    NSImage *_arrowImageDown;
    NSImage *_arrowImageUp;
    BOOL _pointsUpwards;
    BOOL _visible;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL pointsUpwards; // @synthesize pointsUpwards=_pointsUpwards;
@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
@property(retain, nonatomic) NSImage *arrowImageUp; // @synthesize arrowImageUp=_arrowImageUp;
@property(retain, nonatomic) NSImage *arrowImageDown; // @synthesize arrowImageDown=_arrowImageDown;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;

@end

