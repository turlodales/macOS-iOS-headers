//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage, NSString;

@interface IMKUICandidateStepperAccessoryImageView : NSView
{
    NSImage *_arrowImage;
    NSString *_arrowImageName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *arrowImageName; // @synthesize arrowImageName=_arrowImageName;
@property(readonly, retain, nonatomic) NSImage *arrowImage; // @synthesize arrowImage=_arrowImage;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

