//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage;

@interface FRTabBarItemBadgedIcon : NSObject
{
    NSImage *_icon;
    struct CGRect _badgeRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect badgeRect; // @synthesize badgeRect=_badgeRect;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
- (id)initWithIcon:(id)arg1 badgeRect:(struct CGRect)arg2;

@end

