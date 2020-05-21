//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class AKAnnotationTheme, AKNoteMarginView, NSString;

@interface AKNoteAnimationWindowController : NSWindowController
{
    AKNoteMarginView *_marginView;
}

+ (id)newNoteWindowController;
- (void).cxx_destruct;
@property(retain, nonatomic) AKNoteMarginView *marginView; // @synthesize marginView=_marginView;
@property(retain, nonatomic) AKAnnotationTheme *theme;
@property(retain, nonatomic) NSString *noteText;
- (void)animateFromScreenRect:(struct CGRect)arg1 toScreenRect:(struct CGRect)arg2 useScaling:(BOOL)arg3 parentWindow:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

