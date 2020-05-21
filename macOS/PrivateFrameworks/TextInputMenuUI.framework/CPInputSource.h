//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInputMenuUI/InputSource.h>

@class NSBundle, NSString;

@interface CPInputSource : InputSource
{
    NSString *fShowPalatteString;
    NSString *fHidePalatteString;
    NSString *fComponentBundleID;
    NSBundle *fSourceBundle;
}

+ (id)inputSourceWithTSMInputSourceRef:(struct __TSMInputSource *)arg1 andOwner:(id)arg2;
- (void)dealloc;
- (id)displayName;
- (id)bundle;
- (id)bundleID;
- (id)paletteIcon;
- (id)alternateIcon;
- (id)icon;
- (BOOL)isSelected;
- (BOOL)activateForcibly:(id)arg1;
- (BOOL)activate:(id)arg1;
- (id)initWithTSMInputSourceRef:(struct __TSMInputSource *)arg1 andOwner:(id)arg2;

@end

