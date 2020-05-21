//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitMacHelper/UINSToolbarItem.h>

#import "UINSFlexibleSpaceToolbarItem.h"

@class NSString, NSView;

__attribute__((visibility("hidden")))
@interface UINSFlexibleSpaceToolbarItem : UINSToolbarItem <UINSFlexibleSpaceToolbarItem>
{
    NSView *_customSpace;
}

- (void).cxx_destruct;
- (struct CGSize)maxSize;
- (struct CGSize)minSize;
- (BOOL)isSpace;
- (BOOL)isSeparatorItem;
- (void)prepareItem;

// Remaining properties
@property(copy, nonatomic) id <UINSAccessibilityInfo> accessibilityInfo;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *label;

@end

