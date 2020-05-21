//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABCollectionAction.h"

@class CNUIUserActionItem, NSString;

@interface CNCollectionUserActionItem : NSObject <ABCollectionAction>
{
    CNUIUserActionItem *_actionItem;
    id <CNUIUserActionContext> _context;
}

+ (id)actionTypeForGlyphName:(id)arg1;
@property(readonly, nonatomic) id <CNUIUserActionContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) CNUIUserActionItem *actionItem; // @synthesize actionItem=_actionItem;
- (void)executeWithTarget:(id)arg1;
- (BOOL)validateWithTarget:(id)arg1;
@property(readonly, nonatomic) NSString *actionType;
- (void)dealloc;
- (id)initWithUserActionItem:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

