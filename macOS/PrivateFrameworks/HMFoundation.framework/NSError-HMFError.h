//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

#import <HMFoundation/HMFObject-Protocol.h>

@class NSArray, NSString;

@interface NSError (HMFError) <HMFObject>
+ (id)hmfErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hmfErrorWithCode:(long long)arg1;
+ (id)hmfErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmfErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmfErrorWithCode:(long long)arg1 reason:(id)arg2 suggestion:(id)arg3 underlyingError:(id)arg4;
+ (id)hmfErrorWithCode:(long long)arg1 reason:(id)arg2 suggestion:(id)arg3;
+ (id)hmf_errorWithException:(id)arg1;
+ (id)shortDescription;
+ (id)hmf_unarchiveFromData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic, getter=isHMFError) BOOL hmfError;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@end

