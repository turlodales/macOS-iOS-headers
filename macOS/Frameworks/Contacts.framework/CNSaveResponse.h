//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CNSaveResponse : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_contactSnapshotsByIndexPath;
    NSMutableDictionary *_groupSnapshotsByIndexPath;
    NSMutableDictionary *_containerSnapshotsByIndexPath;
    BOOL _didAffectMeCard;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) BOOL didAffectMeCard;
- (void)applySnapshotsToSaveRequest:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

