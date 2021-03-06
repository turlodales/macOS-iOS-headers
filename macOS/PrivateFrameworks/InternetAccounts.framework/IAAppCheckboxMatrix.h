//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InternetAccounts/IAAppCheckboxMatrixRowItemDelegateProtocol-Protocol.h>

@class NSMutableArray, NSView;
@protocol IAAppCheckboxMatrixRowItemDelegateProtocol;

@interface IAAppCheckboxMatrix : NSObject <IAAppCheckboxMatrixRowItemDelegateProtocol>
{
    NSMutableArray *_items;
    NSView *_view;
    id _delegate;
}

- (void).cxx_destruct;
@property(retain) id <IAAppCheckboxMatrixRowItemDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (double)rowHeight;
- (id)selectedItems;
- (id)itemForApp:(id)arg1;
- (void)syncUI;
- (void)checkboxClicked:(id)arg1;
- (id)view;
- (id)initWithItems:(id)arg1;

@end

