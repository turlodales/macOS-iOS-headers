//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKRecordValue.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CKRecordID, NSString;

@interface CKReference : NSObject <CKRecordValue, NSSecureCoding, NSCopying>
{
    unsigned long long _referenceAction;
    CKRecordID *_recordID;
}

+ (BOOL)supportsSecureCoding;
+ (int)ckdpReferenceTypeForCKReferenceAction:(unsigned long long)arg1;
+ (unsigned long long)ckReferenceActionForCKDPRecordReferenceType:(int)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(readonly, nonatomic) unsigned long long referenceAction; // @synthesize referenceAction=_referenceAction;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecord:(id)arg1 action:(unsigned long long)arg2;
- (id)initWithRecordID:(id)arg1 action:(unsigned long long)arg2;
- (id)_initBare;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

