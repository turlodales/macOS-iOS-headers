//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSTextField, NSTextView;

__attribute__((visibility("hidden")))
@interface SLXShareWindowBackgroundView : NSView
{
    NSTextView *_messageTextView;
    NSTextField *_charactersCountTextField;
    int _textureStyle;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawSeparationLineAtHeight:(double)arg1;
@property int textureStyle; // @synthesize textureStyle=_textureStyle;

@end

