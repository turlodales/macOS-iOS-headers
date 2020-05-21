//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>
#import <AppKit/NSTextViewportLayoutObserver-Protocol.h>

@protocol NSTextViewportElement;

@protocol NSTextViewportLayoutDelegate <NSObject, NSTextViewportLayoutObserver>
@property(readonly) struct CGPoint viewportAnchor;
@property(readonly) struct CGRect viewport;
- (void)layoutElement:(id <NSTextViewportElement>)arg1;
@end

