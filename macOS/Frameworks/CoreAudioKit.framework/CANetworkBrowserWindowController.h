//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class CANetworkBrowserImpl;

@interface CANetworkBrowserWindowController : NSWindowController
{
    CANetworkBrowserImpl *_impl;
}

+ (BOOL)isAVBSupported;
- (void)close;
- (void)windowDidLoad;
- (void)awakeFromNib;
- (id)init;

@end

