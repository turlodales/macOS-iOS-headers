//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSTabCompletionMatch.h>

@class NSUUID;

@interface WBSBrowserTabCompletionMatch : WBSTabCompletionMatch
{
    NSUUID *_tabUUID;
    NSUUID *_windowUUID;
    unsigned long long _tabIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property(readonly, nonatomic) NSUUID *windowUUID; // @synthesize windowUUID=_windowUUID;
@property(readonly, nonatomic) NSUUID *tabUUID; // @synthesize tabUUID=_tabUUID;
- (id)parsecDomainIdentifier;
- (id)initWithTabUUID:(id)arg1 windowUUID:(id)arg2 tabIndex:(unsigned long long)arg3 userTypedString:(id)arg4 tabURL:(id)arg5 tabTitle:(id)arg6 forQueryID:(long long)arg7;

@end

