//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableView.h>

@protocol _MKClickableTableViewDelegate;

@interface _MKClickableTableView : NSTableView
{
    id <_MKClickableTableViewDelegate> _clickableDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_MKClickableTableViewDelegate> clickableDelegate; // @synthesize clickableDelegate=_clickableDelegate;
- (void)mouseDown:(id)arg1;

@end

