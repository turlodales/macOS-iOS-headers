//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/NSObject-Protocol.h>

@class EMMailbox, NSString;

@protocol EMMailboxBuilder <NSObject>
@property(nonatomic) BOOL descriptionUsesRealName;
@property(nonatomic) __weak EMMailbox *parent;
@property(nonatomic) BOOL canArchive;
@property(nonatomic) BOOL canContainMessages;
@property long long type;
@property(copy) NSString *name;
@end

