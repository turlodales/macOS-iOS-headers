//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMenuItem.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WebsiteIconMenuItem : NSMenuItem
{
    NSString *_URLString;
    id _faviconRequestToken;
}

- (void).cxx_destruct;
- (void)requestIcon;
- (void)setMenu:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3 URLString:(id)arg4;

@end

