//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSImage, NSString;

@interface CNUIUserActionItemList : NSObject
{
    NSString *_type;
    NSImage *_icon;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (id)initWithItems:(id)arg1 type:(id)arg2 icon:(id)arg3;

@end

