//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSPredicate, NSPredicateEditor;

@interface AMSmartGroupsPredicateViewController : NSViewController
{
    NSPredicate *_criteria;
    NSPredicateEditor *_editor;
}

- (void).cxx_destruct;
@property __weak NSPredicateEditor *_editor; // @synthesize _editor;
@property(retain, nonatomic) NSPredicate *criteria; // @synthesize criteria=_criteria;
- (void)awakeFromNib;

@end

