//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@protocol CPKEmojiIMViewControllerDelegate;

@interface CPKEmojiIMViewController : NSViewController
{
    id <CPKEmojiIMViewControllerDelegate> _delegate;
}

+ (id)createAssociatedWindowsOverWindowLevel:(long long)arg1;
+ (void)startDataPreparation;
@property(nonatomic) id <CPKEmojiIMViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getStateInfo;
- (void)setSearchResults:(id)arg1;
- (void)willOpenedForSearching;
- (void)reset;
- (void)setPreviewWindowLocationProvider:(CDUnknownBlockType)arg1;
- (void)setAssociatedWindows:(id)arg1 withLocationProvider:(CDUnknownBlockType)arg2;
- (id)initWithState:(id)arg1;

@end

