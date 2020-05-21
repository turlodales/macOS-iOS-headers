//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProgress.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface BRProgressProxy : NSProgress
{
    NSURL *_url;
    id _globalProgressSubscriber;
    id <BRProgressProxyDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <BRProgressProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

