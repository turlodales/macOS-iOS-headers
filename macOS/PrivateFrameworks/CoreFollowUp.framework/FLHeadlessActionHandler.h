//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FLFollowUpItem;

@interface FLHeadlessActionHandler : NSObject
{
    FLFollowUpItem *_item;
}

+ (id)handlerWithItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FLFollowUpItem *item; // @synthesize item=_item;
- (void)dealloc;
- (void)handleExtensionBasedAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithItem:(id)arg1;

@end

