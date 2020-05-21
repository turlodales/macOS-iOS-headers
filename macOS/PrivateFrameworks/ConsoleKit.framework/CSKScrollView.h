//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrollView.h"

@class NSObject<OS_dispatch_source>;

@interface CSKScrollView : NSScrollView
{
    BOOL _postsDidEndResizeNotifications;
    NSObject<OS_dispatch_source> *_resizingEventsSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *resizingEventsSource; // @synthesize resizingEventsSource=_resizingEventsSource;
@property(nonatomic) BOOL postsDidEndResizeNotifications; // @synthesize postsDidEndResizeNotifications=_postsDidEndResizeNotifications;
- (void)viewFrameDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;

@end

