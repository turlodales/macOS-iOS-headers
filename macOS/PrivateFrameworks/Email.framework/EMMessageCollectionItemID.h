//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EMCollectionItemID-Protocol.h>

@class NSString;

@interface EMMessageCollectionItemID : NSObject <EMCollectionItemID>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)messageCollectionItemIDForMessageIDHeaderHash:(id)arg1 mailboxScope:(id)arg2;
+ (id)messageCollectionItemIDForDatabaseID:(long long)arg1;
+ (id)unarchivingObjectClassSet;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

