//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

#import "EFSQLBindable.h"

@class EFSQLBinding, NSString;

@interface NSData (EmailFoundationAdditions) <EFSQLBindable>
@property(readonly, copy) NSData *ef_sha256Digest;
- (id)ef_sha256DigestWithSalts:(id)arg1;
@property(readonly, copy) NSString *ef_hexString;
@property(readonly, copy) NSData *ef_md5Digest;
@property(readonly, nonatomic) EFSQLBinding *ef_SQLBinding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

