//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "ProgressReceiver.h"

__attribute__((visibility("hidden")))
@interface ProgressReceivingView : NSView <ProgressReceiver>
{
    id <ProgressReceivingViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ProgressReceivingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)progressSenderProgressDidComplete:(id)arg1;
- (void)progressSenderProgressDidChange:(id)arg1;
- (void)progressSenderProgressWillStart:(id)arg1;

@end

