//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRGroup.h>

__attribute__((visibility("hidden")))
@interface SCRFinderGroup : SCRGroup
{
    unsigned long long _numOfAXChildren;
}

- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (id)_columnViewTextElementChild;
- (void)prepareBrailleItemDescriptionForRequest:(id)arg1 hasBrailleFocus:(BOOL)arg2;
- (void)addItemDescriptionToRequest:(id)arg1;
- (id)typeDescription;
- (void)handleSelectionChange:(id)arg1;
- (BOOL)_isFinderHeaderStyleIconView;
- (BOOL)_containsListChildren;
- (BOOL)needToRebuildChildren;
- (void)setChildren:(id)arg1;

@end

