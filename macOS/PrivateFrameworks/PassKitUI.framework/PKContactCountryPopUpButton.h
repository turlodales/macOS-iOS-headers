//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopUpButton.h"

@class NSMenuItem;

@interface PKContactCountryPopUpButton : NSPopUpButton
{
    BOOL _hasError;
    NSMenuItem *_errorItem;
}

+ (Class)cellClass;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMenuItem *errorItem; // @synthesize errorItem=_errorItem;
@property(nonatomic) BOOL hasError; // @synthesize hasError=_hasError;
- (void)_notifySelectionWillChange:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

